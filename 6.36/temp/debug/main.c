#include <stdio.h>

void stringReverse(const char* str) {
    if (*str == '\0') {
        return;
    }
    stringReverse(str + 1);
    putchar(*str);
}

int main() {
    char str[] = "Hello, World!";
    printf("��r��: %s\n", str);
    printf("�ϦV�C�L: ");
    stringReverse(str);
    printf("\n");
    return 0;
}
