#include<stdio.h>

int main()
{
    int matriz[8][8]={{6,0,0,5,0,0,1,0},
                      {0,1,0,2,0,3,0,2},
                      {0,1,1,1,0,1,0,0},
                      {0,0,2,0,3,4,4,3},
                      {1,0,1,1,0,1,0,0},
                      {0,0,1,3,0,4,0,1},
                      {1,0,0,0,2,2,2,1},
                      {1,5,0,6,0,1,1,0}};

    int vQtde[7]={0, 0, 0, 0, 0, 0, 0};
    int l, c;

    for (l=0;l<8;l++)
        for (c=0;c<8;c++)
            vQtde[matriz[l][c]] = vQtde[matriz[l][c]]+1 ;

    printf("PEOES: %d pecas", vQtde[1]);
    printf("\nCAVALOS: %d pecas", vQtde[2]);
    printf("\nTORRES: %d pecas", vQtde[3]);
    printf("\nBISPOS: %d pecas ", vQtde[4]);
    printf("\nREIS: %d pecas", vQtde[5]);
    printf("\nRAINHAS: %d pecas\n\n", vQtde[6]);
}
