#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define int     long long
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define ppi     pair<ll,pair<ll,ll>>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pi      2*acos(0.0)
#define pr(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"LOL_ABHISHEK"<<endl;
void kehsihba(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
}
ll count(str a,str b){
	ll ans=0;
	ll n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){ans+=1;}
	}
	return ans;
}
int32_t main() {
	kehsihba();
	w(t){
		ll n,m;
		cin>>n>>m;
		str s[n],a;
		cin>>a;
		for(int i=0;i<(n-1);i++){
			cin>>s[i];
		}
		if(n==1){cout<<a<<endl;continue;}
		bool check=false;
		for(int i=0;i<m;i++){
			char lol=a[i];
			for(char j='a';j<='z';j++){
				a[i]=j;
				ll x=0;
				for(int k=0;k<n-1;k++){
					ll lol=count(a,s[k]);
					if(lol==1 or lol==0){x+=1;}
				}
				if(x==(n-1)){
					check=true;
					break;
				}
			}
			if(check){
				break;
			}
			else{
				a[i]=lol;
			}
		}
		if(check){
			cout<<a;e
		}
		else{
			cout<<-1;e
		}
	}
}
