#include <iostream>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int max = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = i+2; j < n; j++){
            if(numbers[i] + numbers[j] > max){
                max = numbers[i] + numbers[j];
            }
        }
    }
    cout << max;

    return 0;
}