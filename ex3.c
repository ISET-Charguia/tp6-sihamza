#include <stdio.h>
#include <stdlib.h>

void remplace( char *x ,char *y , char *z);
int main()
{   char a[100],b,c;
    do {
    printf("donner une chaine : \n");
    gets(a);
    printf("old char : \n");
    scanf("%s",&b);
    printf("new char  : \n");
    scanf("%s",&c);}
    while (c==b) ;
    remplace(a,b,c);
    printf("le resultat = %s",a);


}


void remplace( char *x ,char *y , char *z)
{   int i ;
    char ch [100];
    strcpy(ch,"");
    for ( i = 0 ; i <strlen(x) ; i ++ )
    {  if (x[i] == y)
       stracat(ch,z);
       else
       strcat(ch,x[i]);
    }
     x = ch ;
}
