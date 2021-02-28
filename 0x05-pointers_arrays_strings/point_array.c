#include<stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p;
    int i;

    p=a;

    printf("Printing the array elements using poiters\n");
    for(i = 0; i < 5; i++)
    {
        printf("%x\n", *p);
        p++;
    }
    return (0);
}
