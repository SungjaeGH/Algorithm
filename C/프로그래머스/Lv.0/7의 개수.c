/*
 * 문제 푼 날짜 : 2023/04/19
 * 문제 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120912?language=c
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int array[3] = {7, 77, 17};
    int answer = 0;

    for (int element = 0; element < sizeof(array); element++) {
        int check_digit_num = 0;

        while (array[element] != 0) {
            check_digit_num = array[element] % 10;

            if (check_digit_num == 7) {
                answer++;
            }

            array[element] /= 10;
        }
    }

    printf("7의 개수 : %d\n", answer);

    return 0;
}