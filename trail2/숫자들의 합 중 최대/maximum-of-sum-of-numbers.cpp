#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    int maxResult =0;
    for(int i = X; i <= Y; i++){
        int numX = i;
        int resultX = 0;
        while(numX > 0){
            resultX += numX % 10;
            numX = numX / 10;
        }
        if(maxResult < resultX) maxResult = resultX;
    }
    

    
    cout << maxResult;
    return 0;
}