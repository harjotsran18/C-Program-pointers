#include <stdio.h>
int main()
{
    int myarr[5] = {11,44,66,14,39};
    int *p = myarr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(p+i));
    }
}