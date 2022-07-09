<h2><a href="https://leetcode.com/problems/minimum-sum-of-squared-difference/">2333. Minimum Sum of Squared Difference</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two positive <strong style="user-select: auto;">0-indexed</strong> integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code>, both of length <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">sum of squared difference</strong> of arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> is defined as the <strong style="user-select: auto;">sum</strong> of <code style="user-select: auto;">(nums1[i] - nums2[i])<sup style="user-select: auto;">2</sup></code> for each <code style="user-select: auto;">0 &lt;= i &lt; n</code>.</p>

<p style="user-select: auto;">You are also given two positive integers <code style="user-select: auto;">k1</code> and <code style="user-select: auto;">k2</code>. You can modify any of the elements of <code style="user-select: auto;">nums1</code> by <code style="user-select: auto;">+1</code> or <code style="user-select: auto;">-1</code> at most <code style="user-select: auto;">k1</code> times. Similarly, you can modify any of the elements of <code style="user-select: auto;">nums2</code> by <code style="user-select: auto;">+1</code> or <code style="user-select: auto;">-1</code> at most <code style="user-select: auto;">k2</code> times.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum <strong style="user-select: auto;">sum of squared difference</strong> after modifying array </em><code style="user-select: auto;">nums1</code><em style="user-select: auto;"> at most </em><code style="user-select: auto;">k1</code><em style="user-select: auto;"> times and modifying array </em><code style="user-select: auto;">nums2</code><em style="user-select: auto;"> at most </em><code style="user-select: auto;">k2</code><em style="user-select: auto;"> times</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong>: You are allowed to modify the array elements to become <strong style="user-select: auto;">negative</strong> integers.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,2,3,4], nums2 = [2,10,20,19], k1 = 0, k2 = 0
<strong style="user-select: auto;">Output:</strong> 579
<strong style="user-select: auto;">Explanation:</strong> The elements in nums1 and nums2 cannot be modified because k1 = 0 and k2 = 0. 
The sum of square difference will be: (1 - 2)<sup style="user-select: auto;">2 </sup>+ (2 - 10)<sup style="user-select: auto;">2 </sup>+ (3 - 20)<sup style="user-select: auto;">2 </sup>+ (4 - 19)<sup style="user-select: auto;">2</sup>&nbsp;= 579.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,4,10,12], nums2 = [5,8,6,9], k1 = 1, k2 = 1
<strong style="user-select: auto;">Output:</strong> 43
<strong style="user-select: auto;">Explanation:</strong> One way to obtain the minimum sum of square difference is: 
- Increase nums1[0] once.
- Increase nums2[2] once.
The minimum of the sum of square difference will be: 
(2 - 5)<sup style="user-select: auto;">2 </sup>+ (4 - 8)<sup style="user-select: auto;">2 </sup>+ (10 - 7)<sup style="user-select: auto;">2 </sup>+ (12 - 9)<sup style="user-select: auto;">2</sup>&nbsp;= 43.
Note that, there are other ways to obtain the minimum of the sum of square difference, but there is no way to obtain a sum smaller than 43.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums1.length == nums2.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums1[i], nums2[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k1, k2 &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>