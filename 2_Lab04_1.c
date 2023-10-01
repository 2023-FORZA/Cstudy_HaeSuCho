#include <stdio.h>
#include <stdbool.h>

#define MAX_M 100
#define MAX_N 100

bool visited[MAX_M][MAX_N];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int x = 0, y = 0;
    int dir = 0;
    int answer = 0;

    while (1) {
        if (visited[x][y]) {
            printf("%d\n", answer - 1);
            return 0;
        }

        visited[x][y] = true;
        int nextX = x + dx[dir];
        int nextY = y + dy[dir];

        if (nextX < 0 || nextY < 0 || nextX >= M || nextY >= N || visited[nextX][nextY]) {
            dir = (dir + 1) % 4;
            nextX = x + dx[dir];
            nextY = y + dy[dir];
            answer++;
        }

        x = nextX;
        y = nextY;
    }

    return 0;
}
