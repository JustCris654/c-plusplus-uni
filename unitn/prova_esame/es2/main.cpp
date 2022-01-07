#include <iostream>
#include <fstream>

using namespace std;

int to_upper(char &l) {
    if (l >= 'a' && l <= 'z'){
        l = (l - 'a') + 'A';
        return 0;
    } else {
        return -1;
    }
}

int main(int argc, char *argv[]) {

    ifstream file;
    ofstream output;
    file.open("input.txt", ios::in);
    output.open("output.txt", ios::out);

    if (file.is_open()){
        char line[1000];
        bool to_up = true;
        int i;
        while(file.getline(line, 1000)){
            for (i = 0; line[i] != '\0'; i++){
                if (line[i] == '.' || line[i] == '!' || line[i] == '?'){
                    to_up = true;
                } else if (to_up && line[i] != ' ') {
                    to_upper(line[i]);
                    to_up = false;
                }
            }
            output << line << '\n';
        }
    } else {
        cout << "Could not open file!\n";
    }
    file.close();

    return 0;
}
