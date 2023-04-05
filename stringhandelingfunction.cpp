#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    char str4[20] = "abcd";
    char str5[20] = "abcd";
    char str6[20] = "This is a test";
    char str7[20] = "EXAMPLE";

    // strlen() function
    printf("Length of str1 is %d\n", strlen(str1));

    // strcat() function
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // strcmp() function
    int result = strcmp(str4, str5);
    if (result == 0) {
        printf("str4 and str5 are equal\n");
    } else if (result < 0) {
        printf("str4 is less than str5\n");
    } else {
        printf("str4 is greater than str5\n");
    }

    // strcpy() function
    strcpy(str4, str2);
    printf("str4 after copy: %s\n", str4);

    // strncpy() function
    strncpy(str5, "xyz", 2);
    printf("str5 after copy: %s\n", str5);

    // strstr() function
    char *result2 = strstr(str6, "test");
    printf("Substring found at index: %d\n", result2 - str6);

    // toupper() function
    for (int i = 0; str7[i] != '\0'; i++) {
        str7[i] = toupper(str7[i]);
    }
    printf("Uppercase string: %s\n", str7);

    return 0;
}

