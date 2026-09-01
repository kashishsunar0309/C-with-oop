#include<iostream>
using namespace std;
void introduction(string name, string country, int age){
    cout << "=========================\n" << endl;
    cout << "NAME: "<< name << endl;
    cout << "COUNTRY: "<< country << endl;
    cout << "AGE:  "<< age << endl;
}
int main(){
    string n,c;
    int a;
    cout << "Enter NAME: "<< endl;
    cin >> n;
    cout << "Enter COUNTRY: "<< endl;
    cin >> c;
    cout << "Enter AGE: "<< endl;
    cin >> a;
    introduction(n,c,a);
    introduction("Ram","Austria",23);
    return 0;
}