package com.youtube.www.zlliu246.playlists.can_you_solve_this_in_one_line;

// Static imports
import static java.lang.System.out;
import static java.lang.System.in;

import java.util.Scanner;

public class Main
{
  public static void main(String[] args)
  {
      Scanner scanner = new Scanner(in);
      out.print("Enter number of rows: ");
      final int rows = scanner.nextInt();
      Triangle3 firstTriangle3 = new Triangle3(rows);
      firstTriangle3.triangleThree();
      scanner.close();
    return;
  }
}