<h2><a href="https://leetcode.com/problems/minimum-moves-to-make-array-complementary/">1674. Minimum Moves to Make Array Complementary</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> of <strong style="user-select: auto;">even</strong> length <code style="user-select: auto;">n</code> and an integer <code style="user-select: auto;">limit</code>. In one move, you can replace any integer from <code style="user-select: auto;">nums</code> with another integer between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">limit</code>, inclusive.</p>

<p style="user-select: auto;">The array <code style="user-select: auto;">nums</code> is <strong style="user-select: auto;">complementary</strong> if for all indices <code style="user-select: auto;">i</code> (<strong style="user-select: auto;">0-indexed</strong>), <code style="user-select: auto;">nums[i] + nums[n - 1 - i]</code> equals the same number. For example, the array <code style="user-select: auto;">[1,2,3,4]</code> is complementary because for all indices <code style="user-select: auto;">i</code>, <code style="user-select: auto;">nums[i] + nums[n - 1 - i] = 5</code>.</p>

<p style="user-select: auto;">Return the <em style="user-select: auto;"><strong style="user-select: auto;">minimum</strong> number of moves required to make </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> <strong style="user-select: auto;">complementary</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,4,3], limit = 4
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> In 1 move, you can change nums to [1,2,<u style="user-select: auto;">2</u>,3] (underlined elements are changed).
nums[0] + nums[3] = 1 + 3 = 4.
nums[1] + nums[2] = 2 + 2 = 4.
nums[2] + nums[1] = 2 + 2 = 4.
nums[3] + nums[0] = 3 + 1 = 4.
Therefore, nums[i] + nums[n-1-i] = 4 for every i, so nums is complementary.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,2,1], limit = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> In 2 moves, you can change nums to [<u style="user-select: auto;">2</u>,2,2,<u style="user-select: auto;">2</u>]. You cannot change any number to 3 since 3 &gt; limit.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,1,2], limit = 2
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> nums is already complementary.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n&nbsp;&lt;=&nbsp;10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i]&nbsp;&lt;= limit &lt;=&nbsp;10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> is even.</li>
</ul>
</div>