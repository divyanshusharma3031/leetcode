<h2><a href="https://leetcode.com/problems/find-good-days-to-rob-the-bank/">2100. Find Good Days to Rob the Bank</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You and a gang of thieves are planning on robbing a bank. You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">security</code>, where <code style="user-select: auto;">security[i]</code> is the number of guards on duty on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> day. The days are numbered starting from <code style="user-select: auto;">0</code>. You are also given an integer <code style="user-select: auto;">time</code>.</p>

<p style="user-select: auto;">The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> day is a good day to rob the bank if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">There are at least <code style="user-select: auto;">time</code> days before and after the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> day,</li>
	<li style="user-select: auto;">The number of guards at the bank for the <code style="user-select: auto;">time</code> days <strong style="user-select: auto;">before</strong> <code style="user-select: auto;">i</code> are <strong style="user-select: auto;">non-increasing</strong>, and</li>
	<li style="user-select: auto;">The number of guards at the bank for the <code style="user-select: auto;">time</code> days <strong style="user-select: auto;">after</strong> <code style="user-select: auto;">i</code> are <strong style="user-select: auto;">non-decreasing</strong>.</li>
</ul>

<p style="user-select: auto;">More formally, this means day <code style="user-select: auto;">i</code> is a good day to rob the bank if and only if <code style="user-select: auto;">security[i - time] &gt;= security[i - time + 1] &gt;= ... &gt;= security[i] &lt;= ... &lt;= security[i + time - 1] &lt;= security[i + time]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of <strong style="user-select: auto;">all</strong> days <strong style="user-select: auto;">(0-indexed) </strong>that are good days to rob the bank</em>.<em style="user-select: auto;"> The order that the days are returned in does<strong style="user-select: auto;"> </strong><strong style="user-select: auto;">not</strong> matter.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> security = [5,3,3,3,5,6,2], time = 2
<strong style="user-select: auto;">Output:</strong> [2,3]
<strong style="user-select: auto;">Explanation:</strong>
On day 2, we have security[0] &gt;= security[1] &gt;= security[2] &lt;= security[3] &lt;= security[4].
On day 3, we have security[1] &gt;= security[2] &gt;= security[3] &lt;= security[4] &lt;= security[5].
No other days satisfy this condition, so days 2 and 3 are the only good days to rob the bank.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> security = [1,1,1,1,1], time = 0
<strong style="user-select: auto;">Output:</strong> [0,1,2,3,4]
<strong style="user-select: auto;">Explanation:</strong>
Since time equals 0, every day is a good day to rob the bank, so return every day.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> security = [1,2,3,4,5,6], time = 2
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong>
No day has 2 days before it that have a non-increasing number of guards.
Thus, no day is a good day to rob the bank, so return an empty list.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= security.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= security[i], time &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>