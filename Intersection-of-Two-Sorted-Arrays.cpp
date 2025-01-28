#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	// Write your code here.
	vector<int> output;
	int i = 0;
	int j = 0;

	while(i < n && j < m)
	{
		if(a[i] < b[j])
		{
			i++;
		}

		else if(a[i] == b[j])
		{
			output.push_back(a[i]);
			i++;
			j++;
		}

		else
		{
			j++;
		}
	}

	return output;
}
