#include <stdio.h>

int main(void) {
    struct people { //people ����ü
        int weight;
        int height;
    }p[100];

    int n, score[100] = { 0, }; //n, score �迭 ����

    scanf("%d", &n); //n �Է¹ޱ�

    for (int i = 0; i < n; i++) { //n�� ����ü �� �Է¹ޱ�
        scanf("%d %d", &p[i].weight, &p[i].height);
    }

    for (int i = 0; i < n; i++) { //��ø�ݺ���
        for (int j = 0; j < n; j++) {
            if (j != i && p[i].weight < p[j].weight && p[i].height < p[j].height) { //����, Ű�� �ڽź��� ũ��
                score[i]++; //1 ����
            }
        }score[i]++; //����� �ڽź��� ū ���+1�̱� ������ �������� 1 ���� 
    }
    for (int i = 0; i < n; i++) { //���
        printf("%d ", score[i]);
    }
}