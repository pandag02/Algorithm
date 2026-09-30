#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    bool result = false;
    if(n % 2 == 0){
        if(((int)(n/10) + n%10) % 5 == 0 ){
            result = true;
        }
    }
    string p = result ? "Yes" : "No";
    cout << p;
    return 0;
}