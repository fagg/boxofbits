#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
  int *block;
  int sz, i, cnt;

  if ( argc < 2 )
  {
    printf( "Usage: memtest <number of slots>\n" );
    return 1;
  }

  sz = atoi( argv[1] );
  block = ( int * ) malloc( sz );
  sz /= sizeof( *block );
  for ( i = 0; i < sz; i++ ) block[i] = i;
  while ( cnt < ( 1 << 30 ) )
  {
    i = random() % sz;
    if ( block[i] != i ) 
      printf( "\nIncorrect block: %d = %d\n", i, block[i] );
    cnt++;
    if ( cnt % 100 == 0 ) printf( "%d\r", cnt );
    fflush( stdout );
  }
  return 0;
}

