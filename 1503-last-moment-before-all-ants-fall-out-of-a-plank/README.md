<h2><a href="https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/">1503. Last Moment Before All Ants Fall Out of a Plank</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We have a wooden plank of the length <code style="user-select: auto;">n</code> <strong style="user-select: auto;">units</strong>. Some ants are walking on the plank, each ant moves with a speed of <strong style="user-select: auto;">1 unit per second</strong>. Some of the ants move to the <strong style="user-select: auto;">left</strong>, the other move to the <strong style="user-select: auto;">right</strong>.</p>

<p style="user-select: auto;">When two ants moving in two <strong style="user-select: auto;">different</strong> directions meet at some point, they change their directions and continue moving again. Assume changing directions does not take any additional time.</p>

<p style="user-select: auto;">When an ant reaches <strong style="user-select: auto;">one end</strong> of the plank at a time <code style="user-select: auto;">t</code>, it falls out of the plank immediately.</p>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code> and two integer arrays <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code>, the positions of the ants moving to the left and the right, return <em style="user-select: auto;">the moment when the last ant(s) fall out of the plank</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/17/ants.jpg" style="width: 450px; height: 610px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, left = [4,3], right = [0,1]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> In the image above:
-The ant at index 0 is named A and going to the right.
-The ant at index 1 is named B and going to the right.
-The ant at index 3 is named C and going to the left.
-The ant at index 4 is named D and going to the left.
The last moment when an ant was on the plank is t = 4 seconds. After that, it falls immediately out of the plank. (i.e., We can say that at t = 4.0000000001, there are no ants on the plank).
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/17/ants2.jpg" style="width: 639px; height: 101px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, left = [], right = [0,1,2,3,4,5,6,7]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> All ants are going to the right, the ant at index 0 needs 7 seconds to fall.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/06/17/ants3.jpg" style="width: 639px; height: 100px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, left = [0,1,2,3,4,5,6,7], right = []
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> All ants are going to the left, the ant at index 7 needs 7 seconds to fall.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= left.length &lt;= n + 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= left[i] &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= right.length &lt;= n + 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= right[i] &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= left.length + right.length &lt;= n + 1</code></li>
	<li style="user-select: auto;">All values of <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code> are unique, and each value can appear <strong style="user-select: auto;">only in one</strong> of the two arrays.</li>
</ul>
</div>