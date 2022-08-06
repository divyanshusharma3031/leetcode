<h2><a href="https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/">1315. Sum of Nodes with Even-Valued Grandparent</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, return <em style="user-select: auto;">the sum of values of nodes with an <strong style="user-select: auto;">even-valued grandparent</strong></em>. If there are no nodes with an <strong style="user-select: auto;">even-valued grandparent</strong>, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">grandparent</strong> of a node is the parent of its parent if it exists.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/10/even1-tree.jpg" style="width: 504px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
<strong style="user-select: auto;">Output:</strong> 18
<strong style="user-select: auto;">Explanation:</strong> The red nodes are the nodes with even-value grandparent while the blue nodes are the even-value grandparents.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/10/even2-tree.jpg" style="width: 64px; height: 65px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>