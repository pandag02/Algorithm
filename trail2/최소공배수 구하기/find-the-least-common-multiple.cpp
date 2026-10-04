#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int num = 0;
    if(n > m){
        num = n;
    }else{
        num = m;
    }
    int result = -1;
    for(int i = num; i <=n*m ; i++){
        if(i%m == 0 && i%n== 0){
            result = i;
            break;
        }

    }
    if(result == -1)
        cout << n*m;
    else{cout << result;}
    return 0;
}