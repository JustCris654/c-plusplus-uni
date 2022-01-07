#include <iostream>
#include <fstream>

using namespace std;

bool check_text_write_file(char *text) {
    bool last_u = false, is_u = false, next_not_m = false;
    unsigned int count_i = 0;

    char cur_char = *text++;
    if (cur_char == 'M') {
        last_u = true;
    }
    while(cur_char != '\0'){
        if (cur_char == 'I') {
            count_i++;
            next_not_m = true;
        }
        if (cur_char == 'U') {
            is_u = true;
        } else {
            is_u = false;
        }
        if (next_not_m) {
            next_not_m = false;
            if (cur_char == 'M') return false;
        }
        cur_char = *text++;
    }
    if ((count_i % 2 != 0 || count_i == 0) && (last_u && is_u)) {
        return true;
    } else {
        return false;
    }
}


int main(int argc, char *argv[]) {
    (void)argc;

    char *program = *argv++;
    if (program == nullptr) {
        fprintf(stderr, "Unexpected error!\n");
        exit(1);
    }
    char *input_filepath = *argv++;
    char *output_filepath = *argv++;
    if (input_filepath == nullptr || output_filepath == nullptr) {
        fprintf(stderr, "Usage: %s <input_filepath> <output_filepath>\n", program);
    }

    // program
    ifstream file;
    ofstream out_file;
    file.open(input_filepath, ios::in);
    out_file.open(output_filepath, ios::out);

    if(!out_file.is_open()) {
        fprintf(stderr, "Could not open file %s\n", output_filepath);
    }

    if(file.is_open()) {
        char word[100];
        while (file >> word) {
            bool is_miu = check_text_write_file(word);
            if (is_miu) {
                out_file << word << '\n';
            }
        }
    } else {
        fprintf(stderr, "Could not open file %s\n", input_filepath);
        exit(1);
    }

    // close files
    file.close();
    out_file.close();

    return 0;
}
