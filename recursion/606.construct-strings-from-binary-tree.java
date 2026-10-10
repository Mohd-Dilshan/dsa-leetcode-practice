//T.C.=O(n²)

public class Solution {
    public String tree2str(TreeNode root) {
        if (root == null) {
            return "";
        }

        String result = Integer.toString(root.val);
        String l = tree2str(root.left);
        String r = tree2str(root.right);

        if (root.left == null && root.right == null) {
            return result;
        }

        if (root.right == null) {
            return result + "(" + l + ")";
        }

        if (root.left == null) {
            return result + "()" + "(" + r + ")";
        }

        return result + "(" + l + ")" + "(" + r + ")";
    }
}


// T.C.:-O(n)

class Solution {
    public String tree2str(TreeNode root) {
        StringBuilder result = new StringBuilder();
        dfs(root, result);
        return result.toString();
    }

    private void dfs(TreeNode node, StringBuilder result) {
        if (node == null) {
            return;
        }

        result.append(node.val);

        if (node.left == null && node.right == null) {
            return;
        }

        result.append('(');
        dfs(node.left, result);
        result.append(')');

        if (node.right != null) {
            result.append('(');
            dfs(node.right, result);
            result.append(')');
        }
    }
}


//T.C.:-O(n)

public class Solution {
    public String tree2str(TreeNode root) {
        StringBuilder sb = new StringBuilder();
        buildString(root, sb);
        return sb.toString();
    } 

    private void buildString(TreeNode node, StringBuilder sb) {
        if (node == null) {
            return;
        }

        // Append current node's value
        sb.append(node.val);

        // Case 1: Leaf node (no children): do nothing further
        if (node.left == null && node.right == null) {
            return;
        }

        // Case 2: Left child exists OR right child exists (needs empty "()" if left is null)
        sb.append("(");
        buildString(node.left, sb);
        sb.append(")");

        // Case 3: Right child exists
        if (node.right != null) {
            sb.append("(");
            buildString(node.right, sb);
            sb.append(")");
        }
    }
}
