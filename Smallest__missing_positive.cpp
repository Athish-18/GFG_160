class Solution
{
public:
  int missingNumber(vector<int> &arr)
  {
    sort(arr.begin(), arr.end());
    int res = 1;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] == res)
      {
        res += 1;
      }
    }

    return res;
  };
};