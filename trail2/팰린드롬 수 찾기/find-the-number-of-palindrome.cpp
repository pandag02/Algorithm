#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;
    int result = 0;
    for(int i = X; i <=Y; i++){
        int num = i;
        int arr[7]={0};
        int j =0;
        while(num > 0){
            int x = num % 10;
            num = num / 10;
            arr[j] = x;
            j++;
        }
        bool all = true;
        for(int k=0; k <j/2; k++){
            if(arr[k] != arr[j-k-1]){
                all = false;
            }
        }
        if(all)result++;
    }

    cout << result;

    return 0;
}