class Solution
{
public:
  vector<int> findMajority(vector<int> &arr)
  {
    // Code here
    int n = arr.size();
    int val = n / 3;

    unordered_map<int, int> freq;
    for (int num : arr)
      freq[num]++;

    set<int> resultset;
    for (auto &pair : freq)
    {
      if (pair.second > val)
      {
        resultset.insert(pair.first);
      }
    }
    vector<int> result(resultset.begin(), resultset.end());

    return result;
  }
};