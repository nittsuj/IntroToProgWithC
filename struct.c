#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct Point  {
    int x;
    int y;
};

struct = keyword
Point = structure name
*/

/*
typedef struct Point {
    int x;
    int y;
} point;

typedef is a keyword that provides an existing alias for the struct
in a function for instances int additiona(struct POINT P)
could be as ==> int additiona(point P)
*/

// %[^\n]%*c btw this is a scanning data type for a separate stirng (for instance two names, or a sentence)

struct CollegeStudent {
    int age;
    char phone[20];
    char name[20];
};

int main() {
    struct CollegeStudent stud1;

    stud1.age = 20;
    strcpy(stud1.name, "Coriolanus Snow");
    strcpy(stud1.phone, "0101o01");

    printf("%s %s\n", stud1.name, stud1.phone);
    //stud1.name = "Coriolanus Snow";    strings cannot be inputed like that, it should be strcpy
    //stud1.phone = "0810101";
}