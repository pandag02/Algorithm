#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    int min = 0;
    if(a <= b){
        min = a;
    }else {
        min = b;
    }
    if(min > c ){
        min = c;
    }

    cout << min;
        
    return 0;
}