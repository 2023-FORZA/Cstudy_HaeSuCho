#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Point;

bool checkLine(Point a, Point b, Point c) {
    int dxAB = b.x - a.x;
    int dyAB = b.y - a.y;
    int dxAC = c.x - a.x;
    int dyAC = c.y - a.y;
    if (dxAB * dyAC == dyAB * dxAC)
        return true;
    return false;
}

bool checkJungTriangle(Point a, Point b, Point c) {
    int ab = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    int ac = (a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y);
    int bc = (b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y);
    if (ab == ac && ab == bc)
        return true;
    return false;
}

bool checkTwoLength(Point a, Point b, Point c) {
    int ab = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    int ac = (a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y);
    int bc = (b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y);
    if (ab == ac || ab == bc || ac == bc)
        return true;
    return false;
}

int dot(int x1, int y1, int x2, int y2) {
    return x1 * x2 + y1 * y2;
}

int main() {
    Point a, b, c;
    scanf("%d %d %d %d %d %d", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);

    if (checkLine(a, b, c)) {
        printf("X\n");
    }
    else if (checkJungTriangle(a, b, c)) {
        printf("JungTriangle\n");
    }
    else if (checkTwoLength(a, b, c)) {
        if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) < 0 ||
            dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) < 0 ||
            dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) < 0) {
            printf("Dunkak2Triangle\n");
        }
        else if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) == 0 ||
            dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) == 0 ||
            dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) == 0) {
            printf("Jikkak2Triangle\n");
        }
        else {
            printf("Yeahkak2Triangle\n");
        }
    }
    else {
        if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) < 0 ||
            dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) < 0 ||
            dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) < 0) {
            printf("DunkakTriangle\n");
        }
        else if (dot(b.x - a.x, b.y - a.y, c.x - a.x, c.y - c.y) == 0 ||
            dot(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) == 0 ||
            dot(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) == 0) {
            printf("JikkakTriangle\n");
        }
        else {
            printf("YeahkakTriangle\n");
        }
    }
    return 0;
}
