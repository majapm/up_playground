#include<iostream>
#include<cmath>
using namespace std;

bool isXIn(double x)
{
	if (x <= -6 &&  x >= -12)
		if(!(x<-8 && x>-10))
		return true;
	else
		return false; 
}

bool isYIn(double y) {

	if (y <= 3 && y >= 0)
		return true;
	else
		return false;


}

bool check(double xp, double xc, double yp, double yc) {

	if ((sqrt((xp - xc) * (xp - xc) + (yp - yc) * (yp - yc))) < 3)
		return true;
	else
		return false;

}
int main()
{
	double points[5][2];

	bool isIn = true;
	
	int i = 0, j = 0;

	for (i = 0; i < 1; ++i)
	{
		for (j = 0; j < 2; ++j)
		{
			//cout << " = ";
			cin >> points[i][j];
		}
	}
	for (i = 0; i < 1; ++i)
	{
		for (j = 0; j < 2 && isIn; ++j)
		{
			if (points[i][j] >= 2 && points[i][j] <= 4)
			{
				isIn = true;
			}
			else
			{
				isIn = false;
			}
		}
		if (isIn && 6.0 - points[i][j - 2] >= points[i][j - 1])
		{
			cout << "The point with coordinates x = " << points[i][j - 2] << " and y = " << points[i][j - 1] << " is in the red area" << endl;
		}
		else
		{
			isIn = false;
			cout << "The point with coordinates x = " << points[i][0] << " and y = " << points[i][1] << " is NOT in the red area" << endl;
		}
	}
	return 0;
}
