//WAP THAT CALCULATES The SEQUENCE 1/1!+2/2!+3/3!+...... n\n! where n is the number of input by the user.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the number: ";
	cin >> n;
	double cal = 0;
	double fact = 1;
	for(int i=1;i<=n;i++){
		fact = fact * i;
		cal = cal+(i/fact);
	}
	cout << "The sum of Series: "<< cal;
	return 0;	
}