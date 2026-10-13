#include <iostream>

using namespace std;

int n;
int l[10], r[10];
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }
    int result=0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                // 제거할 선들을 결정 i, j, k
                bool crossLine = false;
                int arr[105]={0};
                for(int g=0; g < n; g++){
                    if(g==i || g==j || g==k)continue;

                    for(int m = l[g]; m <= r[g]; m++){
                        if(arr[m] == 0)
                            arr[m]=1;
                        else if(arr[m] == 1){
                            crossLine = true;    
                            break;
                        }
                    }
                }
                if(!crossLine)result++;

            }
        }
    }

    cout << result;

    return 0;
}