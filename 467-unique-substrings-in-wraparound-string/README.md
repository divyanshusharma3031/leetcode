<h2><a href="https://leetcode.com/problems/unique-substrings-in-wraparound-string/">467. Unique Substrings in Wraparound String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We define the string <code style="user-select: auto;">s</code> to be the infinite wraparound string of <code style="user-select: auto;">"abcdefghijklmnopqrstuvwxyz"</code>, so <code style="user-select: auto;">s</code> will look like this:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"...zabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcd...."</code>.</li>
</ul>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">p</code>, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">unique non-empty substrings</strong> of </em><code style="user-select: auto;">p</code><em style="user-select: auto;"> are present in </em><code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> p = "a"
<strong style="user-select: auto;">Output:</strong> 1
Explanation: Only the substring "a" of p is in s.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> p = "cac"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> There are two substrings ("a", "c") of p in s.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> p = "zab"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> There are six substrings ("z", "a", "b", "za", "ab", and "zab") of p in s.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= p.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">p</code> consists of lowercase English letters.</li>
</ul>
</div>