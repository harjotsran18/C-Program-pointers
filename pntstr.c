#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    char *ptr = str;
    printf("%c\n", *ptr);
    printf("String: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    
    return 0;
}
