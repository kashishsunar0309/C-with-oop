#include<iostream>
using namespace std;
bool isprimeflag(int num){
    bool primenum = true;
    for(int i = 2; i<num; i++){
        if (num % i == 0){
            primenum = false;
            break;
        }
    }
    return primenum;
}
int main(){
    int num;
    cout << "NUMBER: ";
    cin >> num;
    bool primenum  = isprimeflag(num);
    if(primenum)
        cout << "PRIME";
    else
        cout << "NOT PRIME";
    return 0;
}