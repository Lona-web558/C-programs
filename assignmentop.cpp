//assignment operator example

#include <iostream>

using namespace std;

int main(){
//variable declaration

int a = 10;
int b = a;
cout << b;
// += operator
b += 10;
cout << "\n"<< b;
//-= operator
b -= 5;
cout << "\n" << b;
// *= operator
b *= 4;
cout << "\n" << b;
// /= operator
b /= 2;
cout << "\n" << b;
return 0;
}
