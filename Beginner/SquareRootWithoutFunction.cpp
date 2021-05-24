#include <iostream>

using namespace std;

int main()
{
    double number;
    double i=0.0001,sqrt=0;
    cin>>number;
    while(i*i<=number)
    {
        i+=0.0001;
    }
    sqrt=i;
    cout<<sqrt;
    return 0;
}

// Returns floor of square root of x
/*double floorSqrt(double x)
{
	// Base cases
	if (x == 0.0 || x == 1.0)
	return x;

	// Do Binary Search for floor(sqrt(x))
	double start = 0.0001, end = x, ans;
	while (start <= end)
	{
		double mid = (start + end) / 2;

		// If x is a perfect square
		if (mid*mid == x)
			return mid;

		// Since we need floor, we update answer when mid*mid is
		// smaller than x, and move closer to sqrt(x)
		if (mid*mid < x)
		{
			start = mid + 0.0001;
			ans = mid;
		}
		else // If mid*mid is greater than x
			end = mid-0.0001;
	}
	return ans;
}

// Driver program
int main()
{
	double x;
	cin>>x;
	cout << floorSqrt(x) << endl;
	return 0;
}*/
