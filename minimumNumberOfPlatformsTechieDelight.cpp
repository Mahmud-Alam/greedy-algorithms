

//This code is from Techie Delight website.
//This code is correct.
//For same arrival and departure value input, it gives Right answer______________________________


#include<bits/stdc++.h>
using namespace std;

typedef vector<double> Trains;

// Function to find minimum number of platforms needed in the
// station so to avoid any delay in arrival of any train.
int minPlatforms(Trains arrival, Trains departure)
{
	// maintains the count of trains
	int count = 0;

	// stores minimum platforms needed
	int platforms = 0;

	// take two indices for arrival and departure time
	int i = 0, j = 0;

	// run till train is scheduled to arrive
	while (i < arrival.size())
	{
		// if train is scheduled to arrive next
		if (arrival[i] < departure[j])
		{
			// increase the count of trains and update minimum
			// platforms if required
			platforms = max(platforms, ++count);

			// move the pointer to next arrival
			i++;
		}

		// if train is scheduled to depart next i.e.
		// (departure[j] < arrival[i]), decrease the count of trains
		// and move pointer j to next departure

		// If two trains are arriving and departing at the same time, i.e.
		// (arrival[i] == departure[j]) depart the train first
		else
			count--, j++;
	}

	return platforms;
}

// Find minimum number of platforms needed in the station to avoid any
// delay in arrival of any train
int main()
{
    Trains arr1 = { 9.00, 9.40, 9.50, 11.00, 15.00, 18.00 };
	Trains dep1 = { 9.10, 12.00, 11.20, 11.30, 19.00, 20.00 };

	Trains arr2 =	{ 2.00, 2.10, 3.00, 3.20, 3.50, 5.00 };
	Trains dep2 = { 2.30, 3.40, 3.20, 4.30, 4.00, 5.20 };

	// sort arrival time of trains
	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	// sort departure time of trains
	sort(dep1.begin(), dep1.end());
	sort(dep2.begin(), dep2.end());

	cout << "Minimum platforms needed is: " << minPlatforms(arr1, dep1);
	cout <<endl<< "Minimum platforms needed is: " << minPlatforms(arr2, dep2);
	cout<<endl;
	return 0;
}
