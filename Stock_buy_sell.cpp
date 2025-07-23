
class Solution
{
public:
  int maximumProfit(vector<int> &prices)
  {
    // code here
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
      if (prices[i] > prices[i - 1])
      {
        profit += prices[i] - prices[i - 1];
      }
    }
    return profit;
  }
};

// C++ Program to find the max profit when multiple
// transactions are allowed

int maximumProfit(vector<int> &prices)
{
  int n = prices.size();
  int lMin = prices[0]; // Local Minima
  int lMax = prices[0]; // Local Maxima
  int res = 0;

  int i = 0;
  while (i < n - 1)
  {

    // Find local minima
    while (i < n - 1 && prices[i] >= prices[i + 1])
    {
      i++;
    }
    lMin = prices[i];

    // Local Maxima
    while (i < n - 1 && prices[i] <= prices[i + 1])
    {
      i++;
    }
    lMax = prices[i];

    // Add current profit
    res = res + (lMax - lMin);
  }

  return res;
}