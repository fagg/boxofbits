/********************************************************************
 * bitcount.c - Returns number of bits required to represent
 * a number. Should be portable.
 *
 * Ashton Fagg (ashton@fagg.id.au)
 ********************************************************************/

int bit_count( unsigned int i )
{
  int bits = 0;
  while ( x > 0 )
  {
    i = i & (i - 1);
    bits++;
  }
  return bits;
}
