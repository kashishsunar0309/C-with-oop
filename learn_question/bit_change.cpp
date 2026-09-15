#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "Enter the integer from keyboard: ";
	cin >> x;
	cout << "\n Enter value: " << x;
	cout << "\n The left shifted data is: " << (x<<=2);
	return 0;
}