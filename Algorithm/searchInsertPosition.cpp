#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &arr, int key)
{
  int n = arr.size();
  int low = 0;
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == key)
      return mid;
    else if (arr[mid] < key)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return low;
}