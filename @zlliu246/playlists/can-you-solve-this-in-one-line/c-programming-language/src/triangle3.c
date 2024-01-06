/*
* puts()
* printf()
* scanf()
*/
#include <stdio.h>

// EXIT_SUCCESS
#include <stdlib.h>

/**
 * Function declaration
*/
void
triangle3(int rows);

/*
* C program execution starts
* from main() function
*/
int
main()
{
    /*
    * Read number of rows
    */
    printf( "Enter number of rows: " );
    int rows = 0;
    scanf( "%d" , &rows );
    /*
    * Function call
    */
    triangle3( rows );
  return EXIT_SUCCESS;
}

/**
 * Function definition
*/
void
triangle3(int rows)
{
    for (int row = rows ; row >= 1 ; row -= 1)
    {
      for (int column = rows ; column > ( rows - row ) ; column -= 1)
      {
        printf( "%d" , column );
      }
      puts("");
    }
  return;
}