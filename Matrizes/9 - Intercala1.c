#include <stdio.h>
 
int main(){
    int a[25] = {23,66,52,43,38,2,6,51,67,88,12,51,40,11,44,25,32,18,54,68,87,65,79,77,52};
    int b[25] = {51,4,67,6,40,72,60,77,62,76,50,47,29,13,21,68,73,26,84,49,45,71,12,73,2};
    int c[50];

    for(int i = 0; i < 25; i++){
        c[i*2] = a[i];
        c[(i*2)+1] = b[i];
    }

    for(int i = 0; i < 50; i++)
        printf("%d\n", c[i]);

    return 0;
}