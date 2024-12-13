#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world", c;
    int i, j = 0;
    int len = strlen(str);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);

    for (i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
