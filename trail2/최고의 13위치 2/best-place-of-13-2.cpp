#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int array[20][20] = {0};
    cin >> num;
    for(int i = 0; i<num; i++){
        for(int j = 0; j < num; j++){
            cin >> array[i][j];
        }
    }
    int max = 0, sum = 0, k=0,l=0;
    for(int i = 0; i<num; i++){
        for(int j = 0; j < num-2; j++){
            int first = array[i][j] + array[i][j+1]+array[i][j+2];
            if(j+3 < num-2){
                k = i;
                l = j+3;
            }else{
                k = i+1;
                l = 0;
            }
            for(; k<num; k++){
                for(; l < num-2; l++){
                    int second = array[k][l] + array[k][l+1]+array[k][l+2];;
                    sum = first + second;
                    if(max < sum){
                        max = sum;
                    }
                }
                l = 0;
            }
        }
    }
    cout << max;

    return 0;
}