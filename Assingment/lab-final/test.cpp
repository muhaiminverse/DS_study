//Q 10
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    set<int> s1, s2, res;

    // read input
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    // compute union of the two sets
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.end()));

    // print result
    for (auto x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
