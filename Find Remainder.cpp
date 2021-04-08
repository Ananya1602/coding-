#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
	
		scanf("%d %d \n", &a, &b);

		// Compute the ans.
		// Complete the below line.
		int ans = a%b;
		printf(" \n  %d\n", ans);
	}

	return 0;
}
