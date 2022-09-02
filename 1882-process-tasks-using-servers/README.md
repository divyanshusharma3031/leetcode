<h2><a href="https://leetcode.com/problems/process-tasks-using-servers/">1882. Process Tasks Using Servers</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two <strong style="user-select: auto;">0-indexed</strong> integer arrays <code style="user-select: auto;">servers</code> and <code style="user-select: auto;">tasks</code> of lengths <code style="user-select: auto;">n</code>​​​​​​ and <code style="user-select: auto;">m</code>​​​​​​ respectively. <code style="user-select: auto;">servers[i]</code> is the <strong style="user-select: auto;">weight</strong> of the <code style="user-select: auto;">i<sup style="user-select: auto;">​​​​​​th</sup></code>​​​​ server, and <code style="user-select: auto;">tasks[j]</code> is the <strong style="user-select: auto;">time needed</strong> to process the <code style="user-select: auto;">j<sup style="user-select: auto;">​​​​​​th</sup></code>​​​​ task <strong style="user-select: auto;">in seconds</strong>.</p>

<p style="user-select: auto;">Tasks are assigned to the servers using a <strong style="user-select: auto;">task queue</strong>. Initially, all servers are free, and the queue is <strong style="user-select: auto;">empty</strong>.</p>

<p style="user-select: auto;">At second <code style="user-select: auto;">j</code>, the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> task is <strong style="user-select: auto;">inserted</strong> into the queue (starting with the <code style="user-select: auto;">0<sup style="user-select: auto;">th</sup></code> task being inserted at second <code style="user-select: auto;">0</code>). As long as there are free servers and the queue is not empty, the task in the front of the queue will be assigned to a free server with the <strong style="user-select: auto;">smallest weight</strong>, and in case of a tie, it is assigned to a free server with the <strong style="user-select: auto;">smallest index</strong>.</p>

<p style="user-select: auto;">If there are no free servers and the queue is not empty, we wait until a server becomes free and immediately assign the next task. If multiple servers become free at the same time, then multiple tasks from the queue will be assigned <strong style="user-select: auto;">in order of insertion</strong> following the weight and index priorities above.</p>

<p style="user-select: auto;">A server that is assigned task <code style="user-select: auto;">j</code> at second <code style="user-select: auto;">t</code> will be free again at second <code style="user-select: auto;">t + tasks[j]</code>.</p>

<p style="user-select: auto;">Build an array <code style="user-select: auto;">ans</code>​​​​ of length <code style="user-select: auto;">m</code>, where <code style="user-select: auto;">ans[j]</code> is the <strong style="user-select: auto;">index</strong> of the server the <code style="user-select: auto;">j<sup style="user-select: auto;">​​​​​​th</sup></code> task will be assigned to.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the array </em><code style="user-select: auto;">ans</code>​​​​.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> servers = [3,3,2], tasks = [1,2,3,2,1,2]
<strong style="user-select: auto;">Output:</strong> [2,2,0,2,1,2]
<strong style="user-select: auto;">Explanation: </strong>Events in chronological order go as follows:
- At second 0, task 0 is added and processed using server 2 until second 1.
- At second 1, server 2 becomes free. Task 1 is added and processed using server 2 until second 3.
- At second 2, task 2 is added and processed using server 0 until second 5.
- At second 3, server 2 becomes free. Task 3 is added and processed using server 2 until second 5.
- At second 4, task 4 is added and processed using server 1 until second 5.
- At second 5, all servers become free. Task 5 is added and processed using server 2 until second 7.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> servers = [5,1,4,3,2], tasks = [2,1,2,4,5,2,1]
<strong style="user-select: auto;">Output:</strong> [1,4,1,4,1,3,2]
<strong style="user-select: auto;">Explanation: </strong>Events in chronological order go as follows: 
- At second 0, task 0 is added and processed using server 1 until second 2.
- At second 1, task 1 is added and processed using server 4 until second 2.
- At second 2, servers 1 and 4 become free. Task 2 is added and processed using server 1 until second 4. 
- At second 3, task 3 is added and processed using server 4 until second 7.
- At second 4, server 1 becomes free. Task 4 is added and processed using server 1 until second 9. 
- At second 5, task 5 is added and processed using server 3 until second 7.
- At second 6, task 6 is added and processed using server 2 until second 7.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">servers.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">tasks.length == m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n, m &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= servers[i], tasks[j] &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>