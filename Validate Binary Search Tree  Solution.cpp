class Solution {
public:
    bool isBst(TreeNode* root,TreeNode* min,TreeNode* max){
        if(root==nullptr)
                return true;
        if(min != nullptr && root->val <= min->val)
            return false;
        if(max != nullptr && root->val >= max->val)
            return false;
        
        bool leftvalid = isBst(root->left,min,root);
        bool rightvalid = isBst(root->right,root,max);
        
        return leftvalid && rightvalid;
    }
    bool isValidBST(TreeNode* root) {
        return (isBst(root,nullptr,nullptr));
        
    }
};
