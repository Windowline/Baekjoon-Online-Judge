#include <iostream>
#include <cstring>
#define MOD 1000000007
long long d[51][51][51][51];
long long totalCnt(int i, int a, int b, int c) 
{
	if (i == 0) {
		if (a == 0 && b == 0 && c == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (a < 0 || b < 0 || c < 0) {
		return 0;
	}
	if (d[i][a][b][c] != -1) {
		return d[i][a][b][c];
	}
	long long ans = 0;
	for (int x = 0; x <= 1; x++) {
		for (int y = 0; y <= 1; y++) {
			for (int z = 0; z <= 1; z++) {
				if (x + y + z > 0) {
					ans = (ans + totalCnt(i - 1, a - x, b - y, c - z)) % MOD;
				}
			}
		}
	}
	return d[i][a][b][c] = ans;
}

int main()
{
	int s, a, b, c;
	std::cin >> s >> a >> b >> c;
	memset(d, -1, sizeof(d));
	std::cout << totalCnt(s, a, b, c);
	
	return 0;
}
