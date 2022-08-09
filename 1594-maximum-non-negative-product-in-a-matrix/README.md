<h2><a href="https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/">1594. Maximum Non Negative Product in a Matrix</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">grid</code>. Initially, you are located at the top-left corner <code style="user-select: auto;">(0, 0)</code>, and in each step, you can only <strong style="user-select: auto;">move right or down</strong> in the matrix.</p>

<p style="user-select: auto;">Among all possible paths starting from the top-left corner <code style="user-select: auto;">(0, 0)</code> and ending in the bottom-right corner <code style="user-select: auto;">(m - 1, n - 1)</code>, find the path with the <strong style="user-select: auto;">maximum non-negative product</strong>. The product of a path is the product of all integers in the grid cells visited along the path.</p>

<p style="user-select: auto;">Return the <em style="user-select: auto;">maximum non-negative product <strong style="user-select: auto;">modulo</strong> </em><code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>. <em style="user-select: auto;">If the maximum product is <strong style="user-select: auto;">negative</strong>, return </em><code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Notice that the modulo is performed after getting the maximum product.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/23/product1.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[-1,-2,-3],[-2,-3,-3],[-3,-3,-2]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> It is not possible to get non-negative product in the path from (0, 0) to (2, 2), so return -1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/23/product2.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,-2,1],[1,-2,1],[3,-4,1]]
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> Maximum non-negative product is shown (1 * 1 * -2 * -4 * 1 = 8).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/23/product3.jpg" style="width: 164px; height: 165px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,3],[0,-4]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Maximum non-negative product is shown (1 * 0 * -4 = 0).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-4 &lt;= grid[i][j] &lt;= 4</code></li>
</ul>
</div>