#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define int     long long
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pr(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"LOL_ABHISHEK"<<endl;
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main() {
	kehsihba();
	ll n,m;cin>>n>>m;
	if(n==0 or m==0){cout<<0;}
	else if(n==1 or m==1){cout<<1;}
	else{cout<<min({n,m,(n+m)/3});}
}