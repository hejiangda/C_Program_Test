//ex7.25.c
/* Fig. 6.22: fig06_22.c
   Double-subscripted array example */
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

/* function prototypes */
void init(int *choice);
void minimum( const int grades[][ EXAMS ], int pupils, int tests );
void maximum( const int grades[][ EXAMS ], int pupils, int tests );
void average( const int grades[][ EXAMS ], int pupils, int tests );
void printArray( const int grades[][ EXAMS ], int pupils, int tests );

/* function main begins program execution */
int main( void )
{
   int student,choice=0; /* student counter */

   /* initialize student grades for three students (rows) */
   const int studentGrades[ STUDENTS ][ EXAMS ] =
      { { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 } };
   void (*processGrades[4])(const int grades[][ EXAMS ], int pupils, int tests )=
   {
     printArray,minimum,maximum,average
   };
   while(1)
   {
     init(&choice);
     if(4<=choice)
     {
       break;
     }
     (*processGrades[choice])(studentGrades, STUDENTS, EXAMS );
   }

   return 0; /* indicates successful termination */
} /* end main */

/* Find the minimum grade */
void minimum( const int grades[][ EXAMS ], int pupils, int tests )
{
   int i; /* student counter */
   int j; /* exam counter */
   int lowGrade = 100; /* initialize to highest possible grade */

   /* loop through rows of grades */
   for ( i = 0; i < pupils; i++ ) {

      /* loop through columns of grades */
      for ( j = 0; j < tests; j++ ) {

         if ( grades[ i ][ j ] < lowGrade ) {
            lowGrade = grades[ i ][ j ];
         } /* end if */
      } /* end inner for */
   } /* end outer for */

   printf("\n\n%s%d\n","Lowest grade: " ,lowGrade);  /* return minimum grade */
} /* end function minimum */

/* Find the maximum grade */
void maximum( const int grades[][ EXAMS ], int pupils, int tests )
{
   int i; /* student counter */
   int j; /* exam counter */
   int highGrade = 0; /* initialize to lowest possible grade */

   /* loop through rows of grades */
   for ( i = 0; i < pupils; i++ ) {

      /* loop through columns of grades */
      for ( j = 0; j < tests; j++ ) {

         if ( grades[ i ][ j ] > highGrade ) {
            highGrade = grades[ i ][ j ];
         } /* end if */
      } /* end inner for */
   } /* end outer for */

   printf("\n%s%d\n","Highest grade: " ,highGrade);
} /* end function maximum */


void average( const int grades[][ EXAMS ], int pupils, int tests )
{
   int i,j; /* exam counter */
   int total = 0; /* sum of test grades */

   /* total all grades for one student */
   for ( i = 0; i < pupils; i++ ) {
      for(j=0;j<tests;j++)
      {
        total += grades[ i ][j];
      }
      printf("%s%d%s%.2f\n","The average grade for student ",i," is ",(double)total/tests );
      total=0;
   } /* end for */

} /* end function average */

/* Print the array */
void printArray( const int grades[][ EXAMS ], int pupils, int tests )
{
   int i; /* student counter */
   int j; /* exam counter */

   printf( "The array is:\n" );
   /* output column heads */
   printf( "                 [0]  [1]  [2]  [3]" );

   /* output grades in tabular format */
   for ( i = 0; i < pupils; i++ ) {

      /* output label for row */
      printf( "\nstudentGrades[%d] ", i );

      /* output grades for one student */
      for ( j = 0; j < tests; j++ ) {
         printf( "%-5d", grades[ i ][ j ] );
      } /* end inner for */
   } /* end outer for */
   printf("\n" );
} /* end function printArray */

void init(int *choice)
{
  static int i=0;
  if(0==i)
  {
    printf("%s\n","Enter a choice:" );
    printf("\t0\tPrint the array of grades\n" );
    printf("\t1\tFind the minimum grade\n" );
    printf("\t2\tFind the maximum grade\n" );
    printf("\t3\tPrint the average on all tests for each student\n" );
    printf("\t4\tEnd program\n" );
  }
  ++i;
  scanf("%d",choice);
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
