#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int max ( int a, int b ) { return (a>b ? a : b); }

int main ()
{
//	freopen("slalom.in", "r", stdin);
//	freopen("slalom.out", "w", stdout);
	int n; scanf( "%d", &n );
	int a[100][100] = { }, b[100][100] = { };
	for ( int i = 0 ; i < n ; ++i ) {
		for ( int j = 0 ; j < i+1 ; ++j ) {
			scanf( "%d", &a[i][j] );
			b[i][j] = INT_MIN;
		}
	}
	b[0][0] = a[0][0];
	for ( int r = 1 ; r < n ; ++r ) {
		for ( int c = 0 ; c <= r ; ++c ) {
			if ( c < r ) {
				b[r][c] = max ( b[r][c], ( b[r-1][c] + a[r][c] ) );
			}
			if ( c ) {
				b[r][c] = max ( b[r][c], ( b[r-1][c-1] + a[r][c] ) );
			}
		}
	}
	int mon = n-1;
	int ans = b[mon][0];
	for ( int i = 1 ; i < n ; ++i ) {
		if ( ans < b[mon][i] ) ans = b[mon][i];
	}
	printf( "%d\n", ans );

	return 0;
}

