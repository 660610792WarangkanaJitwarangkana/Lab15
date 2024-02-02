#include <iostream>
using namespace std;

int main(){
    
	double a = 5;
	char b = 'A';
	char &c = b;
	cout << a << " " << b << " " << c;
	
	double *x = &a;
	char *y = &b;
	double **z = &x;
	cout << " " << &x << " " << &y << " " << &z;
	
	cout << "\n" << &a << " " << &y << " " << &y;
	cout << " " << &x << " " << &y << " " << &z;
	
	b = c+5;
	cout << "\n" << a << " " << b << " " << c;
	cout << " " << &x << " " << &y << " " << &z;
	
	b = *y+17;
	cout << "\n" << a << " " << b << " " << c;
	cout << " " << &x << " " << &y << " " << &z;
	
	int n = 1;
	a = (*x)+1;
	cout << "\n" << a << " " << b << " " << c;
	cout << " " << &x << " " << &y << " " << &z;
	
	a = (**z)+n;
	cout << "\n" << a << " " << b << " " << c;
	cout << " " << &x << " " << &y << " " << &z;
	
	return 0;
}
