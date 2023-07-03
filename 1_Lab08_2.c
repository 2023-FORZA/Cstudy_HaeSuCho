#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stud { //����ü
    char name[20]; //���ڿ��� �������� charŸ�� �迭�� �����ϱ�!!
    int kor;
    int math;
    int eng;
}stud;

int cp(const void* a, const void* b) { //���Լ�, �Ķ���� a, b�� �迭st�� ���
    struct stud* A = (struct stud*)a; //A�� B�� ���� �����ϴ� ����: �Ķ���ͷ� ���� a,b�� ���̵�������>����ü �����ͷ� ����ȯ
    struct stud* B = (struct stud*)b;
    if (A->kor != B->kor) return (B->kor - A->kor); //����:�����ٲٱ�x, ���: �����ٲٱ�o
    else if (A->kor == B->kor && A->eng != B->eng) return (A->eng - B->eng);
    else if (A->kor == B->kor && A->eng == B->eng && A->math != B->math) return (B->math - A->math);
    else if (A->kor == B->kor && A->math == B->math && A->eng == B->eng) return strcmp(A->name, B->name); //���ڿ� ���ϱ� ������ strcmp
    return 0;
}

int main(void) { //�����Լ�
    int n;
    scanf("%d", &n); //n�Է¹��� 
    stud st[n]; //st ����ü�迭 ����

    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", st[i].name, &st[i].kor, &st[i].eng, &st[i].math); //����ü ���� �Է¹ޱ� 

    qsort(st, n, sizeof(stud), cp);//st:�����ҹ迭�̸�, n:�迭��Ұ���, sizeof(stud):����üũ��, cp:���Լ�

    for (int i = 0; i < n; i++) //���
        printf("%s\n", st[i].name);
}