#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int num; 
    vector<pair<int, int>> arr(100);
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    int min = INT_MAX;
    for(int i = 1; i < num -1; i++){
        int sum = 0;
        for(int j = 1; j < num; j++){
            if(j == i){
                continue;
            }else if(j == i+1){
                sum += abs(arr[j-2].first - arr[j].first) + abs(arr[j-2].second - arr[j].second);

            }else{
                sum += abs(arr[j].first - arr[j-1].first) + abs(arr[j].second - arr[j-1].second);
            }     
        }
        if(min > sum){
            min = sum;
        }
    }
    cout << min;
    return 0;
}