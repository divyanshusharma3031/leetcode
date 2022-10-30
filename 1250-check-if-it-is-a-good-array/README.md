<h2><a href="https://leetcode.com/problems/check-if-it-is-a-good-array/">1250. Check If It Is a Good Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">nums</code> of&nbsp;positive integers. Your task is to select some subset of <code style="user-select: auto;">nums</code>, multiply each element by an integer and add all these numbers.&nbsp;The array is said to be&nbsp;<strong style="user-select: auto;">good&nbsp;</strong>if you can obtain a sum of&nbsp;<code style="user-select: auto;">1</code>&nbsp;from the array by any possible subset and multiplicand.</p>

<p style="user-select: auto;">Return&nbsp;<code style="user-select: auto;">True</code>&nbsp;if the array is <strong style="user-select: auto;">good&nbsp;</strong>otherwise&nbsp;return&nbsp;<code style="user-select: auto;">False</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [12,5,7,23]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Pick numbers 5 and 7.
5*3 + 7*(-2) = 1
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [29,6,10]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Pick numbers 29, 6 and 10.
29*1 + 6*(-3) + 10*(-1) = 1
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,6]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10^5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10^9</code></li>
</ul>
</div>