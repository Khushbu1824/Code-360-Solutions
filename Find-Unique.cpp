//Using simple approach
int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i = 0; i < size; i++)
    {
        bool flag;

        for(int j = 0; j < size; j++)
        {
            if((arr[i] == arr[j]) && i != j)
            {
                flag = 1;
            }
        }

        if(flag == 0)
        {
            return arr[i];
        }

        flag = 0;
    }
}

//Using Bit manipulation
int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;

    for(int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}
