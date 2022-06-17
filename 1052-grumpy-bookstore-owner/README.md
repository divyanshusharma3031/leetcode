<h2><a href="https://leetcode.com/problems/grumpy-bookstore-owner/">1052. Grumpy Bookstore Owner</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a bookstore owner that has a store open for <code style="user-select: auto;">n</code> minutes. Every minute, some number of customers enter the store. You are given an integer array <code style="user-select: auto;">customers</code> of length <code style="user-select: auto;">n</code> where <code style="user-select: auto;">customers[i]</code> is the number of the customer that enters the store at the start of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> minute and all those customers leave after the end of that minute.</p>

<p style="user-select: auto;">On some minutes, the bookstore owner is grumpy. You are given a binary array grumpy where <code style="user-select: auto;">grumpy[i]</code> is <code style="user-select: auto;">1</code> if the bookstore owner is grumpy during the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> minute, and is <code style="user-select: auto;">0</code> otherwise.</p>

<p style="user-select: auto;">When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise, they are satisfied.</p>

<p style="user-select: auto;">The bookstore owner knows a secret technique to keep themselves not grumpy for <code style="user-select: auto;">minutes</code> consecutive minutes, but can only use it once.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum number of customers that can be satisfied throughout the day</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explanation:</strong> The bookstore owner keeps themselves not grumpy for the last 3 minutes. 
The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> customers = [1], grumpy = [0], minutes = 1
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == customers.length == grumpy.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= minutes &lt;= n &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= customers[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grumpy[i]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>