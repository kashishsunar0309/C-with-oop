#include<iostream>
using namespace std;
int main(){
    int num, size;
    cout << "Enter the size: ";
    cin >> size;
    for(int i=1; i<=size; i++){
        bool isprime = true;
        cout << "Enter the number: ";
        cin >> num;
        for(int j=2; j<num; j++){
            if(num % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime && num > 1){
            cout << "PRIME" << endl;
        } else {
            cout << "NOT PRIME" << endl;
        }
    }
    return 0;
}