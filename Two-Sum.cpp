#include<algorithm>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
	vector<pair<int, int>> ans;

	sort(arr.begin(), arr.end());

	int left = 0;
	int right = n - 1;

	while(left < right)
	{
		if(arr[left] + arr[right] < target)
		{
			left++;
		}

		else if(arr[left] + arr[right] == target)
		{
			ans.push_back({arr[left], arr[right]});
			left++;
			right--;
		}

		else
		{
			right--;
		}
	}

	if(ans.size() == 0)
	{
		ans.push_back({-1, -1});
	}

	return ans;
}
