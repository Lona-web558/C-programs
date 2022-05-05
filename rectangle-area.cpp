// area of a rectangle

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
//declare variables then do calculation
int length;
int breadth;
int area;
cout << "Enter the length of the rectangle: ";
cin >> length;
cout << "Enter the breadth of the rectangle: ";
cin >> breadth;
area = length * breadth;
cout << " The area of the rectangle is: " << area;
return 0;
}
