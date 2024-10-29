#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> nums, int target)
{
  int l{0}, h{static_cast<int>(size(nums)) - 1}, mid{};
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (nums.at(mid) == target)
    {
      return mid;
    }
    else if (nums.at(l) < nums.at(mid))
    {
      if (target >= nums.at(l) && target < nums.at(mid))
      {
        h = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
    else if (nums.at(h) > nums.at(mid))
    {
      if (target > nums.at(mid) && target <= nums.at(h))
      {
        l = mid + 1;
      }
      else
      {
        h = mid - 1;
      }
    }
  }
  return -1;
}

int main()
{
  vector<int> nums{4, 5, 6, 7, 0, 1, 2};

  int target{3};

  int ans = search(nums, target);
  cout << ans << endl;
}