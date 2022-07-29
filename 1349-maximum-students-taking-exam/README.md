<h2><a href="https://leetcode.com/problems/maximum-students-taking-exam/">1349. Maximum Students Taking Exam</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">m&nbsp;* n</code>&nbsp;matrix <code style="user-select: auto;">seats</code>&nbsp;&nbsp;that represent seats distributions&nbsp;in a classroom.&nbsp;If a seat&nbsp;is&nbsp;broken, it is denoted by <code style="user-select: auto;">'#'</code> character otherwise it is denoted by a <code style="user-select: auto;">'.'</code> character.</p>

<p style="user-select: auto;">Students can see the answers of those sitting next to the left, right, upper left and upper right, but he cannot see the answers of the student sitting&nbsp;directly in front or behind him. Return the <strong style="user-select: auto;">maximum </strong>number of students that can take the exam together&nbsp;without any cheating being possible..</p>

<p style="user-select: auto;">Students must be placed in seats in good condition.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img height="200" src="https://assets.leetcode.com/uploads/2020/01/29/image.png" width="339" style="user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> seats = [["#",".","#","#",".","#"],
&nbsp;               [".","#","#","#","#","."],
&nbsp;               ["#",".","#","#",".","#"]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Teacher can place 4 students in available seats so they don't cheat on the exam. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> seats = [[".","#"],
&nbsp;               ["#","#"],
&nbsp;               ["#","."],
&nbsp;               ["#","#"],
&nbsp;               [".","#"]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Place all students in available seats. 

</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> seats = [["#",".","<strong style="user-select: auto;">.</strong>",".","#"],
&nbsp;               ["<strong style="user-select: auto;">.</strong>","#","<strong style="user-select: auto;">.</strong>","#","<strong style="user-select: auto;">.</strong>"],
&nbsp;               ["<strong style="user-select: auto;">.</strong>",".","#",".","<strong style="user-select: auto;">.</strong>"],
&nbsp;               ["<strong style="user-select: auto;">.</strong>","#","<strong style="user-select: auto;">.</strong>","#","<strong style="user-select: auto;">.</strong>"],
&nbsp;               ["#",".","<strong style="user-select: auto;">.</strong>",".","#"]]
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> Place students in available seats in column 1, 3 and 5.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">seats</code>&nbsp;contains only characters&nbsp;<code style="user-select: auto;">'.'<font face="sans-serif, Arial, Verdana, Trebuchet MS" style="user-select: auto;">&nbsp;and</font></code><code style="user-select: auto;">'#'.</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">m ==&nbsp;seats.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n ==&nbsp;seats[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= 8</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 8</code></li>
</ul>
</div>