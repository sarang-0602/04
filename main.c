#include <stdio.h>

int main(int argc, char *argv[]) {
    int year;
    int isLeap;

    printf("input the year :");
    scanf("%i", &year);

    isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("is the year %i the leap year? : %i\n", year, isLeap);

    return 0;
}