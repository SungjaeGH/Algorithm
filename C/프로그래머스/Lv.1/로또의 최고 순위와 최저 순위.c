/*
 * 문제 푼 날짜 : 2023/04/30
 * 문제 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/77484
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int CheckRank(int num_count) {
    int rank = 0;

    switch (num_count) {
        case 6:
            rank = 1;
            break;
        case 5:
            rank = 2;
            break;
        case 4:
            rank = 3;
            break;
        case 3:
            rank = 4;
            break;
        case 2:
            rank = 5;
            break;
        default:
            rank = 6;
            break;
    }

    return rank;
}

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int top_num_count = 0, low_num_count = 0;

    for (int num = 0; num < lottos_len; num++) {
        if (lottos[num] == 0) {
            top_num_count++;
            continue;
        }

        for (int win_num = 0; win_num < win_nums_len; win_num++) {
            if (lottos[num] == win_nums[win_num]) {
                top_num_count++;
                low_num_count++;
                break;
            }
        }
    }

    answer[0] = CheckRank(top_num_count);
    answer[1] = CheckRank(low_num_count);

    return answer;
}

/*
 * [추가 개선 코드]
 *
    int* answer = (int*)malloc(sizeof(int) * 2);

    int lottos_arr[46] = {0, };
    int top_num_count = 0, low_num_count = 0;

    for (int lottos_num = 0; lottos_num < lottos_len; lottos_num++) {
        lottos_arr[lottos[lottos_num]]++;
    }

    for (int win_num = 0; win_num < win_nums_len; win_num++) {
        if (lottos_arr[win_nums[win_num]] > 0) {
            low_num_count++;
        }
    }

    top_num_count = low_num_count + lottos_arr[0];

    answer[0] = CheckRank(top_num_count);
    answer[1] = CheckRank(low_num_count);
 *
 */


