#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define each(a, x) for (auto& a : x)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fi first


void solve() {
 ll x;
 cin>>x;
 cout<<2*(64-__builtin_clzll(x))+1<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    // cin >> tc;
    for (int t=1; t<=tc; t++) {
        // cout << "Case #" << t << '\n';
        
    solve();
    }
 return 0;
}