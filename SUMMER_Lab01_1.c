#include <stdio.h>
#define King 1
#define Stone 2

int map[55][55], num, direction_num;
int dx[] = { 1,-1,0,0,1,-1,1,-1 };
int dy[] = { 0,0,1,-1,-1,-1,1,1 };
char direction[55][3], king_position[5], stone_position[5], K_x, K_y, S_x, S_y;

void input_position();
int d(char*);

int main()
{
    input_position();

    while (direction_num < num)
    {
        int De = d(direction[direction_num++]);

        int xx = K_x + dx[De];
        int yy = K_y + dy[De];
        if (xx < 0 || yy < 0 || xx>7 || yy>7)
            continue;
        if (map[yy][xx] == Stone)
        {
            int S_xx = S_x + dx[De];
            int S_yy = S_y + dy[De];
            if (S_xx < 0 || S_yy < 0 || S_xx>7 || S_yy>7)
                continue;
            map[S_yy][S_xx] = Stone;
            map[S_y][S_x] = 0;
            S_x = S_xx;
            S_y = S_yy;
        }
        map[yy][xx] = King;
        map[K_y][K_x] = 0;
        K_x = xx; K_y = yy;
    }
    K_y *= -1;
    S_y *= -1;
    printf("%c%c\n", K_x + 'A', K_y + '8');
    printf("%c%c", S_x + 'A', S_y + '8');
    return 0;
}

void input_position()
{
    scanf("%s %s %d", king_position, stone_position, &num);
    K_x = king_position[0] - 'A';
    K_y = king_position[1] - '8'; K_y *= -1;
    S_x = stone_position[0] - 'A';
    S_y = stone_position[1] - '8'; S_y *= -1;
    for (int i = 0; i < num; i++)
        scanf("%s", direction[i]);

    map[K_y][K_x] = King;
    map[S_y][S_x] = Stone;
}

int d(char* arr)
{
    if (arr[0] == 'R')
    {
        if (arr[1] == 'T')
            return 4;
        else if (arr[1] == 'B')
            return 6;
        else
            return 0;
    }
    if (arr[0] == 'L')
    {
        if (arr[1] == 'T')
            return 5;
        else if (arr[1] == 'B')
            return 7;
        else
            return 1;
    }
    if (arr[0] == 'B')
    {
        return 2;
    }
    if (arr[0] == 'T')
    {
        return 3;
    }
    return 0; // 기본적으로 0을 반환해주어야 합니다.
}
