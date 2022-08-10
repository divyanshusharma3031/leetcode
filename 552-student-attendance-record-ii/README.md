<h2><a href="https://leetcode.com/problems/student-attendance-record-ii/">552. Student Attendance Record II</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">An attendance record for a student can be represented as a string where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">'A'</code>: Absent.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'L'</code>: Late.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'P'</code>: Present.</li>
</ul>

<p style="user-select: auto;">Any student is eligible for an attendance award if they meet <strong style="user-select: auto;">both</strong> of the following criteria:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The student was absent (<code style="user-select: auto;">'A'</code>) for <strong style="user-select: auto;">strictly</strong> fewer than 2 days <strong style="user-select: auto;">total</strong>.</li>
	<li style="user-select: auto;">The student was <strong style="user-select: auto;">never</strong> late (<code style="user-select: auto;">'L'</code>) for 3 or more <strong style="user-select: auto;">consecutive</strong> days.</li>
</ul>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of possible attendance records of length</em> <code style="user-select: auto;">n</code><em style="user-select: auto;"> that make a student eligible for an attendance award. The answer may be very large, so return it <strong style="user-select: auto;">modulo</strong> </em><code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> There are 8 records with length 2 that are eligible for an award:
"PP", "AP", "PA", "LP", "PL", "AL", "LA", "LL"
Only "AA" is not eligible because there are 2 absences (there need to be fewer than 2).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 10101
<strong style="user-select: auto;">Output:</strong> 183236316
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>