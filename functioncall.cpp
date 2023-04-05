#include <stdio.h>

int add(int a, int b);

int main() {
    int x = 5;
    int y = 10;
    int result = add(x, y);
    printf("The result of %d + %d is %d", x, y, result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}

