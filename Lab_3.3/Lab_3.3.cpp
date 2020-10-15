// Lab_3.3.cpp
// Дорожовець Володимир
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.6
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double y;
	double x;
	double R;

	cout << "R = "; cin >> R;
	cout << endl;
	cout << "x = "; cin >> x;
	cout << endl;

	if (x <= -5)
	{
		y = -3;
		cout << "y1 = " << y << endl;
	}
	else
		if (-5 < x && x <= -R)
		{
			y = (3 * (R + x)) / (-R + 5);
			cout << "y2 = " << y << endl;
		}
		else
			if (-R < x && x <= R)
			{
				y = sqrt(R * R - x * x);
				cout << "y3 = " << y << endl;
			}
				else
					if (R < x && x <= 8)
					{
						y = (R * x - R * R) / (8 - R);
						cout << "y4 = " << y << endl;
					}
					else
							y = R;
							cout << "y5 = " << y << endl;
						
							cin.get();
							return 0;
}
