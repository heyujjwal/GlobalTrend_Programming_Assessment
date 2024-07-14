int findMaxPathSum(Node* root, int &maxi) {
        // Base case: If the current node is null, return 0
        if (root == nullptr) {
            return 0;
        }
        int leftMaxPath = max(0, findMaxPathSum(root->left, maxi));
        int rightMaxPath = max(0, findMaxPathSum(root->right, maxi));
        maxi = max(maxi, leftMaxPath + rightMaxPath + root->data);
        return max(leftMaxPath, rightMaxPath) + root->data;
    }
    // Function to find the maximum
    // path sum for the entire binary tree
    int maxPathSum(Node* root) {
        
        int maxi = INT_MIN; 
        findMaxPathSum(root, maxi);
        return maxi; 
    }
