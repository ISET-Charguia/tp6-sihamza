#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inv_maj ( char ch[] )
{
    int i=0 ;


   while (ch[i]!='\0')
    {
       if ((ch[i]>='A')&&(ch[i]<='Z')){
        ch[i]=ch[i]+32;}
        else
           if ((ch[i]>='a')&&(ch[i]<='z')){


            ch[i]=ch[i]-32;}
i++;
    }
puts (ch);
    ;}
    int main()

{
    char *ch[100];
    printf("Donner une chaine ");
    scanf("%s",&ch);
    printf("le resultat = ");
    inv_maj(ch);
}




