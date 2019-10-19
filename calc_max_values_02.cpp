/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <limits.h>
#include <cmath>

using namespace std;

int
main ()
{
  //code to format numbers with seperators
  std::locale loc("");//get default locale
  std::cout.imbue(loc);//set cout locale
    
  unsigned char uc = 0;
  unsigned int ui = 0;
  unsigned short int usi = 0;
  signed char sc = 0;
  signed short int ssi = 0;
  signed long int sli = 0;
  signed int si = 0;

  cout << "CHAR_BIT: " << CHAR_BIT << endl;	//number of bits in byte

  //calc the value for each bit of the data type
  
  //unsigned formula 
  uc = pow (2, CHAR_BIT * sizeof (uc)) - 1;
  ui = pow (2, CHAR_BIT * sizeof (ui)) - 1;
  usi = pow (2, CHAR_BIT * sizeof (usi)) - 1;

  //signed formula
  sc = pow (2, (CHAR_BIT * sizeof (sc) - 1)) - 1;
  ssi = pow (2, (CHAR_BIT * sizeof (ssi) - 1)) - 1;
  si = pow (2, (CHAR_BIT * sizeof (si) - 1)) - 1;
  sli = pow (2, (CHAR_BIT * sizeof (sli) - 2)) - 1;

  //char is displayed as a character not an integer value
  //unless cast to integer
  cout << "Maximum values for data types:\n";
  cout << "uc unsigned character value (" << UCHAR_MAX << "): " << int (uc) << endl;
  cout << "ui unsigned integer value (" << UINT_MAX << "): " << ui << endl;
  cout << "usi unsigned short integer value (" << USHRT_MAX << "): " << usi << endl;
  cout << "si signed integer value (" << INT_MAX << "): " << si << endl;
  cout << "sc short character value (" << SCHAR_MAX	 << "): " << int (sc) << endl;
  cout << "ssi signed short integer value (" << SHRT_MAX << "): " << ssi << endl;
  
  return 0;
}
