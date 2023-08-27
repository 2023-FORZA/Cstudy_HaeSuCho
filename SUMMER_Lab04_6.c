#include <stdio.h>
#include <string.h>

// 스택 구조를 정의
typedef struct {
    char arr[51]; // 최대 길이 50까지
    int top;
} Stack;

void initStack(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, char c) {
    stack->arr[++stack->top] = c;
}

char pop(Stack* stack) {
    if (stack->top == -1) {
        return '\0'; // 스택이 비어있는 경우
    }
    return stack->arr[stack->top--];
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char str[51];
        scanf("%s", str);

        Stack stack;
        initStack(&stack);
        int length = strlen(str);
        int isValid = 1;

        for (int i = 0; i < length; ++i) {
            if (str[i] == '(') {
                push(&stack, '(');
            }
            else if (str[i] == ')') {
                if (isEmpty(&stack)) {
                    isValid = 0;
                    break;
                }
                else {
                    pop(&stack);
                }
            }
        }

        if (isValid && isEmpty(&stack)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
