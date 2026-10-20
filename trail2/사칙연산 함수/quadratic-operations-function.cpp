#include <iostream>

using namespace std;

int a;
int c;
char o;

int main() {
    cin >> a >> o >> c;

    if(o == '+' || o == '-' || o == '*' || o == '/'){
        cout << a << " " << o << " " << c << " = ";
        if(o == '+')
            cout << a+c;
        if(o == '-')
            cout << a-c;
        if(o == '*')
            cout << a*c;
        if(o == '/')
            cout << a/c;
        
    }
    else{
        cout << "False";
    }

    return 0;
}