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
	ll ans = LLONG_MAX, have = 0, steps = 0, earn, need, nx;
	for ( ll i = 0 ; i < n ; ++i ) {
		earn = a[i];
		need = m-have;
		nx = need/earn + (need%earn==0?0:1);
		chmin(ans,nx+steps);
		if ( i < n-1 ) {
			need = b[i] - have;
			nx = need / earn;
			if ( nx*earn == need ) {
				steps += nx + 1;
				have = 0;
			} else {
				steps += nx + 2;
				have = ((nx+1)*earn)-b[i];
			}
		}
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

