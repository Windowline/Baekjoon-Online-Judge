#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int tc, x1, y1, x2, y2, r1, r2;
	cin >> tc;
	while (tc-- > 0)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		double p = double(r1 + r2);
		double m = (double)abs(r1 - r2);

		int ans = -2;
		if (d==0)
		{
			if (r1 != r2)
				ans = 0;
			else
				ans = -1;
		}
		else // m < p
		{
			if (d < p && d > m)
				ans = 2;
			else if (d == m || d == p)
				ans = 1;
			else if (d > p || d < m )
				ans = 0;
		}

		
		cout << ans << endl;
	}
	return 0;
}
