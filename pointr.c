#include <stdio.h>
int main(){
    // int a = 10;
    // int *x = &a;
    // printf("%d\n",x);
    // printf("%d\n",*x);
    // printf("%d\n",&x);
    // printf("%d\n",&a);
    // printf("%d\n",a);

    // int myarray[] = {11,22,33,44,55};
    // int *pointerArray = &myarray[2];
    // printf("%d\n",pointerArray);
    // printf("%d\n",*pointerArray);
    // // int *pointerArray1 = &myarray[3];
    // // printf("%d\n",pointerArray1);
    // // printf("%d\n",*pointerArray1);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",*(pointerArray+i));
    // }
    
    int x=20,y=30,z=40;
    int *pointerArray[3];
    pointerArray[0] = &x;
    pointerArray[1] = &y;
    pointerArray[2] = &z;
    printf("%d\n",*pointerArray[0]);
    printf("%d\n",*pointerArray[1]);
    printf("%d\n",*pointerArray[2]);
}