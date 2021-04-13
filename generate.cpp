#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

template<typename T> void chmax ( T& a, T b ) { if ( a < b ) a = b; }
template<typename T> void chmin ( T& a, T b ) { if ( a > b ) a = b; }

void prepare_lookup_table ()
{
}

void do_task ()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(-100, 100);
	uniform_int_distribution<int> gn(2, 25);
	uniform_int_distribution<int> mm(1,1000);
	ll t; t = gn(mt); cout << t << endl;
	while ( t-- ) {
		ll n, m; n = gn(mt); m = mm(mt); cout << n << " " <<m << endl;
		vector<ll> v1(n), v2(n-1);
		for ( auto& i : v1 ) i = gn(mt);
		for ( auto& i : v2 ) i = gn(mt);
		sort ( v1.begin(), v1.end() );
		for ( auto& i : v1 ) cout << i << " ";
		cout << endl;
		for ( auto& i : v2 ) cout << i << " ";
		cout << endl;
	}
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prepare_lookup_table();

	ll t = 1;
//	cin >> t;
	while ( t-- ) {
		do_task();
	}


	return 0;
}
