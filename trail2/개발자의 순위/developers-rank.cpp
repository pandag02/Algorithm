#include <iostream>

using namespace std;

int k, n;
int arr[10][20];

int main() {
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    int result = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = i+1; j < n; j++){
            int a = arr[0][i], b = arr[0][j];

            int count = 0;
            for(int l = 1; l < k; l++){
                bool find_big = false, find_small = false;
                for(int m = 0; m < n; m++){
                    if(arr[l][m] == a)find_big=true;
                    if(find_big == true && find_small == false){
                       for(int c = m; c < n; c++){
                            if(arr[l][c] == b){count++; break;}
                       }
                        break;
                    }
                    if(arr[l][m] == b)find_small=true;
                }
            }
            if(count == k-1)result++;
        }
    }

    cout << result;

    return 0;
}