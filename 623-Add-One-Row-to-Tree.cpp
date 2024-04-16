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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth == 1) {
        TreeNode* newNode = new TreeNode(val);
        newNode->left = root;
        return newNode;
    }

    std::queue<TreeNode*> q;
    q.push(root);
    int currentDepth = 1;

    while (!q.empty()) {
        int size = q.size();

        if (currentDepth == depth - 1) {
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                TreeNode* leftChild = new TreeNode(val);
                TreeNode* rightChild = new TreeNode(val);

                leftChild->left = node->left;
                rightChild->right = node->right;

                node->left = leftChild;
                node->right = rightChild;
            }
            break;
        }

        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        ++currentDepth;
    }

    return root;
}
};