#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, H, T;
    int arr[101]={0};
    cin >> N >> H >> T;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    for(int i = 0; i <= N-T; i++){
        int result=0;
        for(int j = i; j < i+T; j++){
            int num = abs(H - arr[j]);
            result += num;
        }
        if(min > result){
            min = result;
        }
    }

    cout << min;

    return 0;
}