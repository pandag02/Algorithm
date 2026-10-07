#include <iostream>

using namespace std;

int a, b;

int func(int start, int end){
    int result = 0;
    for(int i = start ; i <= end; i++){
        if(i % 3 == 0){ result++; continue;}
        int num = i;
        bool success = false;
        while(num > 0){
            if(num % 10 == 3){success = true; break;}
            if(num % 10 == 6){success = true; break;}
            if(num % 10 == 9){success = true; break;}
            num = num / 10;
        }
        if(success){result++; continue;}
    }
    return result;
}

int main() {
    cin >> a >> b;

   cout << func(a, b);

    return 0;
}