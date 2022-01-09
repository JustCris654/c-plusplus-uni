#include <iostream>
#include <cstdlib>

using namespace std;

void create_pascal_triangle(int **t, int height, int i, int j) {
    if (i == height) return;
    if (i == 0) {
        t[i][0] = 1;
        return create_pascal_triangle(t, height, i+1, 0);
    }
    if (j == 0 || j == i) {
        t[i][j] = 1;
        if (j == 0) return create_pascal_triangle(t, height, i, j+1);
        else if (j == i) return create_pascal_triangle(t, height, i+1, 0);
    } else {
        t[i][j] = t[i-1][j-1] + t[i-1][j];
        return create_pascal_triangle(t, height, i, j+1);
    }
}

int **pascal_triangle(int height) {
    int **pas_triangle = new int*[height];
    for (auto i = 0; i < height; ++i) {
        pas_triangle[i] = new int[height];
    }
    create_pascal_triangle(pas_triangle, height, 0, 0);
    return pas_triangle;
}

int get_pt_num(int row, int col) {
    if (row < 1 || col < 1) {
        cout << "Not possibile with negative row or col\n";
        return -1;
    }
    if (row == 1 || row == col || col == 1) {
        return 1;
    }
    return get_pt_num(row-1, col) + get_pt_num(row-1, col-1);
}

int main(int argc, char *argv[]) {
    (void) argc;

    char *program = *argv++;
    if (program == nullptr) {
        fprintf(stderr, "Error!\n");
        exit(1);
    }
    char *pt_height = *argv++;
    if (pt_height == nullptr) {
        fprintf(stderr, "Usage: %s <triangles_height>\n", program);
        exit(1);
    }

    int row = 0, col = 0;
    cout << "Inserisci riga: ";
    cin >> row;
    cout << "Inserisci riga: ";
    cin >> col;
    int res = get_pt_num(row, col);
    cout << "Res: " << res << endl;

    const auto height = atoi(pt_height);
    int **pt = pascal_triangle(height);

    for (auto i = 0; i < height; ++i) {
        for (int j = i; j >= 0; --j) {
            cout << pt[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
