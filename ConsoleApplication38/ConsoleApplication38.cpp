
#include <iostream>
#include<cmath>

int main()
{
	double a = 0;
	double b( 3 );

	
	double xbeg(0);
	double xend(0);
	double epsilon(0.001);

	int counter(0);

	std::cout << " Enter a\n";
	std::cin >> a;

	std::cout << " Enter b\n";
	std::cin >> b;
	do {
		
		if (counter == 0)
		{
			xbeg = a;
		}
		else
		{
			xbeg = xend;
		}


		counter++;
		xend = pow((3 * pow(xbeg,2) - 6 * xbeg + 5), (1.0 / 3.0));
		
		
	} while (abs(xend - xbeg) > epsilon);
	std::cout << " Final result  " << xend << "  Xend is root of our equation";
}

