#include <iostream>
#include<vector>
using namespace std;

int N, M, D, S;
int p[1000], m[1000], t[1000];
int sick_p[50], sick_t[50];

int main() {
    cin >> N >> M >> D >> S;

    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    for (int i = 0; i < S; i++) {
        cin >> sick_p[i] >> sick_t[i];
    }

    //아픈 사람이 아프기 전에 뭘 먹었는지 정리(+1초 전에 먹은 것만 추린다.)
    int cheese[51][51]={0}, person[51]={0};
    int k = 0;
    for(int i = 0; i < S; i++){
        for(int j = 0; j < D; j++){
            if(sick_p[i] == p[j] && sick_t[i]-1 >= t[j]){
                cheese[p[j]][m[j]]++;
                person[p[j]]++;
            }
        }   
    }
    // for(int i = 0; i < 50 ; i++){
    //     for(int j = 0; j < 50 ; j++){
    //         cout << cheese[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
    // for(int j = 0; j < 50 ; j++){
    //     cout << person[j] <<" ";
    // }

    //공통으로 먹은 치즈 찾기
    int result= 0;
    for(int i =1 ; i < 51 ;i++){
        bool sick_cheese = false;
        for(int j = 1; j < 51; j++){
            if(person[j] == 0)continue;
            sick_cheese = true;
            if(cheese[j][i] == 0){
                sick_cheese = false;
                //cout << j << " " << i << endl;
                break;
            }
        }
        if(sick_cheese){
            result = i;
            break;
        }
    }

    

    int sick_person[51] = {0};
    for(int j = 0; j < D; j++){
        if(m[j] == result){
            sick_person[p[j]]++;
        }
    }  

    //cout << result << " ";  


    int pill = 0; 
    for(int i = 0; i < 51 ; i++){
        if(sick_person[i] != 0) pill++;
    }

    cout << pill;
    return 0;
}