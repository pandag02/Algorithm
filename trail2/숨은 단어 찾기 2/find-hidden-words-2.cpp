#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int total = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(arr[i][j] != 'L')
                continue;
            //좌 우 상 하 대각선들 필요
            if(i >= 2 && arr[i-1][j] == 'E' && arr[i-2][j] == 'E')
                total++;
            if(i < N-2 && arr[i+1][j] == 'E' && arr[i+2][j] == 'E')
                total++;
            if(j >= 2 && arr[i][j-1] == 'E' && arr[i][j-2] == 'E')
                total++;
            if(j < M-2 && arr[i][j+1] == 'E' && arr[i][j+2] == 'E')
                total++;

            if(i >= 2 && j >= 2 && arr[i-1][j-1] == 'E' && arr[i-2][j-2] == 'E')
                total++;
            if(i >= 2 && j < M-2  && arr[i-1][j+1] == 'E' && arr[i-2][j+2] == 'E')
                total++;
            if(i < N-2 && j >= 2 && arr[i+1][j-1] == 'E' && arr[i+2][j-2] == 'E')
                total++;
            if(i < N-2 && j < M-2 && arr[i+1][j+1] == 'E' && arr[i+2][j+2] == 'E')
                total++;
            
        }
    }
    cout << total;

    return 0;
}