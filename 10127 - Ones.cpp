// ----------
// UVa 10127 - Ones
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1068
// https://www.udebug.com/UVa/10127
// ----------

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int num;

	while(scanf("%d", &num) != EOF)
	{
		int tmp=1, ans=1;

		while(tmp%num != 0)
		{
			tmp = tmp % num;
			tmp = tmp * 10 + 1;
			ans++;
		}

		printf("%d\n", ans);
	}

	return 0;
}
