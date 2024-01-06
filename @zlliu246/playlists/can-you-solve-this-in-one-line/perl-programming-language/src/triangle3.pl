#! /usr/bin/perl5.38.2 -w -W -T -l

use 5.038.2;
use utf8;
use strict;
use warnings;
use integer;
use feature 'signatures';

sub triangle3($rows)
{
  for (my $row = $rows ; $row >= 1 ; $row -= 1)
  {
    for (my $column = $rows ; $column > $rows - $row ; $column -= 1)
    {
      printf STDOUT "%d" , ${column};
    }
    printf STDOUT "\n";
  }
}

printf STDOUT "Enter number of rows: ";
my $rows = <STDIN>;
chomp $rows;
triangle3($rows);