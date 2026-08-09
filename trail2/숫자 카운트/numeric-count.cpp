#include <iostream>
#include <string>
using namespace std;

struct Question {
    string num;
    int strike;
    int ball;
};

int main() {
    int N;
    cin >> N;

    Question q[100];

    for (int i = 0; i < N; i++) {
        cin >> q[i].num >> q[i].strike >> q[i].ball;
    }

    int answer = 0;

    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            for (int c = 1; c <= 9; c++) {
                if (a == b || a == c || b == c)
                    continue;

                string candidate = "";
                candidate += char(a + '0');
                candidate += char(b + '0');
                candidate += char(c + '0');

                bool possible = true;

                for (int i = 0; i < N; i++) {

                    int strike = 0;
                    int common = 0;

                    for (int j = 0; j < 3; j++) {
                        if (candidate[j] == q[i].num[j]) {
                            strike++;
                        }
                    }

                    for (int j = 0; j < 3; j++) {
                        for (int k = 0; k < 3; k++) {
                            if (candidate[j] == q[i].num[k]) {
                                common++;
                            }
                        }
                    }

                    int ball = common - strike;

                    if (strike != q[i].strike ||
                        ball != q[i].ball) {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    answer++;
                }
            }
        }
    }

    cout << answer;

    return 0;
}