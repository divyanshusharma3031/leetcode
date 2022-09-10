<h2><a href="https://leetcode.com/problems/number-of-sets-of-k-non-overlapping-line-segments/">1621. Number of Sets of K Non-Overlapping Line Segments</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given <code style="user-select: auto;">n</code> points on a 1-D plane, where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> point (from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n-1</code>) is at <code style="user-select: auto;">x = i</code>, find the number of ways we can draw <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">k</code> <strong style="user-select: auto;">non-overlapping</strong> line segments such that each segment covers two or more points. The endpoints of each segment must have <strong style="user-select: auto;">integral coordinates</strong>. The <code style="user-select: auto;">k</code> line segments <strong style="user-select: auto;">do not</strong> have to cover all <code style="user-select: auto;">n</code> points, and they are <strong style="user-select: auto;">allowed</strong> to share endpoints.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of ways we can draw </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> non-overlapping line segments</em><em style="user-select: auto;">.</em> Since this number can be huge, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/07/ex1.png" style="width: 179px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, k = 2
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The two line segments are shown in red and blue.
The image above shows the 5 different ways {(0,2),(2,3)}, {(0,1),(1,3)}, {(0,1),(2,3)}, {(1,2),(2,3)}, {(0,1),(1,2)}.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, k = 1
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The 3 ways are {(0,1)}, {(0,2)}, {(1,2)}.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 30, k = 7
<strong style="user-select: auto;">Output:</strong> 796297179
<strong style="user-select: auto;">Explanation:</strong> The total number of possible ways to draw 7 line segments is 3796297200. Taking this number modulo 10<sup style="user-select: auto;">9</sup> + 7 gives us 796297179.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n-1</code></li>
</ul>
</div>