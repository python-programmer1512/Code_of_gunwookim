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
const long long llINF = 1e16;
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
int n,x;
int a[25][25];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n >> x;
	a[1][1] = x, a[2][2] = (1 << (n-2));
	a[2][1] = x-a[2][2];
	for(int i = 3;i <= n;i++) {
		for(int j = 2;j < i;j++) {
			a[i][j] = a[i-1][j]/2;
		}
		a[i][i] = a[i-1][i-1]/2;
		a[i][1] = a[i-1][1]-a[i][2];
	}
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= i;j++) {
			if(a[i][j] < 1) {
				cout << "impossible";
				return 0;
			}
		}
	}
	for(int i = 1;i <= n;i++) {
		for(int j = 1;j <= i;j++) cout << a[i][j] << ' ';
		cout << '\n';
	}
}
