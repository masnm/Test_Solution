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

void no () { cout << "No\n"; }

void do_task ()
{
	string s; cin >> s;
	if ( s[0] == s.back() ) return no();
	int len = s.length(), count = 0;
	for ( int i = 0 ; i < len ; ++i ) if (s[0]==s[i]) ++count;
	if ( count > len/2 ) return no();
	bool b = false;
	if ( count == len/2 ) b=true;
	int stk = 0;
	for ( char i : s ) {
		if ( i == s[0] ) ++stk;
		else if ( i == s[len-1] ) --stk;
		else if ( b ) --stk;
		else ++stk;
		if ( stk < 0 ) return no();
	}
	if ( stk ) return no();
	else cout << "Yes\n";
}

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	prepare_lookup_table();

	ll t = 1;
	cin >> t;
	while ( t-- ) {
		do_task();
	}


	return 0;
}

