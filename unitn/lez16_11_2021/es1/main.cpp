#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    char name[50];
    char surname[50];
    int id;
    double avg;
};

void printStudent(Student p);
Student defineStudent(char name[], char surname[], int id, double avg);

int main(int argc, char **argv){
    char name[50] = "Matteo";
    char surname[50] = "Brusarosco";
    int id = 04;
    double avg = 7.59;
    Student p = defineStudent(name, surname, id, avg);
    printStudent(p);
}

void printStudent(Student p){
    cout << "Student no. " << p.id << ":\n" <<
        "    name -> " << p.name << '\n' <<
        "    surname -> " << p.surname << '\n' <<
        "    avg -> " << p.avg << '\n';
}

Student defineStudent(char name[], char surname[], int id, double avg){
    Student p;
    strcpy(p.name, name);
    strcpy(p.surname, surname);
    p.id = id;
    p.avg = avg;
    return p;
}
