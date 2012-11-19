/**************************************************************
 * date_time_as_std_string.cpp - Nice and easy way to return
 * the current date and/or time as a std::string.
 *
 * Ashton Fagg (ashton@fagg.id.au)
 **************************************************************/

#include <iostream>
#include <time.h>

// Use the format argument to specify what info to return,
// and how it should be formatted. You can view a list of
// arguments that strftime accepts here:
// http://www.cplusplus.com/reference/clibrary/ctime/strftime/
const std::string stringify_date( const char *format )
{
  time_t now = time( 0 );
  struct tm ts;
  char ret[80];
  ts = *( localtime( &now ) );
  strftime( ret, sizeof( ret ), format, &ts );
  return ret;
}

int main( void )
{
  std::string the_date = stringify_date( "%Y-%m-%d" );
  std::cout << "The date is: " << the_date << "\n";
  return 0;
}
