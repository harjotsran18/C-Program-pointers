#include <stdio.h>
int main()
{
    char mystring[] = "Welcome";
    char *p = mystring;
    int length = 0;
    printf("%d\n",&mystring[0]);
    printf("%d\n",&mystring[1]);
    printf("%d\n",&mystring[2]);
    while (*p != '\0')
    {
        printf("%c",*p);
        p++;
        length++;
    }
    printf("\n Length of the sentence is %d",length);
}