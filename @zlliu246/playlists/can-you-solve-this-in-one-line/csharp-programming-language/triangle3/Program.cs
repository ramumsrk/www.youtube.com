System.Console.Write("Enter number of rows: ");
var rows = System.Convert.ToInt32(System.Console.ReadLine());
for (var row = rows ; row >= 1 ; row -= 1)
{
  for (var column = rows ; column > rows - row ; column -=1)
  {
    System.Console.Write($"{column}");
  }
  System.Console.WriteLine();
}