#include<bits/stdc++.h>
using namespace   std;
#define ff        first
#define ss        second
#define ll        int
#define inf       ((ll)1e18)
#define double    long double
#define ull       unsigned long long
#define mod       1000000007
#define vi        vector<ll>
#define ppi       pair<ll,pair<ll,ll>>
#define pb        push_back
#define mp        make_pair
#define str       string
#define pi        2*acos(0.0)
#define pr(a,x,n) for(int i=x;i<n;i++){cout<<a[i]<<" ";}
#define p(a)      cout<<a;
#define sp(x,y)   fixed<<setprecision(y)<<x
#define w(x)      ll x; cin>>x; while(x--)
#define all(v)    v.begin(), v.end()
#define test      cout<<"THIS_AND_THIS"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
}
bool check(int arr[],int n,int m){
	for(int i=0;i<n;i++){
		if(arr[i]%m!=0){return false;}
	}
	return true;
}
void solve(){
	ll n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vi ans;
	ans.pb(arr[0]);
	for(int i=1;i<n-1;i++){
		if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){ans.pb(arr[i]);}
		else if(arr[i]<arr[i-1] and arr[i]<arr[i+1]){ans.pb(arr[i]);}
	}
	ans.pb(arr[n-1]);
	cout<<ans.size()<<endl;
	for(auto i:ans){cout<<i<<" ";}
	cout<<endl;
}
int32_t main(){
	kehsihba();
	ll t=1;
	cin>>t;
	while(t--){
		solve();
	}
}



