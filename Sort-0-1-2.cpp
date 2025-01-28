//Counting approach
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int count0 = 0, count1 = 0;

   for(int i = 0; i < n; i++)
   {
      if(arr[i] == 0)
      {
         count0++;
      }

      else if(arr[i] == 1)
      {
         count1++;
      }
   }

   for(int i = 0; i < count0; i++)
   {
      arr[i] = 0;
   }

   for(int i = count0; i < count0 + count1; i++)
   {
      arr[i] = 1;
   }

   for(int i = count0 + count1; i < n; i++)
   {
      arr[i] = 2;
   }
}

//Optimized Solution - Dutch National Flag
#include <bits/stdc++.h> 
void sort012_2(int *arr, int n)
{
   //   Write your code here
   int low = 0, mid = 0, high = n - 1;

   while(mid <= high)
   {
      if(arr[mid] == 0)
      {
         swap(arr[mid], arr[low]);
         low++;
         mid++;
      }

      else if(arr[mid] == 1)
      {
         mid++;
      }

      else
      {
         swap(arr[mid], arr[high]);
         high--;
      }
   }
}
