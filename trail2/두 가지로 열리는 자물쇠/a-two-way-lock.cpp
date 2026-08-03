#include <iostream>
#include <set>
#include <tuple>

using namespace std;

set<tuple<int,int,int>> s1, s2;

int main() {
    int N;
    int total;
    int a1, b1, c1;
    int a2, b2, c2;
    int duplicate = 0;

    cin >> N;

    cin >> a1 >> b1 >>c1;
    cin >> a2 >> b2 >>c2;

    if(N < 5){
        total = N*N*N + N*N*N;

    }else{
        total = 5*5*5 + 5*5*5;
    }


        for (int da = -2; da <= 2; da++) {
            for (int db = -2; db <= 2; db++) {
                for (int dc = -2; dc <= 2; dc++) {
                    s1.insert({
                        (a1+da - 1 + N) % N + 1,
                        (b1+db - 1 + N) % N + 1,
                        (c1+dc - 1 + N) % N + 1
                    });
                }
            }
        }

        for (int da = -2; da <= 2; da++) {
            for (int db = -2; db <= 2; db++) {
                for (int dc = -2; dc <= 2; dc++) {
                    s2.insert({
                        (a2+da - 1 + N) % N + 1,
                        (b2+db - 1 + N) % N + 1,
                        (c2+dc - 1 + N) % N + 1
                    });
                }
            }
        }

    int overlap = 0;
    for (auto &x : s1) {
        if (s2.count(x))
            overlap++;
    }

    cout << total - overlap;
    return 0;
}