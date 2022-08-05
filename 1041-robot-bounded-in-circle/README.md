<h2><a href="https://leetcode.com/problems/robot-bounded-in-circle/">1041. Robot Bounded In Circle</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">On an infinite plane, a robot initially stands at <code style="user-select: auto;">(0, 0)</code> and faces north. Note that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The <strong style="user-select: auto;">north direction</strong> is the positive direction of the y-axis.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">south direction</strong> is the negative direction of the y-axis.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">east direction</strong> is the positive direction of the x-axis.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">west direction</strong> is the negative direction of the x-axis.</li>
</ul>

<p style="user-select: auto;">The robot can receive one of three instructions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"G"</code>: go straight 1 unit.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"L"</code>: turn 90 degrees to the left (i.e., anti-clockwise direction).</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"R"</code>: turn 90 degrees to the right (i.e., clockwise direction).</li>
</ul>

<p style="user-select: auto;">The robot performs the <code style="user-select: auto;">instructions</code> given in order, and repeats them forever.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> if and only if there exists a circle in the plane such that the robot never leaves the circle.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> instructions = "GGLLGG"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The robot is initially at (0, 0) facing the north direction.
"G": move one step. Position: (0, 1). Direction: North.
"G": move one step. Position: (0, 2). Direction: North.
"L": turn 90 degrees anti-clockwise. Position: (0, 2). Direction: West.
"L": turn 90 degrees anti-clockwise. Position: (0, 2). Direction: South.
"G": move one step. Position: (0, 1). Direction: South.
"G": move one step. Position: (0, 0). Direction: South.
Repeating the instructions, the robot goes into the cycle: (0, 0) --&gt; (0, 1) --&gt; (0, 2) --&gt; (0, 1) --&gt; (0, 0).
Based on that, we return true.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> instructions = "GG"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The robot is initially at (0, 0) facing the north direction.
"G": move one step. Position: (0, 1). Direction: North.
"G": move one step. Position: (0, 2). Direction: North.
Repeating the instructions, keeps advancing in the north direction and does not go into cycles.
Based on that, we return false.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> instructions = "GL"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The robot is initially at (0, 0) facing the north direction.
"G": move one step. Position: (0, 1). Direction: North.
"L": turn 90 degrees anti-clockwise. Position: (0, 1). Direction: West.
"G": move one step. Position: (-1, 1). Direction: West.
"L": turn 90 degrees anti-clockwise. Position: (-1, 1). Direction: South.
"G": move one step. Position: (-1, 0). Direction: South.
"L": turn 90 degrees anti-clockwise. Position: (-1, 0). Direction: East.
"G": move one step. Position: (0, 0). Direction: East.
"L": turn 90 degrees anti-clockwise. Position: (0, 0). Direction: North.
Repeating the instructions, the robot goes into the cycle: (0, 0) --&gt; (0, 1) --&gt; (-1, 1) --&gt; (-1, 0) --&gt; (0, 0).
Based on that, we return true.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= instructions.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">instructions[i]</code> is <code style="user-select: auto;">'G'</code>, <code style="user-select: auto;">'L'</code> or, <code style="user-select: auto;">'R'</code>.</li>
</ul>
</div>