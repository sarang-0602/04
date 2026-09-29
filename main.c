#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b;

    printf("input two integers : ");
    scanf("%i %i", &a, &b);          

    printf("+ result is %d\n", a + b);
    printf("- result is %d\n", a - b);
    printf("* result is %d\n", a * b);
    printf("/ result is %d\n", a / b);   
    printf("%% result is %d\n", a % b);  

    return 0;
}
