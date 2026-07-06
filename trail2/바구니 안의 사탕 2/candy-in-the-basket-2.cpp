#include <iostream>
using namespace std;

int main() {
    int N, K, arr[101]={0};
    cin >> N >> K;

    for(int i = 0; i< N; i++){
        int position, candy;
        cin >> candy >> position;
        arr[position] += candy;
    }

    if (2 * K >= 100) {
        int total = 0;
        for (int i = 0; i <= 100; i++)
            total += arr[i];

        cout << total;
        return 0;
    }

    int max = 0;
    for(int i = 0; i <= 100 - 2*K; i++){
        int total=0;
        for(int j = i; j < i+(2*K)+1; j++){
            total += arr[j];
        }
        if(max < total)
            max = total;
    }

    cout << max;


    return 0;
}