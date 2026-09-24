#include <iostream> // preprocessor to include a section of standard c++ code 
#include <string>
#include <cmath>
using namespace std;

int main() { // function that called when program is runned 

  /*          VARIABLES AND TYPES       */
  int a, b;
  int result;

  int angka1 (10); //constructor initialization
  int angka2 {8}; //uniform initialization

  auto bar = angka1; //same as int bar = angka1 
  
  a = 5;
  b = 2;
  a = a + 1;
  
  result = angka1 - angka2;

  cout << "Your Result: "  << result << "\n";
  cout << bar;

  string myString;
  myString = "This is my String"; //string also can declared without initial value and change value during execution
  cout << myString << endl;

  /*      CONSTANTS     */
  
  //c++ also allows using an octal(started with 0, eg: 0113) and hexadecimal (preceded by the 0x, eg: 0x4b)
   
  int input = 5;
  int jari = input - 1;

  // diamond menggunakan kolom dan baris
  for (int baris = -jari; baris <= jari; baris++){
    for (int kolom = -jari; kolom <= jari; kolom++){
      if (abs(baris) + abs(kolom) <= jari){
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
 

  return 0;
}
