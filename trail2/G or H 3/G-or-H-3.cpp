#include <iostream>
using namespace std;

int main() {
    int array[10001] = {0};
    int N, K;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        int num; char score;
        cin >> num >> score;
        if(score == 'G')
            array[num] = 1;
        if(score == 'H')
            array[num] = 2;   
    }
    int max = 0;
    for(int i = 0; i <= 10000-K; i++){
        int total = 0;
        for(int j = i; j < i+K+1; j++){
            total += array[j];
        }
        if(max < total){
            max = total;
        }
    }

    cout << max;
    return 0;
}