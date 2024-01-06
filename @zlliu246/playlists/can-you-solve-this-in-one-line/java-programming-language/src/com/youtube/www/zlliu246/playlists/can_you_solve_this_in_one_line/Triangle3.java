package com.youtube.www.zlliu246.playlists.can_you_solve_this_in_one_line;

// Static imports
import static java.lang.System.out;

public class Triangle3
{
  // Constructors
  public Triangle3(final int rows)
  {
      this.rows = rows;
    return;
  }
  // Member fields
  private final int rows;
  // Member functions
  public void triangleThree()
  {
      for (int row = this.rows ; row >= 1 ; row -= 1)
      {
        for (int column = this.rows ; column > this.rows - row ; column -= 1)
        {
          out.printf("%d" , column);
        }
        out.println();        
      }
    return;
  }
}