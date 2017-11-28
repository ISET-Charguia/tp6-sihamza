#include <stdio.h>
#include <stdlib.h>
void conj  ( char *x);

int main()
{   char ch[100];
    printf("donner un verb : ");
    scanf("%s",&ch);
    conj(ch);
}



void conj  ( char *x )
{   char ch[100];
    int i ;
    if ((x[strlen(x)-1] != 'r') || (x[strlen(x)-2] != 'e'))
        printf(" ERROR  ");
    else
    {strncpy(ch,x,strlen(x)-2);
    ch[strlen(x)-2] = '\0' ;
    printf(" je %se \n tu %ses \n il %se \n nous %sons \n vous %sez \n ils %sent",ch,ch,ch,ch,ch,ch);}
}
