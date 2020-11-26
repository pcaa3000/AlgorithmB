#include<stdio.h>

long result;
int n;

long factorial(int n){
    result=1;
    int i;
    for (i=2;i<=n;i++)
        result*=i;
    return result;
}

int main(int argc, char const *argv[])
{
    printf("Ingreso el numero a calcular: ");
    scanf("%d", &n);
    if (n>=0)
        printf("%d! = %ld\n", n,  factorial(n));
    else
        printf("el numero debe ser positivo\n");
    
    return 0;
}