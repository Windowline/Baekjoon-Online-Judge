#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<sstream>
#include<math.h>
#define ULL unsigned long long
using namespace std;
int K;
string Ex;
bool V[10];
string min_s, max_s;
ULL min_n = 9876543210+10;
ULL max_n = 0;
string curN;

ULL toNum(string s)
{
	ULL ret = 0;
	int len = s.length();
	for (int i = len-1; i >= 0; i--)
	{
		ret = ret + (s[i] - '0')*pow(10, len-1-i);
	}
	return ret;
}

void btk(int idx, int pre)
{
	if (idx == K+1)
	{

		string tmp_s = curN;
		ULL tmp_n = toNum(curN.c_str());
		//cout <<"s " << curN << endl;
		//cout <<"n " << tmp_n << endl;

		if (min_n > tmp_n)
		{
			min_n = tmp_n;
			min_s = tmp_s;
		}
		if (max_n < tmp_n)
		{
		//	cout << " max" << endl;
			max_n = tmp_n;
			max_s = tmp_s;
		}
		return;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (V[i]) continue;
		
		if (Ex[idx - 1] == '<' && pre < i)
		{
			V[i] = true;
			curN += (to_string(i));
			btk(idx + 1, i);
			V[i] = false;
			curN.pop_back();
		}
		else if (Ex[idx - 1] == '>' && pre > i)
		{
			V[i] = true;
			curN += (to_string(i));
			btk(idx + 1, i);
			V[i] = false;
			curN.pop_back();
		}
	}
}



int main()
{
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		char tmp;
		scanf(" %c", &tmp);
		Ex.push_back(tmp);
	}
	for (int n = 0; n <= 9; n++)
	{
		V[n] = true;
		curN += to_string(n);
		btk(1, n);
		curN.pop_back();
		V[n] = false;
	}
	cout << max_s << endl;
	cout << min_s << endl;

	return 0;
}
