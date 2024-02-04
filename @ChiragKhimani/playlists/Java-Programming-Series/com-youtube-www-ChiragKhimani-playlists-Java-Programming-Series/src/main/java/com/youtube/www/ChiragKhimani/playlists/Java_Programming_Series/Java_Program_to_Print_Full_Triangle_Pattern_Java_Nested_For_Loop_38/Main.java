package com.youtube.www.ChiragKhimani.playlists.Java_Programming_Series.Java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38;

import java.util.Scanner;

// Static imports
import static java.lang.System.in;
import static java.lang.System.out;

public class Main {
  public static void main(String[] args) {
	// TODO Auto-generated method stub
	  Scanner scanner = new Scanner(in);
	  out.printf(
		"Enter number of rows: "	  
	  );
	  final int rows = scanner.nextInt();
	  Java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38 firstInstance = new Java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38(rows);
	  firstInstance.java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38();
	  scanner.close();
	return;  
  }
}