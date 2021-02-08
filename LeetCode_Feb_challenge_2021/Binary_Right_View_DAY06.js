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
 * @return {number[]}
 */
var rightSideView = function(head) {
    let queue = [];
    if(head === null) return queue;
    queue.push ({
        'root'   :  head, 
        'val'    :  head.val
    });
    let rightView = [];
    while(queue.length > 0) {
        
        let size = queue.length;
        for (let i=0; i<size; ++i) {
            const node = queue.shift();
            if(i === size - 1) {
                rightView.push(node.val)
            };
            
            if (node.root.left !== null) queue.push ({
                'root'      : node.root.left,
                'val'       : node.root.left.val
            });
            
            if (node.root.right !== null) queue.push({
                'root'      : node.root.right,
                'val'       : node.root.right.val
            });
        }
    }
    return rightView;
}
