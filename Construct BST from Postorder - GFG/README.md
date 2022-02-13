# Construct BST from Postorder
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given postorder traversal of a Binary Search Tree, you need to construct a BST from postorder traversal. The output will be inorder traversal of the constructed BST.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
6
1 7 5 50 40 10</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
1 5 7 10 40 50</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:
Testcase 1:</strong> The BST for the given post order traversal is:</span>
<span style="font-size: 18px; user-select: auto;"><img alt="" src="https://www.cdn.geeksforgeeks.org/wp-content/uploads/BST.jpg" style="height: 269px; width: 315px; user-select: auto;" class="img-responsive"></span>

<span style="font-size: 18px; user-select: auto;">Thus the inorder traversal of BST is: 1 5 7 10 40 50.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">constructTree()</strong> which takes an array post[], size as as the argument and returns the root of BST. </span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Height of the BST)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= T &lt;= 100<br style="user-select: auto;">
1 &lt;= N &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>