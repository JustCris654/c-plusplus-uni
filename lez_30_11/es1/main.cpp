#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream in_file;
    ofstream out_file;
    char file_path[] = "./input";
    in_file.open(file_path, ios::in);
    out_file.open(file_path, ios::app);

    char ch;
    int count = 0;
    int sum = 0;
    int total_nums = 0;
    while (in_file >> noskipws >> ch) {
        if(ch != ' ' && ch != '\n'){
            count++;
        } else {
            sum += count;
            total_nums++;
            count = 0;
        }
    }

    int asterisks = sum / total_nums;
    for (int i = 0; i < asterisks; i++){
        out_file << '*';
    }
    out_file << '\n';

    in_file.close();
    out_file.close();
    return 0;
}
