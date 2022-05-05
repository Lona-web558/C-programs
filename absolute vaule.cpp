#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int x = -5;
	long y = -2371041;
	int a = abs(x);
	long b = abs(y);
	cout<<"abs(" << x << ") = |" << x << "| = " << a;
	cout<<"abs(" << y << ") = |" << y << "| = " << b;
}
