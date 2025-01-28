vector<vector<int>> findTriplets(vector<int> arr, int n, int k) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for(int i = 0; i < n - 2; i++)
	{
        if(i > 0 && arr[i] == arr[i - 1])
		{
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while(left < right)
		{
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == k)
			{
                ans.push_back({arr[i], arr[left], arr[right]});

                while (left < right && arr[left] == arr[left + 1])
				{
                  left++;
                }

                while(left < right && arr[right] == arr[right - 1])
				{
					right--;
				}

                left++;
                right--;
            }

            else if(sum < k)
			{
                left++;
            }

            else
			{
                right--;
            }
        }
    }

    return ans;
}
