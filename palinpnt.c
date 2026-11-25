#include <stdio.h>
int main()
{
    char mystring[] = "madam";
    char *ptr = mystring;
    int len=0;
    while(*ptr != '\0'){
        ptr++;
        len++;
    }
    char *start = &mystring[0];
    char *end = &mystring[len-1];
    int isPlendrome =1;
    for (int i = 0; i < len/2; i++)
    {
        if (*start != *end)
        {
            isPlendrome = 0;
        }
        start++;
        end++;
    }
    if (isPlendrome == 1)
    {
        printf("Palendrome");
    }else{
        printf("Not a palendrome");
    }    
}