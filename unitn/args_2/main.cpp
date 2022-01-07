#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main(int argc, char *argv[]){
    assert(argc == 2 && "Usage: ./main [file_path]");

    string file_path = argv[1];
    fstream file;

    file.open(file_path, ios::in);
    if(file.is_open()){
        string line="";
        while(getline(file, line)){
            cout << line << "\n";
        }
    }
    file.close();
    return 0;
}
