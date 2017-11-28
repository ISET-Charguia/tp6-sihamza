#include <stdio.h>
#include <stdlib.h>
void inv_maj ( char *ch) ;
int main()
{
    char ch[100];
    printf("Donner une chaine ");
    scanf("%s",&ch);
    inv_maj(ch);
    printf("le resultat = %s",ch);
}


void inv_maj ( char *ch )
{
    int i ;
    char x[100];

    for ( i = 0 ; i <strlen(ch) ; i ++ )
    {
        if (ch[i]>='A')
            x[i]=ch[i]-('A' -'a');
        else
            if (ch[i]>='a')
            x[i]=ch[i]+('A' -'a');

    }
    x[i+1]= '\0' ;
    ch = x ;}


