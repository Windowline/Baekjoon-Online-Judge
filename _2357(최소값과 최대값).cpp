#include <stdio.h>
#include <algorithm>
int a[100000 + 1];
int minTree[300000 + 1];
int maxTree[300000 + 1];
int from[100000 + 1];
int to[100000 + 1];
using namespace std;

void initMin(int node, int start, int end)
{
	if (start == end) {
		minTree[node] = a[start];
		return;
	}
	else {
		initMin(node * 2, start, (start + end)/2);
		initMin(node * 2 + 1,(start + end) / 2 + 1, end);
		minTree[node] = min(minTree[node * 2], minTree[node * 2 + 1]);
	}
}

void initMax(int node, int start, int end)
{
	if (start == end) {
		maxTree[node] = a[start];
		return;
	}
	else {
		initMax(node * 2, start, (start + end) / 2);
		initMax(node * 2 + 1, (start + end) / 2 + 1, end);
		maxTree[node] = max(maxTree[node * 2], maxTree[node * 2 + 1]);
	}
}

int minQuery(int node, int start, int end, int query_from, int query_to)
{
	if (query_from > end || query_to < start) { //out node range
		return -1;
	}
	else if (query_from <= start && end <= query_to) { // in node range
		return minTree[node];
	}
	int minL = minQuery(node * 2, start, (start + end) / 2, query_from, query_to);
	int minR = minQuery(node * 2 + 1, (start + end) / 2 + 1, end, query_from, query_to);
	if (minL == -1) {
			return minR;
	}
	else if (minR == -1) {
		return minL;
	}
	else {
		return min(minL, minR);
	}
}

int maxQuery(int node, int start, int end, int query_from, int query_to)
{
	if (query_from > end || query_to < start) { //out node range
		return -1;
	}
	else if (query_from <= start && end <= query_to) { // in node range
		return maxTree[node];
	}
	int maxL = maxQuery(node * 2, start, (start + end) / 2, query_from, query_to);
	int maxR = maxQuery(node * 2 + 1, (start + end) / 2 + 1, end, query_from, query_to);
	if (maxL == -1) {
		return maxR;
	}
	else if (maxR == -1) {
		return maxL;
	}
	else {
		return max(maxL, maxR);
	}
}


int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i =0; i <N; i++) {
		scanf("%d", a + i);
	}
	initMin(1, 0, N - 1);
	initMax(1, 0, N - 1);
	for (int i = 0; i <M; i++) {
		scanf("%d %d", &from[i], &to[i]);
		printf("%d %d\n", minQuery(1, 0, N - 1, from[i] - 1, to[i] - 1), maxQuery(1, 0, N-1, from[i]-1, to[i]-1));
	}
	return 0;
}
