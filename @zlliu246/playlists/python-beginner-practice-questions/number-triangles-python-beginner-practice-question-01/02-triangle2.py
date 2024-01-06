#! /usr/bin/python3.12

# User-defined function
def triangle2( rows : int ) -> None:
  row : int = 1
  while row <= rows:
    column : int = row
    while column >= 1:
      print( F"{column}" , sep='' , end="" )
      column -= 1
    print()
    row += 1
  return

if __name__ == '__main__':
  rows : int = int( input( "Enter number of rows: " ) )
  # Function call
  triangle2( rows )
