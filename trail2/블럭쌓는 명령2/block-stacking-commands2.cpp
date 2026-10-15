#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    int arr[105] = {0};
    for(int i = 0; i < K; i++){
        for(int j=A[i]; j<=B[i]; j++){
            arr[j]++;
        }
    }
    int result = 0;
    for(int i = 0; i < 105; i++){
        if(result < arr[i])result = arr[i];
    }

    cout << result;

    return 0;
}