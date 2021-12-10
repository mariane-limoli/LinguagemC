#include <stdio.h>
void main(void)
{
    float AlturaAnacleto, AlturaFelisberto;
    int QntdAnos;

    AlturaAnacleto = 1.5;
    AlturaFelisberto = 1.1;
    QntdAnos = 0;

    while(AlturaAnacleto > AlturaFelisberto)
    {
        QntdAnos = QntdAnos + 1;
        AlturaAnacleto = AlturaAnacleto + 0.02;
        AlturaFelisberto = AlturaFelisberto + 0.03;
    }
    printf("Felisberto sera maior que Anacleto dentro de %i anos.\n", QntdAnos);
    system("pause");
}
