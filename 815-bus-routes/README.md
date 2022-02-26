<h2><a href="https://leetcode.com/problems/bus-routes/">815. Bus Routes</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">routes</code> representing bus routes where <code style="user-select: auto;">routes[i]</code> is a bus route that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> bus repeats forever.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">routes[0] = [1, 5, 7]</code>, this means that the <code style="user-select: auto;">0<sup style="user-select: auto;">th</sup></code> bus travels in the sequence <code style="user-select: auto;">1 -&gt; 5 -&gt; 7 -&gt; 1 -&gt; 5 -&gt; 7 -&gt; 1 -&gt; ...</code> forever.</li>
</ul>

<p style="user-select: auto;">You will start at the bus stop <code style="user-select: auto;">source</code> (You are not on any bus initially), and you want to go to the bus stop <code style="user-select: auto;">target</code>. You can travel between bus stops by buses only.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the least number of buses you must take to travel from </em><code style="user-select: auto;">source</code><em style="user-select: auto;"> to </em><code style="user-select: auto;">target</code>. Return <code style="user-select: auto;">-1</code> if it is not possible.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> routes = [[1,2,7],[3,6,7]], source = 1, target = 6
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The best strategy is take the first bus to the bus stop 7, then take the second bus to the bus stop 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> routes = [[7,12],[4,5,15],[6],[15,19],[9,12,13]], source = 15, target = 12
<strong style="user-select: auto;">Output:</strong> -1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= routes.length &lt;= 500</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= routes[i].length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">routes[i]</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">sum(routes[i].length) &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= routes[i][j] &lt; 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= source, target &lt; 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>