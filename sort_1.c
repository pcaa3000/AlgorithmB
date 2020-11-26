#include <stdio.h> 
#include <time.h>
  
/* Función de insertion Sort*/
void insertionSort(int vector[], int n) 
{ 
   int i, currentVal, j; 
   for (i = 1; i < n; i++) 
   { 
       currentVal= vector[i]; //obtenemos el valor actual a comparar
       j = i-1;
  
       /* mueve los elementos del arreglo vector[0..i-1],que son mayores que el valor de la posición actual del recorrido, a una posición adelante de su posición actual */
       while (j >= 0 && vector[j] > currentVal) 
       { 
           vector[j+1] = vector[j]; 
           j = j-1; 
       } 
       vector[j+1] = currentVal; 
   } 
} 

void change(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int 
vector_entrada[], int n)
{
    int i, j;
    for(i=0; i < n-1; i++)
    {
        for(j=0; j < n-i-1; j++)
        {
            //[10, 5, 3, 3333]
            if(vector_entrada[j]>vector_entrada[j+1])
            change(&vector_entrada[j],&vector_entrada[j+1]);
        }
    }
}
  
// función auxiliar para imprimir un arrary de tamaño n 
void printArray(int vector[], int n) 
{ 
   int i; 
   for (i=0; i < n; i++) 
       printf("%d, ", vector[i]); 
   printf("\n"); 
} 
  
  
  
/* Driver program to test insertion sort */
int main() 
{ 
    int vector[] = {-796,3229,-5164,-362,4408,8965,-6068,9329,-3034,-443,-6693,9497,2615,-5966,-9065,-1160,6148,5517,1123,-8887,5649,3302,-1176,-8542,-9166,8,-2906,8987,-2414,-7984,4410,8872,5241,-4556,59,-5562,-3877,7452,-4467,2076,4076,4297,-3847,-2055,4483,-1484,-2371,6199,-7261,-7032,6010,2325,-6625,-2601,3870,1822,-5665,9622,9883,-5794,-5218,2926,8599,-3099,6399,-2570,3943,-2409,5114,9791,-4420,1065,3077,-1062,-8004,4397,1635,8578,-9226,9222,-1793,-2691,-5060,-4727,-4098,946,-6558,-4111,4575,-2685,-4729,-5277,1936,5106,-2089,824,9421,-1683,-2083,7891,-2099,1305,-9076,-3535,2565,-2871,9448,7177,-8614,-9954,-362,1455,-8834,-9846,-8412,1175,-1981,-5991,7201,-1997,-5156,-1634,-9803,1032,9551,-6153,8502,3536,-2980,8681,-9210,4408,8780,-916,-369,-8651,1246,-702,-5555,23,8208,2037,6941,9545,-5147,5063,-8358,2772,8553,9885,4624,-3576,9131,1229,-429,-479,-673,-7060,-4031,5650,6679,6796,5622,-6256,-238,-6096,3096,-1610,-2948,6291,-1666,5219,5850,7387,-3260,3672,-1766,-9941,8252,2649,7079,-8026,6356,676,-5065,-6338,3287,680,-3269,2770,6637,-8744,9162,-2204,-3066,-7228,8762,1505,4957,766,-9136,4632,-5022,-9999,5361,2732,7831,-501,-4650,7236,3682,-2438,5574,-8230,-9669,-7442,7966,-2905,7629,7137,200,-8670,-749,2228,458,7889,-3668,-5350,-3261,6741,-6953,4800,3372,6662,-1018,8523,3164,3577,9720,-6826,-1574,-7875,-2796,-1078,-4755,4926,3368,4302,9254,6410,-4689,7878,2461,8233,-6688,5904,4735,-2940,8830,9976,-3674,4222,-1446,6187,-3181,-8882,5487,-6939,-7885,3786,-6234,-1062,-4553,-5709,8459,5008,3352,6586,537,-7610,3261,8246,-2105,5107,7957,-7886,-2925,-2541,-7449,9521,5073,-239,-8054,-4379,-8323,-6485,-4828,-5294,-2720,595}; 
    int n = sizeof(vector)/sizeof(vector[0]); 
    clock_t start, end;
    double cpu_time_used;
    char option;
    do{        
        printf("[1] Algoritmo BubbleSort\n");
        printf("[2] Algoritmo InsertionSort\n");
        printf("[0] Salir\n");
        printf("Escoge un opcion: ");
        scanf("%c",&option);

        switch (option)
        {
        case '0': break;
        case '1':
            start = clock();121
            bubbleSort(vector,n);
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printArray(vector, n); 
            printf("Bubble Sort - Tiempo transcurrido %f seg.\n");
            break;
        case '2':
            start = clock();
            insertionSort(vector, n); 
            end = clock();
            cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
            printArray(vector, n); 
            printf("Insertion Sort - Tiempo transcurrido %f seg.\n");
            break;
        default:
            printf("Opción incorrecta.\n");
            break;
        } 
    }while (option!='0');
    
        
  
    return 0; 
} 