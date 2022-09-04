<h2><a href="https://leetcode.com/problems/decrease-elements-to-make-array-zigzag/">1144. Decrease Elements To Make Array Zigzag</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">nums</code> of integers, a <em style="user-select: auto;">move</em>&nbsp;consists of choosing any element and <strong style="user-select: auto;">decreasing it by 1</strong>.</p>

<p style="user-select: auto;">An array <code style="user-select: auto;">A</code> is a&nbsp;<em style="user-select: auto;">zigzag array</em>&nbsp;if either:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Every even-indexed element is greater than adjacent elements, ie.&nbsp;<code style="user-select: auto;">A[0] &gt; A[1] &lt; A[2] &gt; A[3] &lt; A[4] &gt; ...</code></li>
	<li style="user-select: auto;">OR, every odd-indexed element is greater than adjacent elements, ie.&nbsp;<code style="user-select: auto;">A[0] &lt; A[1] &gt; A[2] &lt; A[3] &gt; A[4] &lt; ...</code></li>
</ul>

<p style="user-select: auto;">Return the minimum number of moves to transform the given array <code style="user-select: auto;">nums</code> into a zigzag array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We can decrease 2 to 0 or 3 to 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [9,6,1,6,2]
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>