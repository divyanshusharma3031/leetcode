<h2><a href="https://leetcode.com/problems/two-out-of-three/">2032. Two Out of Three</a></h2><h3>Easy</h3><hr><div style="user-select: auto;">Given three integer arrays <code style="user-select: auto;">nums1</code>, <code style="user-select: auto;">nums2</code>, and <code style="user-select: auto;">nums3</code>, return <em style="user-select: auto;">a <strong style="user-select: auto;">distinct</strong> array containing all the values that are present in <strong style="user-select: auto;">at least two</strong> out of the three arrays. You may return the values in <strong style="user-select: auto;">any</strong> order</em>.
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]
<strong style="user-select: auto;">Output:</strong> [3,2]
<strong style="user-select: auto;">Explanation:</strong> The values that are present in at least two arrays are:
- 3, in all three arrays.
- 2, in nums1 and nums2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [3,1], nums2 = [2,3], nums3 = [1,2]
<strong style="user-select: auto;">Output:</strong> [2,3,1]
<strong style="user-select: auto;">Explanation:</strong> The values that are present in at least two arrays are:
- 2, in nums2 and nums3.
- 3, in nums1 and nums2.
- 1, in nums1 and nums3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2,2], nums2 = [4,3,3], nums3 = [5]
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> No value is present in at least two arrays.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1.length, nums2.length, nums3.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[j], nums3[k] &lt;= 100</code></li>
</ul>
</div>