#include <iostream>

using namespace std;

int N;
int x[100];
int y[100];

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    //y 값이 같고 다른 x값을 가진 점을 2개 찾는다. 
    //y 값이 다른 점을 찾습니다. 
    //x 값 * y값 구하기 

    int max = 0;
    for(int i = 0; i <N-1; i++){
        for(int j = i+1; j < N; j++){
            if(y[i] != y[j]) continue;
            for(int k=0; k < N; k++){
                if(k==i || k==j)continue;
                if((x[k] == x[i] || x[k] == x[j])){
                    int area = abs(
                        x[i] * y[j]
                        + x[j] * y[k]
                        + x[k] * y[i]
                        - x[j] * y[i]
                        - x[k] * y[j]
                        - x[i] * y[k]
                    );

                    if (max < area) {
                        max = area;
                    }
                }

            }
        }
    }

    cout << max; 

    return 0;
}