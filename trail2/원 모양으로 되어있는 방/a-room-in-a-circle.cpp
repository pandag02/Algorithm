#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int total = 0;
    vector<int> arr;
    cin >> total;
    for(int i = 0; i<total; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int min = INT_MAX;
    for(int i = 0; i < total; i++){
        int sum = 0;
        for(int j = 0; j < total; j++){
            sum += j * arr[(i+j)%total];
        }

        if(min > sum){
            min = sum;
        }
    }

    cout << min;

    return 0;
}