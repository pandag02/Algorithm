#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cin >> num;
    int arr[20][20] = {0};

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cin >> arr[i][j];
        }
    }

    int max = -1;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num -2; j++){
            if(max < arr[i][j] + arr[i][j+1] + arr[i][j+2]){
                max = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            }
        }
    }
    cout << max;

    return 0;
}