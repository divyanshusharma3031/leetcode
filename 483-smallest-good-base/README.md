<h2><a href="https://leetcode.com/problems/smallest-good-base/">483. Smallest Good Base</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code> represented as a string, return <em style="user-select: auto;">the smallest <strong style="user-select: auto;">good base</strong> of</em> <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">We call <code style="user-select: auto;">k &gt;= 2</code> a <strong style="user-select: auto;">good base</strong> of <code style="user-select: auto;">n</code>, if all digits of <code style="user-select: auto;">n</code> base <code style="user-select: auto;">k</code> are <code style="user-select: auto;">1</code>'s.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = "13"
<strong style="user-select: auto;">Output:</strong> "3"
<strong style="user-select: auto;">Explanation:</strong> 13 base 3 is 111.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = "4681"
<strong style="user-select: auto;">Output:</strong> "8"
<strong style="user-select: auto;">Explanation:</strong> 4681 base 8 is 11111.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = "1000000000000000000"
<strong style="user-select: auto;">Output:</strong> "999999999999999999"
<strong style="user-select: auto;">Explanation:</strong> 1000000000000000000 base 999999999999999999 is 11.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> is an integer in the range <code style="user-select: auto;">[3, 10<sup style="user-select: auto;">18</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> does not contain any leading zeros.</li>
</ul>
</div>