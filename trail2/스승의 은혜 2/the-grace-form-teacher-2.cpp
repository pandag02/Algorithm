#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P, P+N);
    int num = 0;
    bool coupon = true;
    int buget = B;

    for(int i = 0; i <N; i++){
        if(buget-P[i] < 0){
            if(coupon && buget-P[i]/2 >= 0){
                buget -= P[i]/2;
                coupon = false;
                num++;
                continue;
            }else{
                break;
            }
        }else{
            num++;
            buget -= P[i];
        }

    }
    cout  << num;

    return 0;
}