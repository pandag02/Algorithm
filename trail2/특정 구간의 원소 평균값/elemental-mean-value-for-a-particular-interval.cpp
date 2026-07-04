#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, arr[100];

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int total = 0;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            int sum = 0;
            for(int k = i; k <= j; k++)
                sum += arr[k];

            if(sum % (j-i+1) == 0){
                int avg = sum / (j-i+1);

                for(int k = i; k <= j; k++){
                    if(arr[k] == avg){
                        total++;
                        break;
                    }
                }
            }
        }
    }
    cout << total;
    
    return 0;
}
