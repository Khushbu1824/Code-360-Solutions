//Solution 1
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   sort(arr.begin(), arr.end());
   for(int i = 0; i < arr.size(); i++)
   {
      for(int j = i + 1; j < arr.size(); j++)
      {
         if(arr[i] + arr[j] > s)
         {
            break;
         }

         else if(arr[i] + arr[j] == s)
         {
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
         }

         else
         {
            continue;
         }
      }
   }

   return ans;
}

//Solution 2
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   vector<vector<int>> ans;
   int n = arr.size();

   sort(arr.begin(), arr.end());

   int left = 0;
   int right = n - 1;

   while(left < right)
   {
      int sum = arr[left] + arr[right];

      if(sum == s)
      {
         int leftValue = arr[left], rightValue = arr[right];

         if (leftValue == rightValue)
         {
            int count = right - left + 1;

            for(int i = 0; i < (count * (count - 1)) / 2; i++)
            {
               ans.push_back({leftValue, rightValue});
            }

            break;
         }
         
         else
         {
            int leftCount = 1, rightCount = 1;

            while(left + 1 < right && arr[left] == arr[left + 1])
            {
               left++;
               leftCount++;
            }

            while(right - 1 > left && arr[right] == arr[right - 1])
            {
               right--;
               rightCount++;
            }

            for(int i = 0; i < leftCount; i++)
            {
               for(int j = 0; j < rightCount; j++)
               {
                  ans.push_back({leftValue, rightValue});
               }
            }

            left++;
            right--;
         }
      }

      else if(sum < s)
      {
         left++;
      }

      else
      {
         right--;
      }
   }

   return ans;
}
