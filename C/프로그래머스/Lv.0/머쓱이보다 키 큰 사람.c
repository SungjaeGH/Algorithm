/*
 * 문제 푼 날짜 : 2023/04/10
 * 문제 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120585?language=c
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int array[4] = {149, 180, 192, 170};
    int height = 167;
    int friend = 0;
    int answer = 0;

    for (friend = 0; friend < sizeof(array); friend++) {
        if (array[friend] > height) {
            answer++;
        }
    }

    printf("머쓱이보다 키 큰 사람 수 : %d\n", answer);
}

