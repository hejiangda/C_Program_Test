// ex7.16.c
/* Fig. 7.24: fig07_24.c
   Card shuffling dealing program */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototypes */
void shuffle( int wDeck[][ 13 ] );
void deal( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] );
int main( void )
{
   /* initialize suit array */
   const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };

   /* initialize face array */
   const char *face[ 13 ] =
      { "Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King" };

   /* initialize deck array */
   int deck[ 4 ][ 13 ] = { 0 };
   int row,column,card=1;
   for (row=0; row<4; row++) {
     for(column=0;column<13;column++){
       deck[row][column]=card;
       card++;
      //  printf("%3d",deck[row][column] );
     }
    //  printf("\n" );
   }
   srand( time( 0 ) ); /* seed random-number generator */

   shuffle( deck ); /* shuffle the deck */
   deal( deck, face, suit ); /* deal the deck */
  //  for (row=0; row<4; row++) {
  //    for(column=0;column<13;column++){
  //     //  deck[row][column]=card;
  //     //  card++;
  //      printf("%3d",deck[row][column] );
  //    }
  //    printf("\n" );
  //  }

   return 0; /* indicates successful termination */
} /* end main */

/* shuffle cards in deck */
void shuffle( int wDeck[][ 13 ] )
{
   void swap(int *element1Ptr,int *element2ptr);
   int row; /* row number */
   int column; /* column number */
   int card; /* counter */
   int rowTemp,columnTemp;
    int countt=0;
    for (row=0; row<4; row++) {
      for(column=0;column<13;column++){
        rowTemp = rand() % 4;
        columnTemp = rand() % 13;
        if(rowTemp>row||columnTemp>column){
          swap(&wDeck[row][column],&wDeck[rowTemp][columnTemp]);
          countt++;
        }
      }
    }

} /* end function shuffle */

/* deal cards in deck */
void deal( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] )
{
   int card; /* card counter */
   int row; /* row counter */
   int column; /* column counter */

   /* deal each of the 52 cards */
   for ( card = 1; card <= 52; card++ ) {

      /* loop through rows of wDeck */
      for ( row = 0; row <= 3; row++ ) {

         /* loop through columns of wDeck for current row */
         for ( column = 0; column <= 12; column++ ) {

            /* if slot contains current card, display card */
            if ( wDeck[ row ][ column ] == card ) {
               printf( "%5s of %-8s%c", wFace[ column ], wSuit[ row ],
                  card % 2 == 0 ? '\n' : '\t' );
            } /* end if */
         } /* end for */
      } /* end for */
   } /* end for */
} /* end function deal */

void swap(int *element1Ptr,int *element2ptr){
  int hold;
  hold=*element1Ptr;
  *element1Ptr=*element2ptr;
  *element2ptr=hold;
}


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
