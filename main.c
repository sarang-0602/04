#include <stdio.h>

int main(int argc, char *argv[]) {
    int sec;
    int h, m, s;

    printf("input the second : ");
    scanf("%i", &sec);

    h = sec / 3600;          // 1시간 = 3600초
    m = (sec % 3600) / 60;   // 시간을 빼고 남은 초 → 분
    s = sec % 60;            // 60으로 나눈 나머지 → 초

    printf("The time for %i second is %i : %i : %i\n", sec, h, m, s);

    return 0;
}
