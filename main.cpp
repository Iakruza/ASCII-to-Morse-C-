#include <iostream>
#include <string> 
#include <map>
#include "morse.h"
using namespace std;


int main()
{

  cout << "******************************" << endl;
   string sentence;
   setmap();


   cout << "Enter ASCII to get Morse: ";
   getline( cin, sentence);
   cout << encode( sentence );
  
}
