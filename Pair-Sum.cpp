#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int count = 0;
	int left = 0;
	int right = n - 1;
	
	while(left < right)
	{
		if(arr[left] + arr[right] > target)
		{
			right--;
		}

		else if(arr[left] + arr[right] == target)
		{
			count++;
			left++;
			right--;
		}

		else
		{
			left++;
		}
	}

	if(count == 0)
	{
		return -1;
	}

	return count;
}
