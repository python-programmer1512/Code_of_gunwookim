#include <bits/stdc++.h>
#define x first
#define y second
#define pb push_back
#define all(v) v.begin(),v.end()
#pragma gcc optimize("O3")
#pragma gcc optimize("Ofast") 
#pragma gcc optimize("unroll-loops")
using namespace std;
const long long INF = 1e9;
const int TMX = 1 << 18;
const long long llINF = 1e18;
const long long mod = 1e9+7;
const long long hashmod = 100003;
typedef long long ll;
typedef long double ld;
typedef pair <int,int> pi;
typedef pair <ll,ll> pl;
typedef vector <int> vec;
typedef vector <pi> vecpi;
typedef long long ll;
int n;
ll s,a[1000005],mx[1000005],d[1000005];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> s;
	d[0] = mx[0] = -1;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
		mx[i] = max(mx[i-1],a[i]-i);
	}
	int pv = 0;
	for(int i = 1;i <= n;i++) {
		while(pv < i&&mx[i] > d[pv]) pv++;
		d[i] = min((pv ? mx[i]+i-pv-1+2*s : llINF),(pv < i ? d[pv]+i-pv-2+2*s : llINF));
	}
	cout << d[n]+n+1;
}
