#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<str>;
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
    int n, k;
    cin >> n >> k;
    str s;
    cin >> s;

    sort(all(s));

    for (int i = 0; i < k; i++) {
        int cnt = 0;
        int ch = 'a';

        for (int j = 0; j < sz(s); j++) {
            if (s[j] == ch) {
                s.erase(s.begin() + j);
                ch++;
                cnt++;
                j--;

                if (cnt == n / k) break;
            }
        }
        cout << (char) ch;
    }
    cout << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) solve();

    return 0;
}