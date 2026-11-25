#include <stdio.h>
int main()
{
    int myarr[5] = {11,44,66,14,39};
    int *p = myarr;
    printf("%d\n",myarr[0]);
    printf("%d\n",&myarr[0]);
    printf("%d\n",&myarr[1]);
    printf("%d\n",*p);
    printf("%d\n",*p+1);
    printf("%d\n",*(p+1));
}