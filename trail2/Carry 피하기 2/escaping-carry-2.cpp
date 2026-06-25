#include <iostream>

using namespace std;

int n;
int arr[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = -1;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int fir = ((arr[i]%10) + (arr[j]%10) + (arr[k]%10)) / 10 ;
                if(fir != 0)
                    continue;
                int sec = ((arr[i]%100) + (arr[j]%100) + (arr[k]%100)) / 100 ;
                if(sec != 0)
                    continue;
                int thir = ((arr[i]%1000) + (arr[j]%1000) + (arr[k]%1000)) / 1000 ;
                if(thir != 0)
                    continue;
                int four = ((arr[i]%10000) + (arr[j]%10000) + (arr[k]%10000)) / 10000 ;
                if(four != 0)
                    continue;
                int fiv = ((arr[i]%100000) + (arr[j]%100000) + (arr[k]%100000)) / 100000 ;
                if(fiv != 0)
                    continue;

                if(max < arr[i] + arr[j] + arr[k]){
                    max = arr[i] + arr[j] + arr[k];
                }
                
            }
        }
    }
    cout << max;

    return 0;
}