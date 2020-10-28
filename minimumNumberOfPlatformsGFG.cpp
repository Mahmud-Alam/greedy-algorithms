

//This code is from GeeksforGeeks website.
//This code is not fully correct.
//It has some issues.
//If same arrival and departure value input, it gives Wrong answer______________________________



#include<bits/stdc++.h>
using namespace std;

// Returns minimum number of platforms reqquired
int findPlatform(int arr[], int dep[], int n)
{

	// plat_needed indicates number of platforms
	// needed at a time
	int plat_needed = 1, result = 1;
	int i = 1, j = 0;

	// run a nested loop to find overlap
	for (int i = 0; i < n; i++) {
		// minimum platform
		plat_needed = 1;

		for (int j = i + 1; j < n; j++) {
			// check for overlap
			if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
		(arr[j] >= arr[i] && arr[j] <= dep[i]))
				plat_needed++;
		}

		// update result
		result = max(result, plat_needed);
	}

	return result;
}

// Driver program to test methods of graph class
int main()
{
	int arr1[] = { 900, 940, 950, 1100, 1500, 1800 };                                 //for arr1, dep1
	int dep1[] = { 910, 1200, 1120, 1130, 1900, 2000 };                              // It gives Right answer.

    int arr2[] = { 200, 210, 300, 320, 350, 500 };                                 //for arr2, dep2
	int dep2[] = { 230, 340, 320, 430, 400, 520 };                                // It gives Wrong answer
                                                                                 // Because of same arrival and departure value of 320

	int n = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Minimum Number of 1st Platforms Required = "
		<< findPlatform(arr1, dep1, n)<<endl;
    cout << "Minimum Number of 2nd Platforms Required = "
		<< findPlatform(arr2, dep2, n)<<endl;
	return 0;
}

