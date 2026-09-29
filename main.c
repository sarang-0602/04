#include <stdio.h>

int main(int argc, char *argv[]) {
    int sec;        
    int minute, second;

    printf("input the second : ");
    scanf("%d", &sec);

    minute = sec / 60;   
    second = sec % 60;   

    printf("the time is %d : %d\n", minute, second);

    return 0;
}
