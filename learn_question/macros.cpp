#include<iostream>
using namespace std;
#define mul(a,b)a*b//Macros definition
#define div(a,b)a/b//Macros definition
int main(){
    int x = 4,y= 6;
    float j= 7,k = 3;
    cout << mul(x,y) << endl;//macros call
    cout << mul(j,k)<< endl;//macros call
    cout << div(x,y) << endl;//macros call
    cout << div(j,k)<< endl;//macros call
    return 0;
}