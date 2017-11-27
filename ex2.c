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
    if ((x[strlen(x)] != 'r') || (x[strlen(x)-1] != 'e'))
        printf(" ERROR  ");
    else
    { for ( i = 0 ; i<strlen(x)-1 ; i ++ )
    {ch[i] = x[i] ;} }
    printf(" je %s e \n tu %s es \n il %s ",ch,ch,ch);
}
