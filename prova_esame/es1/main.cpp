#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream file;
    file.open("input.txt", ios::in);

    if (file.is_open()){
        char line[100];
        int nums = 0;
        int res = 0;
        while(file.getline(line, 100)){
            cout << "- Checking: " << line << '\n';
            for (int i = 0; line[i] != '\0'; i++){
                if (line[i] >= '0' && line[i] <= '9') nums++;
                else if (line[i] != ' ') nums = 0;

                if (nums == 16) {
                    res++;
                    nums = 0;
                    cout << "    * Founded one!\n";
                }
            }
            nums = 0;
        }

        cout << "Numeri: " << res << '\n';
    }

    file.close();

    return 0;
}
