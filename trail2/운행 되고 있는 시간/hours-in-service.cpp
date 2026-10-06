#include <iostream>

using namespace std;

int N;
int A[100]={0}, B[100]={0};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    int max =0;
    // 빼야 되는거
    for(int i = 0; i < N; i++){
        int arr[1000] = {0};
        for(int j = 0; j < N; j++){
            if(j == i) continue;
            for(int k = A[j]; k < B[j]; k++){
                arr[k]++;
            }
        }
        int num = 0;
        for(int k = 0; k < 1000; k++){
            if(arr[k] != 0) num++;
        }
        if(num > max) max = num;
    }
    cout << max;
    return 0;
}