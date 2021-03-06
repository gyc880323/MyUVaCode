// ----------
// UVa 476 - Points in Figures: Rectangles
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=417
// https://www.udebug.com/UVa/476
// ----------

#include <cstdio>

using namespace std;

class Rectangle
{
public:
	Rectangle()
	{
		p1[0] = 0; p1[1] = 0;
		p2[0] = 0; p2[1] = 0;
	}
	Rectangle(float a, float b, float c, float d)
	{
		p1[0] = a; p1[1] = b;
		p2[0] = c; p2[1] = d;
	}

	float getp1(short i)
	{
		return p1[i];
	}
	float getp2(short i)
	{
		return p2[i];
	}

private:
	float p1[2], p2[2];
};

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	char key='r';
	Rectangle r[10];
	short rct=0, pct=1;
	float pt[2];

	while((key=getchar()) != '*')
	{
		float a, b, c, d;

		scanf("%f %f %f %f ", &a, &b, &c, &d);

		r[rct] = Rectangle(a, b, c, d);

		rct++;
	}

	while(scanf("%f %f\n", &pt[0], &pt[1]))
	{
		if(pt[0] == 9999.9f && pt[1] == 9999.9f)
			break;

		bool check[rct]={false}, io=true;

		for(short i=0; i<rct; i++)
		{
			if(pt[0]>r[i].getp1(0) && pt[0]<r[i].getp2(0) && pt[1]<r[i].getp1(1) && pt[1]>r[i].getp2(1))
				check[i] = true;
		}

		for(short i=0; i<rct; i++)
		{
			if(check[i] == true)
			{
				printf("Point %hi is contained in figure %hi\n", pct, i+1);
				io = false;
			}
		}

		if(io == true)
			printf("Point %hi is not contained in any figure\n", pct);

		pct++;
	}

	return 0;
}
