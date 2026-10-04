#include <iostream>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int minimum = 200000000;
    for(int i = 0; i < n-1; i++){
        for(int j =i+1; j<n; j++){
            if(minimum >= (abs(x[i]-x[j])*abs(x[i]-x[j])) + (abs(y[i]-y[j])*abs(y[i]-y[j])))
                minimum = (abs(x[i]-x[j])*abs(x[i]-x[j])) + (abs(y[i]-y[j])*abs(y[i]-y[j]));
        }
    }
    cout << minimum;
    return 0;
}