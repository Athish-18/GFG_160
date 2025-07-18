class Solution
{
public:
  int getSecondLargest(vector<int> &arr)
  {
    // code here

    int n = arr.size();
    int max = -1;
    int seclar = -1;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] >= max)
      {
        max = arr[i];
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (arr[i] > seclar && arr[i] != max)
      {
        seclar = arr[i];
      }
    }
    return seclar;
  }
};