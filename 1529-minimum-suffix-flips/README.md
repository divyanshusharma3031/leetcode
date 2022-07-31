<h2><a href="https://leetcode.com/problems/minimum-suffix-flips/">1529. Minimum Suffix Flips</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> binary string <code style="user-select: auto;">target</code> of length <code style="user-select: auto;">n</code>. You have another binary string <code style="user-select: auto;">s</code> of length <code style="user-select: auto;">n</code> that is initially set to all zeros. You want to make <code style="user-select: auto;">s</code> equal to <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">In one operation, you can pick an index <code style="user-select: auto;">i</code> where <code style="user-select: auto;">0 &lt;= i &lt; n</code> and flip all bits in the <strong style="user-select: auto;">inclusive</strong> range <code style="user-select: auto;">[i, n - 1]</code>. Flip means changing <code style="user-select: auto;">'0'</code> to <code style="user-select: auto;">'1'</code> and <code style="user-select: auto;">'1'</code> to <code style="user-select: auto;">'0'</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of operations needed to make </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> equal to </em><code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = "10111"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Initially, s = "00000".
Choose index i = 2: "00<u style="user-select: auto;">000</u>" -&gt; "00<u style="user-select: auto;">111</u>"
Choose index i = 0: "<u style="user-select: auto;">00111</u>" -&gt; "<u style="user-select: auto;">11000</u>"
Choose index i = 1: "1<u style="user-select: auto;">1000</u>" -&gt; "1<u style="user-select: auto;">0111</u>"
We need at least 3 flip operations to form target.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = "101"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Initially, s = "000".
Choose index i = 0: "<u style="user-select: auto;">000</u>" -&gt; "<u style="user-select: auto;">111</u>"
Choose index i = 1: "1<u style="user-select: auto;">11</u>" -&gt; "1<u style="user-select: auto;">00</u>"
Choose index i = 2: "10<u style="user-select: auto;">0</u>" -&gt; "10<u style="user-select: auto;">1</u>"
We need at least 3 flip operations to form target.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = "00000"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> We do not need any operations since the initial s already equals target.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == target.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">target[i]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
</ul>
</div>