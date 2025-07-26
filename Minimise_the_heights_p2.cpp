#include <algorithm>
class Solution
{
public:
  int getMinDiff(vector<int> &arr, int k)
  {
    // code here
    sort(arr.begin(), arr.end());

    int minheight = 0;
    int maxheight = 0;

    int res = arr[arr.size() - 1] - arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
      if (arr[i] <= k)
      {
        continue;
      }
      else
      {
        minheight = min(arr[0] + k, arr[i] - k);
        maxheight = max(arr[arr.size() - 1] - k, arr[i - 1] + k);
        res = min(res, maxheight - minheight);
      }
    }
    return res;
  }
};