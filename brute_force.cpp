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
 
struct stk {
	char c[101] = { };
	int ind = -1;
	bool empty () { return ind < 0; }
	void push ( char ch ) { c[++ind] = ch; }
	void pop () { --ind; }
	char top () { return c[ind]; }
};
 
void do_task ()
{
	string s; cin >> s;
	stk a,b,c,d,e,f;
	bool ba=true, bb=true, bc=true, bd=true, be=true, bf=true;
	for ( char i : s ) {
		if ( ba ) {
			if ( i == 'B' )
				a.push(i);
			else if ( !a.empty() && a.top() == 'B' )
				a.pop();
			else
				ba = false;
		}
		if ( bb ) {
			if ( i == 'B' || i == 'C' )
				b.push(i);
			else if ( !b.empty() && (b.top() == 'B' || b.top() == 'C') )
				b.pop();
			else
				bb = false;
		}
		if ( bc ) {
			if ( i == 'A' )
				c.push(i);
			else if ( !c.empty() && c.top() == 'A' )
				c.pop();
			else
				bc = false;
		}
		if ( bd ) {
			if ( i == 'A' || i == 'C' )
				d.push(i);
			else if ( !d.empty() && (d.top() == 'A' || d.top() == 'C') )
				d.pop();
			else
				bd = false;
		}
		if ( be ) {
			if ( i == 'A' || i == 'B' )
				e.push(i);
			else if ( !e.empty() && (e.top() == 'A' || e.top() == 'B') )
				e.pop();
			else
				be = false;
		}
		if ( bf ) {
			if ( i == 'C' )
				f.push(i);
			else if ( !f.empty() && f.top() == 'C' )
				f.pop();
			else
				bf = false;
		}
	}
	if ( ba && !a.empty() ) ba = false;
	if ( bb && !b.empty() ) bb = false;
	if ( bc && !c.empty() ) bc = false;
	if ( bd && !d.empty() ) bd = false;
	if ( be && !e.empty() ) be = false;
	if ( bf && !f.empty() ) bf = false;
	if ( ba || bb || bc || bd || be || bf ) cout << "Yes\n";
	else cout << "No\n";
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
