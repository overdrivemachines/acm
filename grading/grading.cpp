#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;	
} a, b, c, p;

struct Line
{
	Point p1;
	Point p2;	
} ab, bc, ca, ap, bp, cp;

bool isInside()
{

	// Does AP intersect BC?
	
	// Does BP intersect AC?
	// Does CP intersect PB?
	
	return true;
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