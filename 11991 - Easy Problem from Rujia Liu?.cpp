// ----------
// UVa 11991 - Easy Problem from Rujia Liu?
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3142
// https://www.udebug.com/UVa/11991
// ----------

#include <iostream>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int n, m, k, v;
	map<int, vector<int> > ori;

	while(scanf("%d", &n) != EOF)
	{
		scanf("%d", &m);

		ori.clear();

		for(int i=0; i<n; i++)
		{
			scanf("%d", &v);

			ori[v].push_back(i+1);
		}

		for(int i=0; i<m; i++)
		{
			scanf("%d %d", &k, &v);

			if(ori[v].size() < k)
				printf("0\n");
			else
				printf("%d\n", ori[v][k-1]);
		}
	}

	return 0;
}
