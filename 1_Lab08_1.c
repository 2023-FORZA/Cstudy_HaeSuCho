#include <stdio.h>

int main(void) {
    struct people { //people 구조체
        int weight;
        int height;
    }p[100];

    int n, score[100] = { 0, }; //n, score 배열 선언

    scanf("%d", &n); //n 입력받기

    for (int i = 0; i < n; i++) { //n번 구조체 값 입력받기
        scanf("%d %d", &p[i].weight, &p[i].height);
    }

    for (int i = 0; i < n; i++) { //중첩반복문
        for (int j = 0; j < n; j++) {
            if (j != i && p[i].weight < p[j].weight && p[i].height < p[j].height) { //무게, 키가 자신보다 크면
                score[i]++; //1 증가
            }
        }score[i]++; //등수는 자신보다 큰 사람+1이기 때문에 마지막에 1 증가 
    }
    for (int i = 0; i < n; i++) { //출력
        printf("%d ", score[i]);
    }
}