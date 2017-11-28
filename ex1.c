#include <stdio.h>
#include <string.h>



int Verif (int b , char x[] , char T[]);

int main()

{
        char x[100],T[10] ;
        int S,y,i,j ;
        do {
        printf(" Donner un text : ");
        gets(x); }
        while ( strlen(x)>100 );
        strcpy(T," .!,?")  ;
        S = 0 ;
        if ( strchr(T,x[0]) != 0 )
            {i = 1 ;
            S = 1 ;}
        else
            i = 0 ;
        for ( ; i<strlen(x) ; i ++ )
        {for ( j = 0 ; j<5 ; j++ )
         { if ((x[i] == T[j]) && ( Verif(i,x,T) == 1))
             S ++ ;}}
        if ( strchr(T,x[strlen(x)]) != 0 )
        S = S - 2 ;
        printf(" le nombre de mots = %d  ",S+1);

}


int Verif (int b , char x[] ,char T[])
{   int i ;
    for(i = 0 ; i<5 ; i++)
    { if (x[b-1] == T[i])
      return 0 ;}
    return 1 ;
}

