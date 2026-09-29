#include <iostream>

using namespace std;

int N;

int main() {
    cin >> N;
    int num = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < N; j++){
            cout << num << " ";
            num = (num + 1) % 10 ;
            if(num == 0)
                num++;
        }
        cout << endl;
    }

    return 0;
}