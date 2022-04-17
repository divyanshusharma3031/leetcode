<h2><a href="https://leetcode.com/problems/maximum-trailing-zeros-in-a-cornered-path/">2245. Maximum Trailing Zeros in a Cornered Path</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">grid</code> of size <code style="user-select: auto;">m x n</code>, where each cell contains a positive integer.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">cornered path</strong> is defined as a set of adjacent cells with <strong style="user-select: auto;">at most</strong> one turn. More specifically, the path should exclusively move either <strong style="user-select: auto;">horizontally</strong> or <strong style="user-select: auto;">vertically</strong> up to the turn (if there is one), without returning to a previously visited cell. After the turn, the path will then move exclusively in the <strong style="user-select: auto;">alternate</strong> direction: move vertically if it moved horizontally, and vice versa, also without returning to a previously visited cell.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">product</strong> of a path is defined as the product of all the values in the path.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of <strong style="user-select: auto;">trailing zeros</strong> in the product of a cornered path found in </em><code style="user-select: auto;">grid</code>.</p>

<p style="user-select: auto;">Note:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Horizontal</strong> movement means moving in either the left or right direction.</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Vertical</strong> movement means moving in either the up or down direction.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/23/ex1new2.jpg" style="width: 577px; height: 190px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[23,17,15,3,20],[8,1,20,27,11],[9,4,6,2,21],[40,9,1,10,6],[22,7,4,5,3]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The grid on the left shows a valid cornered path.
It has a product of 15 * 20 * 6 * 1 * 10 = 18000 which has 3 trailing zeros.
It can be shown that this is the maximum trailing zeros in the product of a cornered path.

The grid in the middle is not a cornered path as it has more than one turn.
The grid on the right is not a cornered path as it requires a return to a previously visited cell.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/25/ex2.jpg" style="width: 150px; height: 157px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[4,3,2],[7,6,1],[8,8,8]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The grid is shown in the figure above.
There are no cornered paths in the grid that result in a product with a trailing zero.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= grid[i][j] &lt;= 1000</code></li>
</ul>
</div>