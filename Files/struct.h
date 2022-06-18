#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cinttypes>
#include <inttypes.h>
#include <algorithm>
#include <cstring>
#pragma once

struct Student
{
    char name[69420];
    char majors[69420];
    int age;
    double gpa;
};

int struction()
{
    struct Student student1;
    student1.age = 18;
    student1.gpa = 4.7;
    strcpy(student1.name, "Goutham Pedinedi");
    strcpy(student1.majors, "Math, Physics, and Business");

    struct Student student2;
    student2.age = 18;
    student2.gpa = 4.7;
    strcpy(student2.name, "Vihaan Bendigiri");
    strcpy(student2.majors, "Art and Comics");
    printf("%s", student1.majors);

    return 0;
}