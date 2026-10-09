#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }
    int result = 0;
    for(int i = 0; i < N; i++){
        bool cross = false;
        for(int j = 0; j < N; j++){
            if(j==i) continue;
            
            if ((x1[i] < x1[j] && x2[i] > x2[j]) ||
                (x1[i] > x1[j] && x2[i] < x2[j])) {
                cross = true;
                break;
            }

        }
        if(!cross)result++;
    }
    cout << result;
    return 0;
}