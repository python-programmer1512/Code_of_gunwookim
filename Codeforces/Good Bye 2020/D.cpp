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
int n,ind[100005];
ll a[100005];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin >> T;
	while(T--) {
		cin >> n;
		ll sum = 0;
		for(int i = 1;i <= n;i++) {
			cin >> a[i];
			ind[i] = 0;
			sum += a[i];
		}
		for(int i = 1;i < n;i++) {
			int x,y; cin >> x >> y;
			ind[x]++, ind[y]++;
		}
		vector <ll> v;
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= ind[i]-1;j++) v.pb(a[i]);
		}
		sort(all(v));
		reverse(all(v));
		cout << sum << ' ';
		for(ll i : v) {
			sum += i;
			cout << sum << ' ';
		}
		cout << '\n';
	}
}