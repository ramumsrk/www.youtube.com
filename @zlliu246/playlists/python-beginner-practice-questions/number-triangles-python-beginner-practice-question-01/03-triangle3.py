#! /usr/bin/python3.12

# User-defined function
def triangle3( rows : int ) -> None:
  row : int = rows
  while row >= 1:
    column : int = rows
    while column > rows - row:
      print( F"{column}" , sep="" , end='' )
      column -= 1
    row -= 1
    print()
  return

if __name__ == '__main__':
  rows : int = int( input( 'Enter number of rows: ' ) )
  # Function call
  triangle3( rows )
