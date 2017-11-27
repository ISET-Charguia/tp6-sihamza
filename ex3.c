#include <stdio.h>
#include <stdlib.h>

char remplace( char *x ,char *y , char *z);
int main()
{   char a[100],b[100],c[100];
    printf("donner une chaine / old char / new char  :");
    scanf("%s/%s/%s",&a,&b,&c);
    remplace(a,b,c);
    printf("le resultat = %s",a);


}


char remplace( char *x ,char *y , char *z)
{   char ch[100];
    int i ;
    strcat(ch,"");
    for ( i = 0 ; i <strlen(x) ; i ++ )
    {  if (ch[i] == y)
       ch[i] = z;
       else
       ch[i] = x[i];
    }
    *x=ch ;
}
