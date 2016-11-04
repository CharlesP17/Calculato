#include <stdio.h>
#include <stdlib.h>

int addition( int a, int b )
{
    return a+b;
}
int main ()
{
    int result;
    result = addition (1,4);
    printf("resultat de l'addition est = %d", result);
    return 0;
}
