#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stud { //구조체
    char name[20]; //문자열로 받을때는 char타입 배열을 선언하기!!
    int kor;
    int math;
    int eng;
}stud;

int cp(const void* a, const void* b) { //비교함수, 파라미터 a, b는 배열st의 요소
    struct stud* A = (struct stud*)a; //A와 B를 따로 선언하는 이유: 파라미터로 받은 a,b를 보이드포인터>구조체 포인터로 형변환
    struct stud* B = (struct stud*)b;
    if (A->kor != B->kor) return (B->kor - A->kor); //음수:순서바꾸기x, 양수: 순서바꾸기o
    else if (A->kor == B->kor && A->eng != B->eng) return (A->eng - B->eng);
    else if (A->kor == B->kor && A->eng == B->eng && A->math != B->math) return (B->math - A->math);
    else if (A->kor == B->kor && A->math == B->math && A->eng == B->eng) return strcmp(A->name, B->name); //문자열 비교하기 때문에 strcmp
    return 0;
}

int main(void) { //메인함수
    int n;
    scanf("%d", &n); //n입력받음 
    stud st[n]; //st 구조체배열 선언

    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", st[i].name, &st[i].kor, &st[i].eng, &st[i].math); //구조체 변수 입력받기 

    qsort(st, n, sizeof(stud), cp);//st:정렬할배열이름, n:배열요소개수, sizeof(stud):구조체크기, cp:비교함수

    for (int i = 0; i < n; i++) //출력
        printf("%s\n", st[i].name);
}