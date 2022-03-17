<h2><a href="https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/">1403. Minimum Subsequence in Non-Increasing Order</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the array <code style="user-select: auto;">nums</code>, obtain a subsequence of the array whose sum of elements is <strong style="user-select: auto;">strictly greater</strong> than the sum of the non&nbsp;included elements in such subsequence.&nbsp;</p>

<p style="user-select: auto;">If there are multiple solutions, return the subsequence with <strong style="user-select: auto;">minimum size</strong> and if there still exist multiple solutions, return the subsequence with the <strong style="user-select: auto;">maximum total sum</strong> of all its elements. A subsequence of an array can be obtained by erasing some (possibly zero) elements from the array.&nbsp;</p>

<p style="user-select: auto;">Note that the solution with the given constraints is guaranteed to be&nbsp;<strong style="user-select: auto;">unique</strong>. Also return the answer sorted in <strong style="user-select: auto;">non-increasing</strong> order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,3,10,9,8]
<strong style="user-select: auto;">Output:</strong> [10,9] 
<strong style="user-select: auto;">Explanation:</strong> The subsequences [10,9] and [10,8] are minimal such that the sum of their elements is strictly greater than the sum of elements not included, however, the subsequence [10,9] has the maximum total sum of its elements.&nbsp;
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,4,7,6,7]
<strong style="user-select: auto;">Output:</strong> [7,7,6] 
<strong style="user-select: auto;">Explanation:</strong> The subsequence [7,7] has the sum of its elements equal to 14 which is not strictly greater than the sum of elements not included (14 = 4 + 4 + 6). Therefore, the subsequence [7,6,7] is the minimal satisfying the conditions. Note the subsequence has to returned in non-decreasing order.  
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [6]
<strong style="user-select: auto;">Output:</strong> [6]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
</ul></div>