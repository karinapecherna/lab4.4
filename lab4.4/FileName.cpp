#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = x + R;
		else
			if (x > -1 - R && x <= -1)
				y = sqrt(R * R - (x + 1) * (x + 1));
			else
				if (x > -1 && x <= 1)
					y = R ;
				else
					if (x > 1 && x <= 2)
						y = -R * (x - 1);
			
						else
							y = -R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << setw(10) << x << setw(15) << y << endl;
}

