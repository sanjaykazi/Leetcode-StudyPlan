#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  int temp = nums[0], cnt = 1;
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] == temp)
      cnt++;
    else if (nums[i] != temp)
      temp = nums[i];
    if (cnt >= 2)
      return true;
  }
  return false;
}

//binary sort array
