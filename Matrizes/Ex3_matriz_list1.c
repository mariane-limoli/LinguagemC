#include <stdio.h>

int main()
{
    int a[3]={1, 2, 3}, b[3]={9, 8, 7}, c[6], i;

    for(i=0;i<3;i++)
    {
        c[i*2]=a[i];
        c[(i*2)+1]=b[i];
    }
    for(i=0;i<6;i++)
    {
        printf("%d - ", c[i]);
    }
}
