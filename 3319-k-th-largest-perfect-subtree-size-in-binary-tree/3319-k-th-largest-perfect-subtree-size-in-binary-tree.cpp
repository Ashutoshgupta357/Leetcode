/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    map<int,int> mp;
    int dfs(TreeNode* root) {
        if(!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if(left == INT_MAX || right == INT_MAX || left != right) return INT_MAX;
        int curr_depth = max(left,right) + 1;
        if(left == right) {
            if(left == 0)
                mp[1]++;
            
            else 
                mp[(1<<curr_depth) - 1]++;
        }
        return curr_depth;
    }
public:
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        dfs(root);
        int sum = 0;
        for(auto& [_,val]:mp) {
            sum += val;
        }
        k = sum - k;
        if(k < 0) 
            return -1;
        for(auto& [num,val]:mp) {
            // cout << k << endl;
            if(k < val) 
                return num;
            
            k -= val;
        }
        return 0;
    }
};