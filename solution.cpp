#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long double ld;
typedef long long int ll;
typedef unsigned long long ull;

template<typename T> void chmax ( T& a, T b ) { if ( a < b ) a = b; }
template<typename T> void chmin ( T& a, T b ) { if ( a > b ) a = b; }

void prepare_lookup_table ()
{
}

void do_task ()
{
	ll n, m; cin >> n >> m;
	vector<ll> a(n),b(n-1);
	for ( auto& i : a ) cin >> i;
	for ( auto& i : b ) cin >> i;
	b.emplace_back(0);
	ll ans = LLONG_MAX, have = 0, steps = 0, need, nx;
	for ( ll i = 0 ; i < n ; ++i ) {
		need = m-have;
		nx = need/a[i] + (need%a[i]==0?0:1);
		chmin(ans,nx+steps);

		need = b[i] - have;
		nx = need / a[i];
		if ( b[i] <= have ) {
			have -= b[i];
			steps += 1;
		} else if ( need <= a[i] ) {
			steps += 2;
			have = a[i] - need;
		} else if ( nx*a[i] == need ) {
			steps += nx + 1;
			have = 0;
		} else {
			steps += nx + 2;
			have = ((nx+1)*a[i])-need;
		}

		//cout << have << " ";
	}
	cout << ans << endl;
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prepare_lookup_table();

	int t = 1;
	cin >> t;
	for ( int i = 1 ; i <= t ; ++i ) {
		//cout << "Case " << i << ": " ;
		do_task();
	}


	return 0;
}
// resize-pane -L 30 

