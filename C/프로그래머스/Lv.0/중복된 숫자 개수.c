/*
 * 문제 푼 날짜 : 2023/04/14
 * 문제 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120583?language=c
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int array[6] = {1, 1, 2, 3, 4, 5};
    int n = 1;
    int answer = 0;

    for (check_num = 0; check_num < sizeof(array); check_num++) {
        if (array[check_num] == n) {
            answer++;
        }
    }

    printf("중복된 숫자 개수 : %d\n", answer);
}

