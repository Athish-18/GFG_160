#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
  void nextPermutation(vector<int> &arr)
  {
    // code here
    next_permutation(arr.begin(), arr.end());
  }
};

// Actual method
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &arr)
{

  int n = arr.size();

  // Find the pivot index
  int pivot = -1;
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] < arr[i + 1])
    {
      pivot = i;
      break;
    }
  }

  // If pivot point does not exist, reverse the
  // whole array
  if (pivot == -1)
  {
    reverse(arr.begin(), arr.end());
    return;
  }

  // find the element from the right that
  // is greater than pivot
  for (int i = n - 1; i > pivot; i--)
  {
    if (arr[i] > arr[pivot])
    {
      swap(arr[i], arr[pivot]);
      break;
    }
  }

  // Reverse the elements from pivot + 1 to the
  // end to get the next permutation
  reverse(arr.begin() + pivot + 1, arr.end());
}

int main()
{

  vector<int> arr = {2, 4, 1, 7, 5, 0};
  nextPermutation(arr);
  for (int x : arr)
    cout << x << " ";
  return 0;
}
