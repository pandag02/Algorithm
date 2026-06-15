#include <iostream>
using namespace std;

int main() {
    int array[19][19] = {0};
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> array[i][j];
        }
    }
    int result = 0;
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            if(array[i][j] != 0){
                int num = array[i][j];
                if(i<19-4 && num == array[i+1][j] && num == array[i+2][j] && num == array[i+3][j] && num == array[i+4][j]){
                    result = num;
                    cout << result << endl;
                    cout << i+3 << " " << j+1;
                    return 0;
                }
                if(j<19-4 && num == array[i][j+1] && num == array[i][j+2] && num == array[i][j+3] && num == array[i][j+4]){
                    result = num;
                    cout << result << endl;
                    cout << i+1 << " " << j+3;
                    return 0;
                }
                if(i<19-4 && j<19-4 && num == array[i+1][j+1] && num == array[i+2][j+2] && num == array[i+3][j+3] && num == array[i+4][j+4]){
                    result = num;
                    cout << result << endl;
                    cout << i+3 << " " << j+3;
                    return 0;
                }
                if(i<19-4 && j>4 && num == array[i+1][j-1] && num == array[i+2][j-2] && num == array[i+3][j-3] && num == array[i+4][j-4]){
                    result = num;
                    cout << result << endl;
                    cout << i+3 << " " << j-1;
                    return 0;
                }
            }
        }
    }
    if(result == 0){
        cout << result;
    }

    return 0;
}