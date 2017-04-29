#include <stdio.h>
#include <algorithm>
int a[100000 + 1];
int minTree[300000 + 1];
int from[100000 + 1];
int to[100000 + 1];
using namespace std;

void init(int node, int start, int end)
{
	if (start == end) {
		minTree[node] = a[start];
		return;
	}
	else {
		init(node * 2, start, (start + end)/2);
		init(node * 2 + 1,(start + end) / 2 + 1, end);
		minTree[node] = min(minTree[node * 2], minTree[node * 2 + 1]);
	}
}

int query(int node, int start, int end, int query_from, int query_to)
{
	if (query_from > end || query_to < start) { //해당 노드가 담당하는 범위를 완전히 벗어남
		return -1;
	}
	else if (query_from <= start && end <= query_to) { // 해당 노드가 담당하는 범위보다 큼 --> 조각 리턴
		return minTree[node];
	}
	int minL = query(node * 2, start, (start + end) / 2, query_from, query_to);
	int minR = query(node * 2 + 1, (start + end) / 2 + 1, end, query_from, query_to);
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


int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i =0; i <N; i++) {
		scanf("%d", a + i);
	}
	init(1, 0, N - 1);
	for (int i = 0; i <M; i++) {
		scanf("%d %d", &from[i], &to[i]);
		printf("%d\n", query(1, 0, N - 1, from[i] - 1, to[i] - 1));
	}
	return 0;
}
