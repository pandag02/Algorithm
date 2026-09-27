#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;
    int num = 0;

    for(int i = 1; i <= N; i++){
       num += i;
    } 
    cout << num /10;
    return 0;
}