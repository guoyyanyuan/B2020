#include<iostream>
using namespace std;
int main() {
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e;
	f = 0;
	f = f + a % 3;
	a = a / 3;
	b = a + b;
	e = a + e;
	f = f + b % 3;
	b = b / 3;
    c = c + b;
	a = a + b;
	f = f + c % 3;
	c = c / 3;
	b = c + b;
	d = d + c;
	f = f + d % 3;
	d = d / 3;
	c = c + d;
	e = e + d;
	f = f + e % 3;
	e = e / 3;
	d = e + d;
	a = a + e;
	cout << a <<" "<< b <<" "<< c <<" "<< d <<" "<< e << endl;
	cout << f;
	return 0;
	
}