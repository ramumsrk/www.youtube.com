/*
* std::cin
* std::cout
* std::endl
*/
#include <iostream>

// EXIT_SUCCESS
#include <cstdlib>

// std::format
#include <format>

/**
 * Function declaration
*/
void
triangle3(int rows);

/*
* C++ program execution starts
* from main() function
*/
int
main()
{
    std::cout<<
    std::format(
      "Enter number of rows: "
    )<<std::endl;
    int rows {};
    std::cin>>rows;
    /*
    * Function call
    */
    triangle3(rows);
  /*
  * Return EXIT_SUCCESS to the
  * underlying operating-system
  */
  return EXIT_SUCCESS;
}

/**
 * Function definition
*/
void
triangle3(int rows)
{
    for (int row {rows} ; row >= 1 ; row -= 1)
    {
      for (int column {rows} ; column > rows - row ; column -= 1)
      {
        std::cout<<
        std::format(
          "{}",
          column
        );
      }
      std::cout<<std::endl;
    }
  return;
}