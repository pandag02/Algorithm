#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;
    int result = 0;
    for(int i = X; i <=Y; i++ ){
        int num = i;
        int arr[10] = {0};
        int j = 0;
        while(num > 0){
            arr[num % 10]++;
            num = num / 10;
            j++;
        }
        bool findAnother = false;
        bool special = true;
        int zero = 0;
        for(int k = 0; k < 10; k++){
            if(arr[k] == 0) zero++;
            if(arr[k] == 1 && findAnother == true) special = false;
            else if(arr[k] == 1 && findAnother == false)findAnother = true;
        }
        if(special == true && findAnother == true && zero == 8)result++;

    }
    cout << result; 
    return 0;
}