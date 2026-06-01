#include <iostream>
using namespace std;

char board[15][15];

int main() {
    int R, C;
    cin >> R >> C;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }

    int answer = 0;

    for(int r1 = 1; r1 < R - 2; r1++) {
        for(int c1 = 1; c1 < C - 2; c1++) {

            if(board[r1][c1] == board[0][0])
                continue;

            for(int r2 = r1 + 1; r2 < R - 1; r2++) {
                for(int c2 = c1 + 1; c2 < C - 1; c2++) {

                    if(board[r2][c2] == board[r1][c1])
                        continue;

                    if(board[r2][c2] == board[R-1][C-1])
                        continue;

                    answer++;
                }
            }
        }
    }

    cout << answer;
    return 0;
}