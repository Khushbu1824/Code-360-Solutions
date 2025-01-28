//Simple approach
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
	vector<int>count (n - 1, 0);

    for(int i = 0; i < n; i++)
    {
        count[arr[i] - 1]++;
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(count[i] == 2)
        {
            return i + 1;
        }
    }

    return -1;
}

//Using Bit-Manipulation
int findDuplicate1(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
	vector<int>count (n - 1, 0);

    for(int i = 0; i < n; i++)
    {
        count[arr[i] - 1]++;
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(count[i] == 2)
        {
            return i + 1;
        }
    }

    return -1;
}
