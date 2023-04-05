#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";
    int num = atoi(str);

    printf("str: %s\n", str);
    printf("num: %d\n", num);

    char ch = getchar();
    printf("ch: %c\n", ch);

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);

    return 0;
}

