#include <iostream>

using namespace std;

int a, b;

bool IsPrime(int n) {
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;

    return true;
}

int main() {
    cin >> a >> b;
    int result = 0;
    for(int i = a; i <=b; i++){
        if(IsPrime(i))result+=i;
    }
    cout << result;
    return 0;
}