#include <iostream>
#include<cmath>

int main()
{
	double a = 1;
	double b(5);


	double xbeg(0);
	double xend(0);
	double epsilon(0.001);

	int counter(0);

	

	/*std::cout << " Enter a\n";
	std::cin >> a;

	std::cout << " Enter b\n";
	std::cin >> b;*/
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
		xend = (log10(xbeg) + 7) / 2;
		

	} while (abs(xend - xbeg) > epsilon);
	std::cout << " Final result  " << xend << "  Xend is root of our equation";
}

