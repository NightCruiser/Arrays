#include <stdio.h>
#include "func.h"

int main( int argc, char *argv[] ) {

    int k = 0 ;
    int Result = 0 ;
    int GreatestIndex = 0 ;


    int A[MAXSIZE] ;
    int nA = 0 ;
    int UsersAnswer = 0 ;

    for ( k = 0 ; k < MAXSIZE ; k++ ) {
        A[k] = 0 ;
    }

    Result = read_numbers( A, &nA, MAXSIZE ) ;
    if ( Result < 0 ) {
        fprintf( stderr, "Invalid number\n" ) ;
        return -1 ;
    }

    printf( "Enter (1) if you want to see all your numbers inline.\n"
            "Enter (2) if you want to see your biggest number.\n"
            "Enter (3) if you want to swap 2 elements of an array.\n"
            "Enter (4) if you want to use all of the above\n") ;

    scanf( "%d", &UsersAnswer ) ;

    if ( UsersAnswer == 1 ) {
        OutputNumbersInline ( A, nA );
        return 0 ;
    }

    if ( UsersAnswer == 2 ) {
        GreatestIndex = FindGreatestElementInArray( A, nA ) ;
        printf("Greatest number's index is: %d\nGreatest number is: %d\n", GreatestIndex, A[GreatestIndex] ) ;

    }

    if ( UsersAnswer == 3 ) {
        int First = 0 ;
        int Second = 0 ;

        printf("Please enter the order number of the First Element: \n" ) ;
        scanf("%d", &First ) ;
        //if ( First <= 0 || First > nA) return -1 ;

        printf("Please enter the order number of the Second Element: \n" ) ;
        //if ( Second <= 0 || Second > nA) return -1 ;
        scanf( "%d", &Second ) ;

        printf("Here is you modified array: \n" ) ;
        SwapAnyType( A+(First - 1), A+(Second -1), "int" ) ;
        OutputNumbersInline( A, nA ) ;
    }
    if ( UsersAnswer == 4 ) {
        int First = 0 ;
        int Second = 0 ;

        OutputNumbersInline ( A, nA );

        GreatestIndex = FindGreatestElementInArray( A, nA ) ;
        printf("Greatest number's index is: %d\nGreatest number is: %d\n", GreatestIndex, A[GreatestIndex] ) ;

        printf("Please enter the order number of the First Element: \n" ) ;
        scanf("%d", &First ) ;
        //if ( First <= 0 || First > nA) return -1 ;

        printf("Please enter the order number of the Second Element: \n" ) ;
        //if ( Second <= 0 || Second > nA) return -1 ;
        scanf( "%d", &Second ) ;

        printf("Here is you modified array: \n" ) ;
        SwapAnyType( A+(First - 1), A+(Second -1), "int" ) ;
        OutputNumbersInline( A, nA ) ;

    }

    if ( UsersAnswer != 1 || UsersAnswer != 2 || UsersAnswer != 3) return -4 ;

    return 0 ;
}
