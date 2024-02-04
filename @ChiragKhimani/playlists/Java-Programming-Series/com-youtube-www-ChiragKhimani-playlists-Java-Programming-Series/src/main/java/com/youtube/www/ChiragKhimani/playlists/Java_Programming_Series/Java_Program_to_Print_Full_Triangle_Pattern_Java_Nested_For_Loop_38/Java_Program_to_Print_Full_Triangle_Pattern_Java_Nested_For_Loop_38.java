package com.youtube.www.ChiragKhimani.playlists.Java_Programming_Series.Java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38;

// Static imports
import static java.lang.System.out;

public class Java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38 {
  /**
   * 
   * @param rows
   */
  public Java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38(final int rows) {
	  this.rows = rows;
	return;  
  }
  /**
   * 
   */
  private final int rows;
  /**
   * 
   */
  public void java_Program_to_Print_Full_Triangle_Pattern_Java_Nested_For_Loop_38() {
	  final char underscore = '_';
	  final char asterisk = '*';
	  final int columns = ( 2 * this.rows ) - 1;
	  for (var row = 1 ; row <= this.rows ; row += 1) {
		int leftColumn = 1;
		while (leftColumn <= this.rows) {
			if (leftColumn <= this.rows - row) {
			  out.printf(
				"%c",
				underscore
			  );
			} else {
			  out.printf(
				"%c",
				asterisk
			  );	
			}
		  leftColumn += 1;	
		}
		int rightColumn = this.rows + 1;
		while (rightColumn <= columns) {
			if (rightColumn < this.rows + row) {
			  out.printf(
				"%c",
				asterisk
			  );	
			} else {
			  out.printf(
				"%c",
				underscore
			  );		  
			}
		  rightColumn += 1;	
		}
		out.println();
	  }
	return;  
  }	  
}