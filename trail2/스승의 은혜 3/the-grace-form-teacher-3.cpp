#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, B;
int P[1000], S[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    int answer = 0;

    for (int couponIdx = 0; couponIdx < N; couponIdx++) {
        vector<int> prices;

        for (int i = 0; i < N; i++) {
            int price = P[i] + S[i];

            if (i == couponIdx) {
                price = P[i] / 2 + S[i];
            }

            prices.push_back(price);
        }

        sort(prices.begin(), prices.end());

        int total = 0;
        int count = 0;

        for (int price : prices) {
            if (total + price > B) {
                break;
            }

            total += price;
            count++;
        }

        answer = max(answer, count);
    }

    cout << answer;
    return 0;
}