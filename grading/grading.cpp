#include <iostream>
#include <cstdio>

using namespace std;

struct Point
{
	int x;
	int y;	
} a, b, c, p;

bool isInside()
{
	// From http://stackoverflow.com/questions/13300904/determine-whether-point-lies-inside-triangle
	// http://mathworld.wolfram.com/TriangleInterior.html

	double den = ((b.y - c.y)*(a.x - c.x) + (c.x - b.x)*(a.y - c.y));
	// Unknown
	if (den == 0)
		return false;

	double alpha = ((b.y - c.y)*(p.x - c.x) + (c.x - b.x)*(p.y - c.y)) /
	        den;
	double beta = ((c.y - a.y)*(p.x - c.x) + (a.x - c.x)*(p.y - c.y)) /
	       den;
	double gamma = 1.0f - alpha - beta;

	// Point is on one of the triangle's sides
	if ((alpha == 0) || (beta == 0) || (gamma == 0))
	{
		return true;
	}

	if ((alpha > 0) && (beta > 0) && (gamma > 0))
		return true;
	else
		return false;
}

int main()
{
	int T; // Number of test cases
	
	int N; // Number of students;
	unsigned long int id;

	// Number of Test cases
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
		cin >> N;
		for (int j = 0; j < N; ++j)
		{
			cin >> id >> p.x >> p.y;
			if (isInside())
				cout << id << " fail\n";
			else
				cout << id << " pass\n";
		}
	}
	return 0;
}