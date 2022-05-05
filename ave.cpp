// average of numbers

#include <iostream>

using namespace std;

int main(){
int i;
int n;
int x;
int sum;
cout << "How many numbers do you want?";
cin >> n;
for (i = 1; i<= n; ++i){
cout <<  "Enter number " << i << ':';
cin >> x;
sum += x;

}
x = sum / n;
cout << "Average " << x;
return 0;
}
