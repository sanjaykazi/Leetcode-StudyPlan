#include <iostream>
#include <vector>
using namespace std;
bool isBadVersion(int version)
{
  return false;
}
int firstBadVersion(int n)
{
  long long int beg, last, mid;
  beg = 1, last = n;
  long int pos = 1;
  while (beg <= last)
  {
    // ensure you calculate mid values this way ,otherwise ,it would cause overflow
    mid = beg + (last - beg) / 2;
    bool x = isBadVersion(mid);
    if (x == true)
    {
      pos = mid;
      last = mid - 1;
    }
    else
      beg = mid + 1;
  }

  // return the first index of faulty product
  return pos;
}

//valid binary search tree
// Language: cpp
// Path: Algorithm\validBinarySearchTree.cpp
#include <iostream>
#include <vector>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool isValidBST(TreeNode *root)
{
  if (root == nullptr)
    return true;
  if (root->left == NULL && root->right == NULL)
    return true;
  if (root->left == NULL)
  {
    if (root->val > root->right->val)
      return isValidBST(root->right);
    else
      return false;
  }
  if (root->right == NULL)
  {
    if (root->val < root->left->val)
      return isValidBST(root->left);
    else
      return false;
  }
  if (root->val > root->left->val && root->val < root->right->val)
  {
    if (isValidBST(root->left) && isValidBST(root->right))
      return true;
    else
      return false;
  }
  else
    return false;
}
