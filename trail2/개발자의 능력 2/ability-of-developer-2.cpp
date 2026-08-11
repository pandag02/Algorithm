#include <iostream>

using namespace std;

int ability[6];

int main() {
    int total = 0;
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
        total += ability[i];
    }
    int minimun = 200000000;
    for(int i = 0; i < 6; i++){
        for(int j = i+1; j < 6; j++){
            
            for(int k = 0; k < 6; k++){
                if(i==k || j==k)
                    continue;
                for(int l = k+1; l < 6; l++){
                    if(j ==l || l == i)
                        continue;

                    int fir = ability[i] + ability[j];
                    int sec = ability[k] + ability[l];
                    int thi = total - (fir + sec);

                    int maxValue = max(fir, max(sec, thi));
                    int minValue = min(fir, min(sec, thi));

                    int diff = maxValue - minValue;

                    if (diff < minimun) {
                        minimun = diff;
                    }
                }
            }
        }
    }

    cout << minimun;

    return 0;
}