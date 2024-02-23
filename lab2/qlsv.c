#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "myRandom.h"

#define MAX_NAME_CHAR_LENGTH 100
#define MAX_DOB_CHAR__LENGTH 10
#define MAX_STUDENT_CLASS_LENGTH 15
#define MAX_ADDRESS_CHAR_LENGTH 256
#define MAX_STUDENT_CODE_CHAR_LENGTH 256
#define MAX_STUDENT_LIST 256 8

typedef struct Student {
    char name[MAX_NAME_CHAR_LENGTH];
    char dateOfBirth[MAX_DOB_CHAR__LENGTH];
    char studentClass[MAX_STUDENT_CLASS_LENGTH];
    char address[MAX_ADDRESS_CHAR_LENGTH];
    char studentCode[MAX_STUDENT_CODE_CHAR_LENGTH];
    float score;

} ST;

void showMenu() {
    printf("\t\t***HVGIANG***\n");
    printf("\tmenu:\n");
    printf("\t1. Tao danh sach sv luu ra 1 file\n");
    printf("\t2. Tim sv trong file\n");
    printf("\t3. Hien thi ds sv theo lop\n");
    printf("\t4. Tach file sv thanh cac file sv theo lop\n");
    printf("\t5. Them sv moi vao file\n");
    printf("\t6. Sua thong tin sinh vien\n");
    printf("\t7. Loai bo sv trong lop\n");
    printf("\t8. Sap xep ds sv\n");
    printf("\t9. Exit\n");
}

ST* allocNewStudent() {
    ST *ptr = (ST *)malloc(sizeof(ST));
    return ptr;
}

void generateRandomStudentList(ST* list, int* amount, int size) {
    list = (ST *)malloc(sizeof(ST)*size);

    for (int i = 0; i < size; ++i) {
        randomName(list[i].name);
        randomStudentCode(list[i].studentCode);
        puts(list[i].studentCode);
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));
    ST *studentList = NULL;
    int studentAmount = 0;
    int initListSize = 10;

    generateRandomStudentList(studentList, &studentAmount, initListSize);

    showMenu();
}


