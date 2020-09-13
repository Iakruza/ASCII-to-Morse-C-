#include <iostream>
#include <map>


std::map<char, std::string>morse; //map
std::map<char,std::string>::iterator it;

std::string encode(std::string text) // text to morse
{
  char SPACE = ' ';
  std::string result;

  for (int i = 0; i <text.size(); i++) //loop through text characters
  {
    it = morse.find( text[i] );  //iterator
    if ( it != morse.end() ) result += it->second + SPACE; //if in map add to morse code
  }
  return result;
}




void setmap()
{
  morse['A']= morse['a']= ".-";
  morse['B']=morse['b']="-...";
  morse['C']=morse['c']="-.-.";
  morse['D']=morse['d']="-..";
  morse['E']=morse['e']=".";
  morse['F']=morse['f']="..-.";
  morse['G']=morse['g']="--.";
  morse['H']=morse['h']="....";
  morse['I']=morse['i']="..";
  morse['J']=morse['j']=".---";
  morse['K']=morse['k']="-.-";
  morse['L']=morse['l']=".-..";
  morse['M']=morse['m']="--";
  morse['N']=morse['n']="-.";
  morse['O']=morse['o']="---";
  morse['P']=morse['p']=".--.";
  morse['Q']=morse['q']="--.-";
  morse['R']=morse['r']=".-.";
  morse['S']=morse['s']="...";
  morse['T']=morse['t']="-";
  morse['U']=morse['u']="..-";
  morse['V']=morse['v']="...-";
  morse['W']=morse['w']=".--";
  morse['X']=morse['x']="-..-";
  morse['Y']=morse['y']="-.--";
  morse['Z']=morse['z']="--..";

  morse['1']=".----";
  morse['2']="..---";
  morse['3']="...--";
  morse['4']="....-";
  morse['5']=".....";
  morse['6']="-....";
  morse['7']="--...";
  morse['8']="---..";
  morse['9']="----.";
  morse['0']="-----";

  
  
}
