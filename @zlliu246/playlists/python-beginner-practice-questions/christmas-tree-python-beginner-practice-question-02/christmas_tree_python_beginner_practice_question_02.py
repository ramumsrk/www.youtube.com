#! /usr/bin/python3.12

# User-defined function
def christmas_tree( rows : int ) -> None:
  underscore : str = '_'
  asterisk : str = '*'
  row : int = 1
  while row <= rows:
    # Start left-part of
    # Christmas tree
    left_column : int = 1
    while left_column <= rows:
      if left_column <= rows - row:
        print(F"{underscore}" , end='')
      else:
        print(F'{asterisk}' , end='')
      left_column += 1
    # Start right-part of
    # Christmas tree
    right_column : int = rows + 1
    while right_column <= ( ( 2 * rows ) - 1 ):
      if right_column < rows + row:
        print(F'{asterisk}' , end='')
      else:
        print(F"{underscore}" , end="")
      right_column += 1
    row += 1
    print()
  # Stem of Christmas tree
  for outer_index in range(1,3,1):
    for inner_index in range(1,(2 * rows),1):
      if inner_index == rows:
        print(F'{asterisk}' , end='')
      else:
        print(F"{underscore}" , end="")
    print()
  return

if __name__ == '__main__':
  rows : int = int( input( "Enter number of rows: ") )
  # Function call
  christmas_tree( rows )