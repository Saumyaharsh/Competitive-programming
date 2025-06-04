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

ll fibo(ll n){
   ll f1 = 1;
   ll f2 = 2;
   if(n==1)return f1;
   if(n==2)return f2;
   vector<ll>v(n,0);
  v[0] = f1;
  v[1]= f2;
   for (ll i = 2; i<n; i++){
        v[i]= v[i-1] + v[i-2];
       

   }
   return v[n-1];
   

}
void solve() {
ll n;
ll m;
cin>>n>>m;

string s;
s = "";
vector<ll>side(3,0);
side[0] = fibo(n);
side[1] = fibo(n);
side[2] = fibo(n+1);
for (ll i = 1; i<=m; i++){
vector<ll>box;
    for (ll i =0;i<3; i++){
        ll x;
        cin>>x;
        box.push_back(x);
    }
sort(box.begin(),box.end());
if(box[0] >= side[0] && box[2]>=side[2])
s += '1';
else s+='0';

}
cout<<s<<endl;



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