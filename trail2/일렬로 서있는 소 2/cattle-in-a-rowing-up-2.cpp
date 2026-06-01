#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int arr[100] = {0};
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }
    int total = 0;
    for(int i = 0; i < num-2; i++){
        for(int j = i+1; j < num-1; j++){
            for(int k = j+1; k < num; k++){
                if(arr[i] <= arr[j] && arr[j] <= arr[k]){
                    total++;
                }

            }
        }
    }
    cout << total;
    return 0;
}