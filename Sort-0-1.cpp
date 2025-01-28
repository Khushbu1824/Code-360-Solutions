//By counting
void sortZeroesAndOne(int arr[], int size)
{
    //Write your code here
    int count0 = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            count0++;
        }
    }

    for(int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    for(int i = count0; i < size; i++)
    {
        arr[i] = 1;
    }
}

//By two-pointer approach
void sortZeroesAndOne2(int input[], int size)
{
    //Write your code here
    int i = 0;
    int j = size - 1;

    while(i < j)
    {
        while(input[i] == 0 && i < j)
        {
            i++;
        }

        while(input[j] == 1 && i < j)
        {
            j--;
        }

        int temp;
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
        
    }
}
