#include <stdio.h>

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
