#include <iostream>
#include <algorithm>
using namespace std;


int arr[6] = {1, 5, 2, 6, 8, 9};

int main() {
    int n,k;
    int arr[100];
    cin >> n >> k;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int max = 0;
    for(int i = 0; i <= n - k; i++) {
        int max_val = 0;
        for(int j = i; j < i + k; j++)
            max_val = max_val + arr[j];

        if(max < max_val)
            max = max_val;
    }
    
    cout << max;
    
    return 0;
}