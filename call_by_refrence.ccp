#include<iostream>
using namespace std;
void swap(int &x , int &y);
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    return ;
}
int main(){
    int a = 100;
    int b = 200;
    cout <<"Before Swap value of a : "<< a << endl;
    cout << "Before Swap value of b : "<< b << endl;
    swap(a, b);
    cout << "After Swap value of a : "<< a << endl;
    cout <<"After Swap value of b : "<< b << endl;
    return 0;
}
    
