#include <iostream>
using namespace std;
int x,y;
float wynik;
int main()
{
 cout << "Hello world!!" << endl;
 cout <<"podaj x"<< endl ;
 cin>>x;
  cout <<"podaj y"<< endl ;
  cin>>y;
  if (y == 0)
  {
      cout<<"Nie mozna dzielic przez 0!!!"<<endl;
    return 0;
  }
  wynik = x/y;
  cout << "wynik to " << endl <<wynik<<endl;
  return 0;
}
/*#include <iostream> // include API

using namespace std;

int main() // the main code portion of a C++ program
{
   cout << "Hello World" << endl;  //print Hello World on the screen
   return 0; // conventional
}
*/
