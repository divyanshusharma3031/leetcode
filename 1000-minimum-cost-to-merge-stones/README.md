<h2><a href="https://leetcode.com/problems/minimum-cost-to-merge-stones/">1000. Minimum Cost to Merge Stones</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> piles of <code style="user-select: auto;">stones</code> arranged in a row. The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> pile has <code style="user-select: auto;">stones[i]</code> stones.</p>

<p style="user-select: auto;">A move consists of merging exactly <code style="user-select: auto;">k</code> consecutive piles into one pile, and the cost of this move is equal to the total number of stones in these <code style="user-select: auto;">k</code> piles.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum cost to merge all piles of stones into one pile</em>. If it is impossible, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stones = [3,2,4,1], k = 2
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> We start with [3, 2, 4, 1].
We merge [3, 2] for a cost of 5, and we are left with [5, 4, 1].
We merge [4, 1] for a cost of 5, and we are left with [5, 5].
We merge [5, 5] for a cost of 10, and we are left with [10].
The total cost was 20, and this is the minimum possible.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stones = [3,2,4,1], k = 3
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> After any merge operation, there are 2 piles left, and we can't merge anymore.  So the task is impossible.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stones = [3,5,1,2,6], k = 3
<strong style="user-select: auto;">Output:</strong> 25
<strong style="user-select: auto;">Explanation:</strong> We start with [3, 5, 1, 2, 6].
We merge [5, 1, 2] for a cost of 8, and we are left with [3, 8, 6].
We merge [3, 8, 6] for a cost of 17, and we are left with [17].
The total cost was 25, and this is the minimum possible.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == stones.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= stones[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= k &lt;= 30</code></li>
</ul>
</div>