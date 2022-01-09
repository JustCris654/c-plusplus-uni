#include <iostream>
#include <fstream>

using namespace std;

bool check_lenght(char *word, size_t &lenght) {
  size_t i = 0;
  for (i = 0; word[i] != '\0'; ++i) {
    ;
  }
  lenght = i;
  return (i)%2 == 0;
}

int main(int argc, char * argv[]) {
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
    exit(1);
  }

  ifstream file;
  ofstream output;
  file.open(input_filepath, ios::in);
  output.open(output_filepath, ios::out);

  if (!output.is_open()) {
    fprintf(stderr, "Could not open file: %s\n", output_filepath);
    exit(1);
  }
  if (file.is_open()) {
    char word[100];
    char words_to_copy[10000][100];
    size_t x_i = 0;
    while (file >> word) {
      size_t lenght;
      if (check_lenght(word, lenght)) {
        memcpy(words_to_copy[x_i++], word, lenght+1);
      }
    }

    if (file.fail() && !file.eof()) {
      fprintf(stderr, "Error during file reading: %s\n", input_filepath);
      exit(1);
    }

    size_t i = x_i;
    while(i>0){
      output << words_to_copy[--i] << " ";
    }
  } else {
    fprintf(stderr, "Could not open file: %s\n", input_filepath);
    exit(1);
  }

  file.close();
  output.close();

  return 0;
}
