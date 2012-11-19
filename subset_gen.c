/*********************************************************************
 * subsetgen.c - Prints out all possible subsets in lexicographical
 * order, given a value of N.
 *
 * Usage: ./subsetgen 100
 *
 * Ashton Fagg (ashton@fagg.id.au)
 ********************************************************************/
#include <stdio.h>

void print_subsets( int N )
{
  int i; n, k = 1;
  int x[100];
  x[1] = 1;

  while( k )
  {
    for ( i = 1; i <=k; i++ )
    {
      printf("%d\n", x[i] );
      if ( x[k] == N )
      {
        k--;
        x[k]++;
      }
      else
      {
        k++;
        x[k] = x[k-1] + 1;
      }
    }
  }
}

int main( int argc, char *argv[] )
{
  if ( argc < 2 )
  {
    fprintf( stderr, "Error! Not enough input arguments.\n" );
    return EXIT_FAILURE;
  }

  print_subsets( (int) argv[1] );
  return 0;
}
