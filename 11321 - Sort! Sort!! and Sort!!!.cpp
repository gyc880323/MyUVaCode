// ----------
// UVa 11321 - Sort! Sort!! and Sort!!!
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2296
// https://www.udebug.com/UVa/11321
// ----------

#include <cstdio>
#include <cstdlib>

using namespace std;

int N, M;

int cmp(const void* a, const void* b)
{
	int c, d;

	c = *(int*)a;
	d = *(int*)b;

	if(c%M == d%M)
	{
		if(c%2!=0 && d%2!=0)
			return c>d ? -1:1;
		else if(c%2==0 && d%2==0)
			return c>d ? 1:-1;
		else if(c%2!=0 && d%2==0)
			return -1;
		else
			return 1;
	}
	else
		return c%M>d%M ? 1:-1;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	while(scanf("%d %d", &N, &M) && N!=0 && M!=0)
	{
		long int input[N];

		for(int i=0; i<N; i++)
			scanf("%ld", &input[i]);

		qsort(input, N, sizeof(long int), cmp);

		printf("%d %d\n", N, M);
		for(int i=0; i<N; i++)
			printf("%ld\n", input[i]);

	}
	printf("0 0\n");

	return 0;
}
