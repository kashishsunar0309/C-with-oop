#include <iostream>
using namespace std;
int main()
{
    // Lamda mean [capture] (parameter) {code};.
    auto message = []()
    {
        cout << "Hello-World.\n";
    };
    message();
    // Passing value of lambda method.
    auto add = [](int a, int b)
    {
        return a + b;
    };
    cout << add(4, 5);

    return 0;
}

// Lambda using function.
/*
#include<iostream>
#include<functional>
using namespace std;
void my_function(function<void()> func ){
    func();
    func();
}
int main(){
    auto message = [] (){
        cout << "Hello-World "<< endl;
    };
    my_function(message);
    return 0;
}
*/

// Lambda for for loop.
/*
#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i<=4; i++){
        auto show = [i](){
            cout << "NUMBER: "<< i << endl;
        };
        show();
    }
    return 0;
}
*/

// Lambda for Capture clause
/*
#include<iostream>
using namespace std;
int main(){
    int x = 30;
    auto show = [x](){
        cout << x << endl;
    };
    show();
    return 0;
}
*/

// Lambda for Capture refrence
/*
#include<iostream>
using namespace std;
int main(){
    int x = 30;
    auto show = [&x](){
        cout << x << endl;
    };
    x = 50;
    show();
    return 0;
}
*/