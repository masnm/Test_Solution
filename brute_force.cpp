    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main() {
    	int t;
    	scanf("%d", &t);
    	while(t--) {
    		int a, n;
    		scanf("%d%d", &n, &a);
    		int l = 0, r = n, mid, res = -1;
    		while(l <= r) {
    			mid = (l + r) / 2;
    			if((ll)n*a - (ll)mid*(mid+1)/2 >= n-mid) {
    				res = mid;
    				l = mid + 1;
    			} else r = mid - 1;
    		}
    		printf("%d\n", res);
    	}
    	return 0;
    }