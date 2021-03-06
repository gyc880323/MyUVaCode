// ----------
// UVa 100 - The 3n + 1 problem
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
// https://www.udebug.com/UVa/100
// ----------

#include <cstdio>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	unsigned int a, b;

	while(scanf("%u %u", &a, &b) != EOF)
	{
		bool io=false;

		if(a > b)
		{
			unsigned int tmp;

			tmp = a;
			a = b;
			b = tmp;

			io = true;
		}

		int out=0;

		for(unsigned int i=a; i<=b; i++)
		{
			unsigned int tmp=i;
			int count=1;

			while(tmp != 1)
			{
				if(tmp%2 == 1)
				{
					tmp = 3 * tmp + 1;
					count++;
				}
				else
				{
					tmp = tmp / 2;
					count++;
				}
			}

			if(out < count)
				out = count;
		}

		if(io == true)
			printf("%u %u %d\n", b, a, out);
		else
			printf("%u %u %d\n", a, b, out);
	}

	return 0;
}
