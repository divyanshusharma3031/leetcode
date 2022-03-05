<h2><a href="https://leetcode.com/problems/count-substrings-that-differ-by-one-character/">1638. Count Substrings That Differ by One Character</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code>, find the number of ways you can choose a non-empty substring of <code style="user-select: auto;">s</code> and replace a <strong style="user-select: auto;">single character</strong> by a different character such that the resulting substring is a substring of <code style="user-select: auto;">t</code>. In other words, find the number of substrings in <code style="user-select: auto;">s</code> that differ from some substring in <code style="user-select: auto;">t</code> by <strong style="user-select: auto;">exactly</strong> one character.</p>

<p style="user-select: auto;">For example, the underlined substrings in <code style="user-select: auto;">"<u style="user-select: auto;">compute</u>r"</code> and <code style="user-select: auto;">"<u style="user-select: auto;">computa</u>tion"</code> only differ by the <code style="user-select: auto;">'e'</code>/<code style="user-select: auto;">'a'</code>, so this is a valid way.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of substrings that satisfy the condition above.</em></p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters within a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aba", t = "baba"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The following are the pairs of substrings from s and t that differ by exactly 1 character:
("<u style="user-select: auto;">a</u>ba", "<u style="user-select: auto;">b</u>aba")
("<u style="user-select: auto;">a</u>ba", "ba<u style="user-select: auto;">b</u>a")
("ab<u style="user-select: auto;">a</u>", "<u style="user-select: auto;">b</u>aba")
("ab<u style="user-select: auto;">a</u>", "ba<u style="user-select: auto;">b</u>a")
("a<u style="user-select: auto;">b</u>a", "b<u style="user-select: auto;">a</u>ba")
("a<u style="user-select: auto;">b</u>a", "bab<u style="user-select: auto;">a</u>")
The underlined portions are the substrings that are chosen from s and t.
</pre>
​​<strong style="user-select: auto;">Example 2:</strong>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ab", t = "bb"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The following are the pairs of substrings from s and t that differ by 1 character:
("<u style="user-select: auto;">a</u>b", "<u style="user-select: auto;">b</u>b")
("<u style="user-select: auto;">a</u>b", "b<u style="user-select: auto;">b</u>")
("<u style="user-select: auto;">ab</u>", "<u style="user-select: auto;">bb</u>")
​​​​The underlined portions are the substrings that are chosen from s and t.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length, t.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> consist of lowercase English letters only.</li>
</ul>
</div>