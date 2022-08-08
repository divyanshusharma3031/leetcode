<h2><a href="https://leetcode.com/problems/count-submatrices-with-all-ones/">1504. Count Submatrices With All Ones</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">mat</code>, <em style="user-select: auto;">return the number of <strong style="user-select: auto;">submatrices</strong> that have all ones</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/27/ones1-grid.jpg" style="width: 244px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[1,0,1],[1,1,0],[1,1,0]]
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation:</strong> 
There are 6 rectangles of side 1x1.
There are 2 rectangles of side 1x2.
There are 3 rectangles of side 2x1.
There is 1 rectangle of side 2x2. 
There is 1 rectangle of side 3x1.
Total number of rectangles = 6 + 2 + 3 + 1 + 1 = 13.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/27/ones2-grid.jpg" style="width: 324px; height: 245px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[0,1,1,0],[0,1,1,1],[1,1,1,0]]
<strong style="user-select: auto;">Output:</strong> 24
<strong style="user-select: auto;">Explanation:</strong> 
There are 8 rectangles of side 1x1.
There are 5 rectangles of side 1x2.
There are 2 rectangles of side 1x3. 
There are 4 rectangles of side 2x1.
There are 2 rectangles of side 2x2. 
There are 2 rectangles of side 3x1. 
There is 1 rectangle of side 3x2. 
Total number of rectangles = 8 + 5 + 2 + 4 + 2 + 2 + 1 = 24.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 150</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">mat[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>