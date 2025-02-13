#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"


struct School{
    struct SchoolClass classes[20];    
    struct SchoolRoom rooms[10];       
};

int main() {

    struct School mySchool;

    mySchool.classes[0].classNumber = 10;
    mySchool.classes[0].classLetter = 'A';

    printf("Class: %d%s\n", mySchool.classes[0].classNumber, &mySchool.classes[0].classLetter);

    return 0;
}
