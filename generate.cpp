#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define ll long long
#define ld long double

#define chmax(a,b) if ( a < b ) a = b
#define chmin(a,b) if ( a > b ) a = b

void prepare_lookup_table ()
{
}

void do_task ()
{
	int n = rand()%15; ++n;
	cout << n << endl;
	for ( int i = 0 ; i < n ; ++i ) {
		int cnt = ((rand()%5)+1)*2;
		while ( cnt-- ) {
			int r = rand()%3;
			char ch = 'A' + r;
			cout << ch;
		}
		cout << endl;
	}
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prepare_lookup_table();

	ll t = 1;
	while ( t-- ) {
		do_task();
	}


	return 0;
}
