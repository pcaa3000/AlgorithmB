#include<stdio.h>

long result;
int n;

long factorial(int n){
    if(n == 0)
        return 1;
    else if (n<=2)
        return n;
    else
        return (n* factorial(n-1));
}

int main(int argc, char const *argv[])
{
    printf("ingrese el numero a calcular: ");
    scanf("%d",&n);
    if (n<0)
        printf("el numero debe ser positivo\n");
    else
    {
        result = factorial(n);
        printf("%d! = %ld\n", n, result);
    }

    return 0;
}