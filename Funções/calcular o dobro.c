#include <stdio.h>




float fmedia(float nota1, float nota2)
{
    float media_func;
    media_func = (nota1+nota2)/2;
    return media_func;
}

int main()
{
    float n1,n2, media;

    printf("informe a primeira nota: ");
    scanf("%f", &n1);
    printf("informe a segunda nota: ");
    scanf("%f", &n2);

    media = fmedia(n1, n2);

    printf("A media das notas %f e %f e': %f.", n1, n2, media);

}

