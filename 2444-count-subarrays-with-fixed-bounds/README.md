<h2><a href="https://leetcode.com/problems/count-subarrays-with-fixed-bounds/">2444. Count Subarrays With Fixed Bounds</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> and two integers <code style="user-select: auto;">minK</code> and <code style="user-select: auto;">maxK</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">fixed-bound subarray</strong> of <code style="user-select: auto;">nums</code> is a subarray that satisfies the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The <strong style="user-select: auto;">minimum</strong> value in the subarray is equal to <code style="user-select: auto;">minK</code>.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">maximum</strong> value in the subarray is equal to <code style="user-select: auto;">maxK</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of fixed-bound subarrays</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a <strong style="user-select: auto;">contiguous</strong> part of an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,5,2,7,5], minK = 1, maxK = 5
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The fixed-bound subarrays are [1,3,5] and [1,3,5,2].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,1], minK = 1, maxK = 1
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> Every subarray of nums is a fixed-bound subarray. There are 10 possible subarrays.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], minK, maxK &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>