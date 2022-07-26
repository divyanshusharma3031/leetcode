<h2><a href="https://leetcode.com/problems/finding-3-digit-even-numbers/">2094. Finding 3-Digit Even Numbers</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">digits</code>, where each element is a digit. The array may contain duplicates.</p>

<p style="user-select: auto;">You need to find <strong style="user-select: auto;">all</strong> the <strong style="user-select: auto;">unique</strong> integers that follow the given requirements:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The integer consists of the <strong style="user-select: auto;">concatenation</strong> of <strong style="user-select: auto;">three</strong> elements from <code style="user-select: auto;">digits</code> in <strong style="user-select: auto;">any</strong> arbitrary order.</li>
	<li style="user-select: auto;">The integer does not have <strong style="user-select: auto;">leading zeros</strong>.</li>
	<li style="user-select: auto;">The integer is <strong style="user-select: auto;">even</strong>.</li>
</ul>

<p style="user-select: auto;">For example, if the given <code style="user-select: auto;">digits</code> were <code style="user-select: auto;">[1, 2, 3]</code>, integers <code style="user-select: auto;">132</code> and <code style="user-select: auto;">312</code> follow the requirements.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a <strong style="user-select: auto;">sorted</strong> array of the unique integers.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> digits = [2,1,3,0]
<strong style="user-select: auto;">Output:</strong> [102,120,130,132,210,230,302,310,312,320]
<strong style="user-select: auto;">Explanation:</strong> All the possible integers that follow the requirements are in the output array. 
Notice that there are no <strong style="user-select: auto;">odd</strong> integers or integers with <strong style="user-select: auto;">leading zeros</strong>.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> digits = [2,2,8,8,2]
<strong style="user-select: auto;">Output:</strong> [222,228,282,288,822,828,882]
<strong style="user-select: auto;">Explanation:</strong> The same digit can be used as many times as it appears in digits. 
In this example, the digit 8 is used twice each time in 288, 828, and 882. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> digits = [3,7,5]
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> No <strong style="user-select: auto;">even</strong> integers can be formed using the given digits.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= digits.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= digits[i] &lt;= 9</code></li>
</ul>
</div>