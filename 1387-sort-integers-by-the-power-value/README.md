<h2><a href="https://leetcode.com/problems/sort-integers-by-the-power-value/">1387. Sort Integers by The Power Value</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The power of an integer <code style="user-select: auto;">x</code> is defined as the number of steps needed to transform <code style="user-select: auto;">x</code> into <code style="user-select: auto;">1</code> using the following steps:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">if <code style="user-select: auto;">x</code> is even then <code style="user-select: auto;">x = x / 2</code></li>
	<li style="user-select: auto;">if <code style="user-select: auto;">x</code> is odd then <code style="user-select: auto;">x = 3 * x + 1</code></li>
</ul>

<p style="user-select: auto;">For example, the power of <code style="user-select: auto;">x = 3</code> is <code style="user-select: auto;">7</code> because <code style="user-select: auto;">3</code> needs <code style="user-select: auto;">7</code> steps to become <code style="user-select: auto;">1</code> (<code style="user-select: auto;">3 --&gt; 10 --&gt; 5 --&gt; 16 --&gt; 8 --&gt; 4 --&gt; 2 --&gt; 1</code>).</p>

<p style="user-select: auto;">Given three integers <code style="user-select: auto;">lo</code>, <code style="user-select: auto;">hi</code> and <code style="user-select: auto;">k</code>. The task is to sort all integers in the interval <code style="user-select: auto;">[lo, hi]</code> by the power value in <strong style="user-select: auto;">ascending order</strong>, if two or more integers have <strong style="user-select: auto;">the same</strong> power value sort them by <strong style="user-select: auto;">ascending order</strong>.</p>

<p style="user-select: auto;">Return the <code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> integer in the range <code style="user-select: auto;">[lo, hi]</code> sorted by the power value.</p>

<p style="user-select: auto;">Notice that for any integer <code style="user-select: auto;">x</code> <code style="user-select: auto;">(lo &lt;= x &lt;= hi)</code> it is <strong style="user-select: auto;">guaranteed</strong> that <code style="user-select: auto;">x</code> will transform into <code style="user-select: auto;">1</code> using these steps and that the power of <code style="user-select: auto;">x</code> is will <strong style="user-select: auto;">fit</strong> in a 32-bit signed integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lo = 12, hi = 15, k = 2
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation:</strong> The power of 12 is 9 (12 --&gt; 6 --&gt; 3 --&gt; 10 --&gt; 5 --&gt; 16 --&gt; 8 --&gt; 4 --&gt; 2 --&gt; 1)
The power of 13 is 9
The power of 14 is 17
The power of 15 is 17
The interval sorted by the power value [12,13,14,15]. For k = 2 answer is the second element which is 13.
Notice that 12 and 13 have the same power value and we sorted them in ascending order. Same for 14 and 15.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> lo = 7, hi = 11, k = 4
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> The power array corresponding to the interval [7, 8, 9, 10, 11] is [16, 3, 19, 6, 14].
The interval sorted by power is [8, 10, 11, 7, 9].
The fourth number in the sorted array is 7.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= lo &lt;= hi &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= hi - lo + 1</code></li>
</ul>
</div>