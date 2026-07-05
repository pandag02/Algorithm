#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M, A[101], B[101];
    cin >> N >> M;
    for(int i = 0; i<N; i++){
        cin >> A[i];
    }
    for(int i = 0; i<M; i++){
        cin >> B[i];
    }
    int result = 0;

    sort(B, B+M);

    for(int i=0;i<=N-M;i++){
        int temp[101];

        for(int j=0;j<M;j++)
            temp[j]=A[i+j];

        sort(temp,temp+M);

        bool same=true;
        for(int j=0;j<M;j++){
            if(temp[j]!=B[j]){
                same=false;
                break;
            }
        }

        if(same) result++;
    }

    cout << result;

    return 0;
}