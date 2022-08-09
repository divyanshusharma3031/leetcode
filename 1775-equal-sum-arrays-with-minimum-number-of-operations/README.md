<h2><a href="https://leetcode.com/problems/equal-sum-arrays-with-minimum-number-of-operations/">1775. Equal Sum Arrays With Minimum Number of Operations</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two arrays of integers <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;"><font face="monospace" style="user-select: auto;">nums2</font></code>, possibly of different lengths. The values in the arrays are between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">6</code>, inclusive.</p>

<p style="user-select: auto;">In one operation, you can change any integer's value in <strong style="user-select: auto;">any </strong>of the arrays to <strong style="user-select: auto;">any</strong> value between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">6</code>, inclusive.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of operations required to make the sum of values in </em><code style="user-select: auto;">nums1</code><em style="user-select: auto;"> equal to the sum of values in </em><code style="user-select: auto;">nums2</code><em style="user-select: auto;">.</em> Return <code style="user-select: auto;">-1</code>​​​​​ if it is not possible to make the sum of the two arrays equal.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2,3,4,5,6], nums2 = [1,1,2,2,2,2]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> You can make the sums of nums1 and nums2 equal with 3 operations. All indices are 0-indexed.
- Change nums2[0] to 6. nums1 = [1,2,3,4,5,6], nums2 = [<u style="user-select: auto;"><strong style="user-select: auto;">6</strong></u>,1,2,2,2,2].
- Change nums1[5] to 1. nums1 = [1,2,3,4,5,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>], nums2 = [6,1,2,2,2,2].
- Change nums1[2] to 2. nums1 = [1,2,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,4,5,1], nums2 = [6,1,2,2,2,2].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,1,1,1,1,1,1], nums2 = [6]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There is no way to decrease the sum of nums1 or to increase the sum of nums2 to make them equal.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [6,6], nums2 = [1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> You can make the sums of nums1 and nums2 equal with 3 operations. All indices are 0-indexed. 
- Change nums1[0] to 2. nums1 = [<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,6], nums2 = [1].
- Change nums1[1] to 2. nums1 = [2,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>], nums2 = [1].
- Change nums2[0] to 4. nums1 = [2,2], nums2 = [<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length, nums2.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[i] &lt;= 6</code></li>
</ul>
</div>