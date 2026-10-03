#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int i = 0;
    if(n > m){
        i = m;
    }else{
        i = n;
    }
    int num = 0;
    for( ; i > 0 ; i--){
        if(m % i == 0 && n % i == 0){
            num = i;
            break;
        }
    }

    cout << num;

    return 0;
}