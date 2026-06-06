#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int k = str.length();
    
    int num = 0;
    for(int i = 0; i < k-1; i++){
        if(str[i] == '(' && str[i+1] == '('){
            for(int j = i+1; j< k-1; j++){
                if(str[j] == ')' && str[j+1] == ')'){
                    num++;
                }
            }
        }
    }

    cout << num;
    return 0;
}