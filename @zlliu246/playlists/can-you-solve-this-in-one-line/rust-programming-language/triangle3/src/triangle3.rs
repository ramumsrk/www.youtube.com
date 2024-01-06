use std::io::stdin;

fn main() -> () {
    println!(
      "Enter number of rows: "
    );
    let mut string_buffer : String = String::new();
    stdin().read_line(&mut string_buffer).expect("Error occured when reading from standard-input");
    let rows : u32 = string_buffer.trim().parse().expect("Error occurred when converting a string-literal to an integer-literal");
    //
    // Function call
    //
    triangle3(rows);
  //
  // Return an empty tuple also
  // known as aan unit to the
  // underlying operating-system
  //
  return;
}

//
// Function definition
//
fn triangle3( rows : u32 ) -> () {
    let mut row = rows;
    while row >= 1 {
      let mut column = rows;
      while column > rows - row {
          print!("{}",column);
        column -= 1;
      }
      row -= 1;
      println!();  
    }
  //
  // Return an empty tuple also
  // known as an unit to the
  // caller
  //
  return;  
}