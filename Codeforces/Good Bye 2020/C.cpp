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
int n;
char a[100005];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin >> T;
	while(T--) {
		cin >> a+1; n = strlen(a+1);
		int ans = 0;
		for(int i = 1;i <= n;i++) {
			if(i < n&&a[i] != '!'&&a[i] == a[i+1]) ans++, a[i+1] = '!';
			if(i < n-1&&a[i] != '!'&&a[i] == a[i+2]) ans++, a[i+2] = '!';
		}
		cout << ans << '\n';
	}
}