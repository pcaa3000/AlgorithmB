#include<stdio.h>

void coinchange(int coinset[], int value, int count){    
    int solution[count];
    int moneyback=value;
    for (int i = 0; i < count; i++)
    {
        solution[i]=0;
    }
    int index=0;
    
    while (value > 0 && index < count)    
    {
        if (coinset[index]> value)            
            index++;
        else {
            solution[index]++;
            value-=coinset[index];                
        }         
    }
    if (value>0)
        printf("Monedas insuficientes para %d... falta %d",moneyback,value);    
    else{
        printf("Monedas usadas para dar vuelto de %d \n",moneyback);
        for (int i = 0; i < count; i++)
        {
            if (solution[i]>0)
                printf("- %d  moneda(s) de %d \n", solution[i],coinset[i]);
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int coinSet[]={20,15,10,5,1};
    int moneyback=27;
    int count= sizeof(coinSet)/sizeof(coinSet[0]);
    coinchange(coinSet, moneyback,count);
    return 0;
}
