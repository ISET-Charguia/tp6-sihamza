#include <stdio.h>
#include <stdlib.h>
char res[100];

char prul ( char *x );
int main()
{   char ch[100] ;
    printf(" donner un mots : ");
    scanf("%s",&ch);
    printf(" le pruliel de mot %s  = %s",ch,prul(ch));
}
char prul ( char *x )
{   int i ;
    strcpy(res,"");
    strcat(res,x);
    i = strlen(res) - 1 ;
    if (res[i] == 'z' ||  res[i] == 'x'  || res[i] == 's' )
        return res ;
    else if ((res[i] == 'u' &&  res[i-1] == 'e' ) || (res[i] == 'u' &&  res[i-1] == 'a' ))
        strcat(res,'x');
    else
         strcat(res,'s');
    return res ; }
