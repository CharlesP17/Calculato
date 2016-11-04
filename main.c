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
    printf("résultat = %d", result);
    return 0;
}