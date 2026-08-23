#include <iostream>

using namespace std;

int arr[5];

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int minimun = 200000000;
    for(int i = 0; i < 5; i++){
        for(int j= i+1; j < 5; j++){
            
            for(int k = 0; k < 5; k++){
                if(i==k || j==k)
                    continue;
                for(int l = k+1; l < 5; l++){
                    if(j ==l || l == i)
                        continue;

                    int thinum;
                    for(int y = 0; y <5; y++){
                        if(i==y || j==y ||y==k || y==l)
                            continue;
                        thinum = y;
                    }

                    int fir = arr[i] + arr[j];
                    int sec = arr[k] + arr[l];
                    int thi = arr[thinum];

                    if(fir == sec || sec == thi || thi == fir)
                        continue;

                    int maxValue = max(fir, max(sec, thi));
                    int minValue = min(fir, min(sec, thi));
                    
                    if(minimun > maxValue - minValue)
                        minimun = maxValue - minValue;
                }
            }
        }
    }

    if(minimun == 200000000)
        cout << -1;
    else
        cout << minimun;

    return 0;
}