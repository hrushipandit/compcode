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
public:
    vector<double> averageOfLevels(TreeNode* root) {
        double res;
        queue <TreeNode*> q;
        q.push(root);
        vector <double> output;
        while (!q.empty())
        {   int size=q.size();
            long temp=0;
            TreeNode* temp1;
            for (int i=0;i<size;i++)
            {
                temp1=q.front();
                q.pop();
                temp+=temp1->val; 
                if (temp1->left) q.push(temp1->left);
                if (temp1->right) q.push(temp1->right);
                
            }
         res=(double)temp/size;
         output.push_back(res);
         
        }
        
        return output;
        
    }
};