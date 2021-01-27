#include <bits/stdc++.h>
#define x first
#define y second
#define pb push_back
#define all(v) v.begin(),v.end()
#pragma gcc optimize("O3")
#pragma gcc optimize("Ofast") 
#pragma gcc optimize("unroll-loops")
using namespace std;
const int INF = 1e9;
const int TMX = 1 << 18;
const long long llINF = 2e18;
const long long mod = 1e9+7;
const long long hashmod = 100003;
const int MAXN = 100000;
const int MAXM = 1000000;
typedef long long ll;
typedef long double ld;
typedef pair <int,int> pi;
typedef pair <ll,ll> pl;
typedef vector <int> vec;
typedef vector <pi> vecpi;
typedef long long ll;
ll ans,cnt[62];
ll a[500005];
int n;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin >> T;
	while(T--) {
		for(int i = 0;i < 60;i++) cnt[i] = 0;
		cin >> n;
		for(int i = 1;i <= n;i++) {
			cin >> a[i];
			ll x = a[i];
			for(int j = 0;j < 60;j++) {
				if((1LL << j)&a[i]) cnt[j]++;
			}
		}
		ans = 0;
		for(int i = 1;i <= n;i++) {
			ll And = 0,Or = 0;
			for(int j = 0;j < 60;j++) {
				if((1LL << j)&a[i]) {
					Or = (Or+(1LL << j)%mod*n%mod)%mod;
					And = (And+(1LL << j)%mod*cnt[j]%mod)%mod;
				}
				else Or = (Or+(1LL << j)%mod*cnt[j]%mod)%mod;
			}
			ans = (ans+And*Or%mod)%mod;
		}
		cout << ans << '\n';
	}
}