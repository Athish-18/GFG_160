// User function template for C++
class Solution
{
public:
  void pushZerosToEnd(vector<int> &arr)
  {
    // code here
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] != 0)
      {
        temp.push_back(arr[i]);
      }
    }
    while (temp.size() <= arr.size())
    {
      temp.push_back(0);
    }

    arr = temp;
  }
};

// User function template for C++
class Solution
{
public:
  void pushZerosToEnd(vector<int> &arr)
  {
    // code here
    vector<int> temp;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] != 0)
      {
        swap(arr[i], arr[count]);
        count++;
      }
    }
  }
};