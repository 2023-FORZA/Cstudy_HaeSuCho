#include <stdio.h>

int map[3][3];

int checkWinner(int player) {
    for (int i = 0; i < 3; i++) {
        if (map[i][0] == player && map[i][1] == player && map[i][2] == player)
            return player;  // ���η� �̱� ���

        if (map[0][i] == player && map[1][i] == player && map[2][i] == player)
            return player;  // ���η� �̱� ���
    }

    if (map[0][0] == player && map[1][1] == player && map[2][2] == player)
        return player;  // �밢������ �̱� ���

    if (map[0][2] == player && map[1][1] == player && map[2][0] == player)
        return player;  // �밢������ �̱� ���

    return 0;  // �̱� ��찡 ����
}

int main() {
    int num;
    scanf("%d", &num);
    int x, y;
    int ans = 0;

    for (int i = 0; i < 9; i++) {
        int currentPlayer = (i % 2 == 0) ? num : (num == 2 ? 1 : 2);

        scanf("%d %d", &x, &y);
        x--, y--;
        map[x][y] = currentPlayer;

        ans = checkWinner(currentPlayer);
        if (ans != 0) {
            printf("%d\n", ans);
            return 0;
        }
    }

    // ��� ĭ�� ���� ���º�
    printf("0\n");

    return 0;
}
