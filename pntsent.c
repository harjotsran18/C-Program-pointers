#include <stdio.h>
int main()
{
    char mysentence[] = "This is my world";
    char *ptr = mysentence;
    int len= 0 ;
    while (*ptr != '\0')
    {
        ptr++;
        len++;
    }
    printf("%d\n",len);
    for (int i = 0; i < len; i++)
    {
        int isrepeated=0;
        for (int j = 0; j < len; j++)
        {
            if (mysentence[i] == mysentence[j])
            {
                isrepeated =1;
                break;
            }  
        }
        int count = 0;
        for (int j = 0; j < len; j++)
        {
            if (mysentence[i] == mysentence[j])
            {
                count++;
            }
        }
        printf("character %c is %d \n",mysentence[i],count);
    }
}