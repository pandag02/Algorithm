#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char array[100];
    int len = 0;
    cin >> len;
    cin >> array;

    int total = 0;
    for(int i = 0; i <len-2; i++ ){
        for(int j = i+1; j < len-1; j++){
            for(int k = j+1; k<len; k++){
                if(array[i] == 'C' && array[j] == 'O' && array[k] == 'W'){
                    total++;
                }
            }
        }
    }    
    cout << total;
    return 0;
}