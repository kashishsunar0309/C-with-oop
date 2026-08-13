#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    string name;
    cout << "========================================================="<< endl;
    cout << "===== Game Idea is this check the number Prediction ====="<< endl;
    cout << "========================================================="<< endl;
    cout << "========================================================="<< endl;
    cout << "====For Easy Number is less then 10 which save Times.===="<< endl;
    cout << "========================================================="<< endl;
    while (true){
        cout << "Enter the number please: " << endl;
        cin >> num;
        cout << "Enter Your name: "<< endl;
        cin >> name;
        
        if (num == 3){
            cout << " YOU SHOULD PAY THE BILLS. "<< name;
            break;
        }
        else{
            cout << "SAVE BY LUCK-MAN"<< endl;
        }
    }
    return 0;
}