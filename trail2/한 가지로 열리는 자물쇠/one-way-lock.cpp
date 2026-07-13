#include <iostream>
using namespace std;

int main() {
    int N, A,B,C;
    cin >> N;
    cin >> A >> B >> C;

    int total = 0;
    for(int i = 1; i <= N; i++){
       for(int j = 1; j <= N; j++){
            for(int k = 1 ; k<= N; k++){
                if( abs(i-A) <= 2 || abs(j-B) <= 2 || abs(k-C) <= 2 ){
                    total++;
                }

            }
       } 
    }
    cout << total;

    return 0;
}