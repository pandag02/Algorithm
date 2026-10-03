#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int minimum = 2000000000;
    // 하나를 뺀 점중에서 가장 작은 x, y, 가장 큰 x,y를 찾는다. 
    
    for(int i = 0; i < N; i++){ //뺀 점
        int minX=40001, minY=40001, maxX=0, maxY=0;
        for(int j = 0; j < N; j++){
            if(j == i) continue;

            if(x[j] > maxX) maxX = x[j];
            if(y[j] > maxY) maxY = y[j];

            if(x[j] < minX) minX = x[j];
            if(y[j] < minY) minY = y[j];

        }
        int num1 = maxX - minX;
        int num2 = maxY - minY;
        if(minimum > num1*num2) minimum = num1*num2;

    }
    if(minimum == 2000000000){
        cout << 0;
    }
    cout << minimum;

    
    return 0;
}