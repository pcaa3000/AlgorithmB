#include "stdlib.h"
#include "stdio.h"
#include "string.h"

char* substring(char s[100],  int p, int l) {
   int c = 0;
   char* substr;
   while (c < l || s[c]!='\0') {
      substr[c] = s[p+c-1];
      printf("%c",substr[c]);
      c++;
   }
   substr[c] = '\0';
   return substr;
}
int main(int argc, char const *argv[])
{
    char sub[100], str[100];
    int len;
    strcpy(str,"Algorithms");    
    printf("%s \n",str);
    len=sizeof(str)/sizeof(str[0]);
    printf("%d \n",len);
    substring(str,1,len-1);
    //strcpy(sub,substring(str,1,len-1));
    //printf("%s",str);
    //printf("%s",sub);

    return 0;
}
