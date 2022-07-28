<h2><a href="https://leetcode.com/problems/map-of-highest-peak/">1765. Map of Highest Peak</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer matrix <code style="user-select: auto;">isWater</code> of size <code style="user-select: auto;">m x n</code> that represents a map of <strong style="user-select: auto;">land</strong> and <strong style="user-select: auto;">water</strong> cells.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If <code style="user-select: auto;">isWater[i][j] == 0</code>, cell <code style="user-select: auto;">(i, j)</code> is a <strong style="user-select: auto;">land</strong> cell.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">isWater[i][j] == 1</code>, cell <code style="user-select: auto;">(i, j)</code> is a <strong style="user-select: auto;">water</strong> cell.</li>
</ul>

<p style="user-select: auto;">You must assign each cell a height in a way that follows these rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The height of each cell must be non-negative.</li>
	<li style="user-select: auto;">If the cell is a <strong style="user-select: auto;">water</strong> cell, its height must be <code style="user-select: auto;">0</code>.</li>
	<li style="user-select: auto;">Any two adjacent cells must have an absolute height difference of <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">1</code>. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).</li>
</ul>

<p style="user-select: auto;">Find an assignment of heights such that the maximum height in the matrix is <strong style="user-select: auto;">maximized</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an integer matrix </em><code style="user-select: auto;">height</code><em style="user-select: auto;"> of size </em><code style="user-select: auto;">m x n</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">height[i][j]</code><em style="user-select: auto;"> is cell </em><code style="user-select: auto;">(i, j)</code><em style="user-select: auto;">'s height. If there are multiple solutions, return <strong style="user-select: auto;">any</strong> of them</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/01/10/screenshot-2021-01-11-at-82045-am.png" style="width: 220px; height: 219px; user-select: auto;"></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> isWater = [[0,1],[0,0]]
<strong style="user-select: auto;">Output:</strong> [[1,0],[2,1]]
<strong style="user-select: auto;">Explanation:</strong> The image shows the assigned heights of each cell.
The blue cell is the water cell, and the green cells are the land cells.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/01/10/screenshot-2021-01-11-at-82050-am.png" style="width: 300px; height: 296px; user-select: auto;"></strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> isWater = [[0,0,1],[1,0,0],[0,0,0]]
<strong style="user-select: auto;">Output:</strong> [[1,1,0],[0,1,1],[1,2,2]]
<strong style="user-select: auto;">Explanation:</strong> A height of 2 is the maximum possible height of any assignment.
Any height assignment that has a maximum height of 2 while still meeting the rules will also be accepted.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == isWater.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == isWater[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">isWater[i][j]</code> is <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;">There is at least <strong style="user-select: auto;">one</strong> water cell.</li>
</ul>
</div>