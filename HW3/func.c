#include <stdio.h>
#include <string.h>

int read_numbers( int *Arr, int *pnArr, int nArrMax ) {

    int k = 0 ;

    printf( "Count: " ) ;
    scanf( "%d", pnArr ) ;

    if ( *pnArr < 0 ) return -2 ;
    if ( *pnArr > nArrMax ) {
        return -1 ;
    }

    for ( k = 0 ; k < *pnArr ; k++ ) {
        printf("%d: ", k + 1 ) ;
        scanf("%d", Arr + k ) ;
    }

    return *pnArr ;
}

int OutputNumbersInline( int *Arr, int pnArr ) {

    int i = 0 ;

    if ( pnArr == 0 ) {
        printf( "You have diceded not to enter any numbers.\nThanks for using.\n" ) ;
        return 0 ;
    }

    if ( pnArr == 1 ) {
        printf( "Your number is: %d.\nThanks for using.\n", *Arr ) ;
        return 0 ;
    }
    printf( "Your numbers are: " ) ;
    for ( i = 0; i < pnArr; i++) {
        printf( "%d, ", *(Arr + i) ) ;
    }
    printf( "\b\b.\nThanks for using.\n" ) ;
    return 0 ;
}

int FindGreatestElementInArray ( int *Arr, int pnArr ) {
    int k = 0 ;
    int Tmp = *( Arr + 0 ) ;
    int Index = k ;
    for ( k = 0 ; k < pnArr ; k++ ) {
        if ( *(Arr + k) < *( Arr + ( k + 1 ) ) && *( Arr + (k + 1)) > Tmp) {
        Tmp = *( Arr + ( k + 1 )) ;
        Index = k + 1 ;
        }
    }
    return Index ;
}

int SwapAnyType ( void *First, void *Second, char Datatype[15] ) {

    char integer[15] = "int" ;
    char ShortInt[15] = "short int" ;
    char LongInt[15] = "long int" ;
    char LongLongInt[15] = "long long int" ;
    char Floating[15] = "float" ;
    char DoubleF[15] = "double" ;
    char character[15] = "char" ;

    if ( strcmp( ShortInt, Datatype ) == 0 ) {
        short int Tmp = *(short int *)First ;
        *(short int *)First = *(short int *)Second ;
        *(short int *)Second = Tmp ;
        return 0 ;
    }
    if ( strcmp( integer, Datatype ) == 0 ) {
        int Tmp = *(int *)First ;
        *(int *)First = *(int *)Second ;
        *(int *)Second = Tmp ;
        return 0 ;
    }
    if ( strcmp( LongInt, Datatype ) == 0 ) {
        long int Tmp = *(long int *)First ;
        *(long int *)First = *(long int *)Second ;
        *(long int *)Second = Tmp ;
        return 0 ;
    }

    if ( strcmp( LongLongInt, Datatype ) == 0 ) {
        long long int Tmp = *(long long int *)First ;
        *(long long int *)First = *(long long int *)Second ;
        *(long long int *)Second = Tmp ;
        return 0 ;
    }

    if ( strcmp( Floating, Datatype ) == 0 ) {
        float Tmp = *(float *)First ;
        *(float *)First = *(float *)Second ;
        *(float *)Second = Tmp ;
        return 0 ;
    }

    if ( strcmp( DoubleF, Datatype ) == 0 ) {
        double Tmp = *(double *)First ;
        *(double *)First = *(double *)Second ;
        *(double *)Second = Tmp ;
        return 0 ;
    }

    if ( strcmp( character, Datatype ) == 0 ) {
        int Tmp = *(int *)First ;
        *(char *)First = *(char *)Second ;
        *(char *)Second = Tmp ;
        return 0 ;
    }

       return 0 ;

}
