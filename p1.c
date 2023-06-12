#include <stdio.h>
int main () {
    int x, y, z;
    int *px, *py, *pz;
    px = &x;
    py = &y;
    pz = &z;
    puts("Entre com o primeiro número:");
    scanf("%d",px);
    puts("Entre com o segundo número:");
    scanf("%d",py);
    *pz = *px + *py;
    printf("Resultado: %d\n", *pz);
    return 0;
}