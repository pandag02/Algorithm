#include <iostream>
#include<climits>
using namespace std;

int main() {
    int arr[6] = {0};
    int total = 0;
    for(int i = 0; i< 6; i++){
        cin >> arr[i];
        total += arr[i];
    }
    int min = INT_MAX;
    for(int i = 0 ; i< 6;i++){
        for(int j = i+1; j < 6;j++){
            for(int k = j+1; k < 6; k++){
                int B = abs(total-arr[i]-arr[j]-arr[k]);
                if(abs(arr[i]+arr[j]+arr[k] - B) < min)
                    min = abs(arr[i]+arr[j]+arr[k] - B);
            }
        }
    }
    cout << min;

    return 0;
}