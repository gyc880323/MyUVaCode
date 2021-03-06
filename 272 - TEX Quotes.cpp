// ----------
// UVa 272 - TEX Quotes
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
// https://www.udebug.com/UVa/272
// ----------

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	char input[1000];
	bool io=false;

	while(gets(input) != NULL)
	{
		for(int i=0; i<strlen(input); i++)
		{
			if(input[i] == '\"')
			{
				if(io == true)
				{
					printf("\'\'");
					io = false;
				}
				else
				{
					printf("``");
					io = true;
				}
			}
			else
				printf("%c", input[i]);
		}

		printf("\n");
	}

	return 0;
}
