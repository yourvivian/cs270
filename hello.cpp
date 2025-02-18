#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 cout << "Hello world" << endl;
 cout << 9.0 / 2 << endl;
 cout << 9 / 2 << endl;

 int a = 5;
 int b = 7;
 int c = a + b;
 cout << a << " + " << b << " = " << c << endl;
 cout << fixed << setprecision(3) << 3.14159 << endl;
 double e, d;
 cin >> e >> d;
 cout << "e: " << e << "; d: " << d << endl;
return 0;
}