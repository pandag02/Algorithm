#include <iostream>

using namespace std;

int N, K;
int num[100];
int boom[100]={0};

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(num[i] == num[j]){
                if(abs((i+1)-(j+1))<=K){
                    boom[i] = 1;
                    boom[j] = 1;
                }
            }
        }
    }
    int result = -1;
    for(int i = 0; i < N; i++){
        if(boom[i] == 1){
            if(result < num[i])result = num[i];
        }
    }
    cout << result;

    return 0;
}