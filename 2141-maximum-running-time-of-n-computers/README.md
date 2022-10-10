<h2><a href="https://leetcode.com/problems/maximum-running-time-of-n-computers/">2141. Maximum Running Time of N Computers</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> computers. You are given the integer <code style="user-select: auto;">n</code> and a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">batteries</code> where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> battery can <strong style="user-select: auto;">run</strong> a computer for <code style="user-select: auto;">batteries[i]</code> minutes. You are interested in running <strong style="user-select: auto;">all</strong> <code style="user-select: auto;">n</code> computers <strong style="user-select: auto;">simultaneously</strong> using the given batteries.</p>

<p style="user-select: auto;">Initially, you can insert <strong style="user-select: auto;">at most one battery</strong> into each computer. After that and at any integer time moment, you can remove a battery from a computer and insert another battery <strong style="user-select: auto;">any number of times</strong>. The inserted battery can be a totally new battery or a battery from another computer. You may assume that the removing and inserting processes take no time.</p>

<p style="user-select: auto;">Note that the batteries cannot be recharged.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of minutes you can run all the </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> computers simultaneously.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/01/06/example1-fit.png" style="width: 762px; height: 150px; user-select: auto;">
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, batteries = [3,3,3]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
Initially, insert battery 0 into the first computer and battery 1 into the second computer.
After two minutes, remove battery 1 from the second computer and insert battery 2 instead. Note that battery 1 can still run for one minute.
At the end of the third minute, battery 0 is drained, and you need to remove it from the first computer and insert battery 1 instead.
By the end of the fourth minute, battery 1 is also drained, and the first computer is no longer running.
We can run the two computers simultaneously for at most 4 minutes, so we return 4.

<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/01/06/example2.png" style="width: 629px; height: 150px; user-select: auto;">
<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, batteries = [1,1,1,1]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 
Initially, insert battery 0 into the first computer and battery 2 into the second computer. 
After one minute, battery 0 and battery 2 are drained so you need to remove them and insert battery 1 into the first computer and battery 3 into the second computer. 
After another minute, battery 1 and battery 3 are also drained so the first and second computers are no longer running.
We can run the two computers simultaneously for at most 2 minutes, so we return 2.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= batteries.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= batteries[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>