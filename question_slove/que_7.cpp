/*WAP to display sum of the following series up to n terms. Sum = x - x^2 + x^3 - x^4 +......*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	double x,sum = 0;
	cout << "Enter the number of terms(N): ";
	cin >> n;
	cout << "Enter the number(X): ";
	cin >> x;
	for(int i=1;i<=n;i++){
		if(i%2 == 1){
			sum += pow(x,i);
		}
		else{
			sum -= pow(x,i);
		}	
	}
	cout<< "The sum of series: "<<sum;
	return 0;
}