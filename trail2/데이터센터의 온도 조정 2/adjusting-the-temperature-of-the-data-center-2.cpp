#include <iostream>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    int maxWork = 0;
    for(int i = -5; i <= 1005; i++){
        int work = 0;
        for (int j = 0; j < N; j++) {
            if( i < Ta[j]){
                work += C;
            }
            else if(Ta[j] <=i && i <= Tb[j]){
                work += G;
            }else if(Tb[j] < i){
                work += H;
            }
        }
        if(maxWork < work) maxWork = work; 
    }
    cout << maxWork;
    return 0;
}