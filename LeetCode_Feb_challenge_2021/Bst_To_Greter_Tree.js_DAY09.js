/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */

var convertBST = function(root) {
    let sum = 0;
    function inverseInorder(root) {
        if(root) {
            inverseInorder(root.right);
            sum += root.val;
            root.val = sum;
            inverseInorder(root.left);
        }
    }
    inverseInorder(root);
    return root;
};
