#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, char> map;
    int N = 0, num;
    char alpa;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> num; cin >> alpa;
        map[num] = alpa;
    }
    int max = 0; 
    for (auto i = map.begin(); i != map.end(); ++i)
    {
        int Gnum = 0;
        int Hnum = 0;

        for (auto j = i; j != map.end(); ++j)
        {
            if (j->second == 'G')
                Gnum++;

            if (j->second == 'H')
                Hnum++;

            if (Gnum == Hnum || Gnum == 0 || Hnum == 0)
            {
                if (max < (j->first)-(i->first))
                    max = (j->first)-(i->first);
                
            }
        }
    }

    cout << max;


    return 0;
}