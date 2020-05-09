#include <stdio.h>
#include "read_num.h"

int main( int argc, char *argv[] ) {

    int k = 0 ;
    int Result = 0 ;

    int A[MAXSIZE] ;
    int nA = 0 ;

    for ( k = 0 ; k < MAXSIZE ; k++ ) {
        A[k] = 0 ;
    }

    Result = read_numbers( A, &nA, MAXSIZE ) ;
    if ( Result < 0 ) {
        fprintf( stderr, "Invalid number\n" ) ;
        return -1 ;
    }

    return 0 ;
}
