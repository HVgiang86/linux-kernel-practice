#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 256
const char* first_names[] = {
    "Giang", "Trung", "An", "Toan", "Hieu", "Duong"};
const char *last_names[] = {
    "Hoang Van", "Nguyen Minh", "Ngo Tuan", "Trinh Van"};
const char *major_codes[] = {
    "AT", "CT", "DT"};

void randomName(char* full_name) {
    int ran_first_name_index = rand() % (sizeof(first_names) / sizeof(char *));
    int ran_last_name_index = rand() % (sizeof(last_names) / sizeof(char *));

    strcpy(full_name, last_names[ran_last_name_index]);
    int t = strlen(full_name);
    full_name[t] = ' ';
    full_name[t + 1] = '\0';
    strcat(full_name, first_names[ran_first_name_index]);
    printf("Random name: %s\n", full_name);
}

void randomStudentCode(char* stdCode) {
    int major_code_ran = rand() % 3;
    strcpy(stdCode, major_codes[major_code_ran]);

    int grade = rand() % (20 - 10) + 10 + 1;
    int classNumber = rand() % 6 + 1;
    int studentNumber = rand() % 99 + 1;

    stdCode[2] = grade / 10 + '0';
    stdCode[3] = grade%10 + '0';
    stdCode[4] = classNumber/10 + '0';
    stdCode[5] = classNumber % 10 + '0';
    stdCode[6] = studentNumber / 10 + '0';
    stdCode[7] = studentNumber % 10 + '0';
    stdCode[8] = '\0';
}

void getClassFromStudentCode(char* className, char* studentCode) {
    strncpy(className, studentCode, 2);
    
}