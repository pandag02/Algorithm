#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char arr[11];
    cin >> arr;

    int max = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] != '1'){
            arr[i] = '1';
            break;
        }
        if(i == strlen(arr) -1){
            arr[i] = '0';
        }
    }

    int sum = 0;
    int num = 1;
    for(int j = strlen(arr)-1; j > -1; j--){
        int total =(arr[j] - '0') * num;
        sum = sum + total;
        num *= 2;
    }
    cout << sum; 
    

    return 0;
}