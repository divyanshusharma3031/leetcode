<h2><a href="https://leetcode.com/problems/airplane-seat-assignment-probability/">1227. Airplane Seat Assignment Probability</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><code style="user-select: auto;">n</code> passengers board an airplane with exactly <code style="user-select: auto;">n</code> seats. The first passenger has lost the ticket and picks a seat randomly. But after that, the rest of the passengers will:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Take their own seat if it is still available, and</li>
	<li style="user-select: auto;">Pick other seats randomly when they find their seat occupied</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the probability that the </em><code style="user-select: auto;">n<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> person gets his own seat</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 1.00000
<strong style="user-select: auto;">Explanation: </strong>The first person can only get the first seat.<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 0.50000
<strong style="user-select: auto;">Explanation: </strong>The second person has a probability of 0.5 to get the second seat (when first person gets the first seat).
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>