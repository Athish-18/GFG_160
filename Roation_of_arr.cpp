class Solution
{
public:
  // Function to rotate an array by d elements in counter-clockwise direction.
  void rotateArr(vector<int> &arr, int d)
  {
    // code here
    int n = arr.size();

    // for handling that case when d>n
    if (d >= n)
    {
      d = d % n;
    }
    vector<int> temp;
    for (int i = 0; i < n - d; i++)
    {
      temp.push_back(arr[d + i]);
    }

    for (int i = 0; i < d; i++)
    {
      temp.push_back(arr[i]);
    }
    arr = temp;
  }
};

// Jugglers theorem
class Solution
{
public:
  // Function to rotate an array by d elements in counter-clockwise direction.
  void rotateArr(vector<int> &arr, int d)
  {
    // code here
    int n = arr.size();
    vector<int> temp = arr;
    for (int i = 0; i < n; i++)
    {
      arr[i] = temp[(d + i) % n];
    }
  }
};