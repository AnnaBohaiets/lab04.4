#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;
	double PI = 3.1415;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "           title           " << endl;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < -7 - R || (-7 + R <= x && x < -4))
			y = R;
		else
			if (-7 - R <= x && x < -7 + R)
				y = -sqrt(R * R - (x + 7) * (x + 7)) + R;
			else
				if (-4 <= x && x < 0)
					y = -(x + 4) / 4 + R;
				else
					if (0 <= x && x < PI)
						y = sin(x);
					else
						y = x - PI;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
