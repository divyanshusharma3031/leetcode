<h2><a href="https://leetcode.com/problems/number-of-burgers-with-no-waste-of-ingredients/">1276. Number of Burgers with No Waste of Ingredients</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integers <code style="user-select: auto;">tomatoSlices</code> and <code style="user-select: auto;">cheeseSlices</code>. The ingredients of different burgers are as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Jumbo Burger:</strong> <code style="user-select: auto;">4</code> tomato slices and <code style="user-select: auto;">1</code> cheese slice.</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Small Burger:</strong> <code style="user-select: auto;">2</code> Tomato slices and <code style="user-select: auto;">1</code> cheese slice.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">[total_jumbo, total_small]</code> so that the number of remaining <code style="user-select: auto;">tomatoSlices</code> equal to <code style="user-select: auto;">0</code> and the number of remaining <code style="user-select: auto;">cheeseSlices</code> equal to <code style="user-select: auto;">0</code>. If it is not possible to make the remaining <code style="user-select: auto;">tomatoSlices</code> and <code style="user-select: auto;">cheeseSlices</code> equal to <code style="user-select: auto;">0</code> return <code style="user-select: auto;">[]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tomatoSlices = 16, cheeseSlices = 7
<strong style="user-select: auto;">Output:</strong> [1,6]
<strong style="user-select: auto;">Explantion:</strong> To make one jumbo burger and 6 small burgers we need 4*1 + 2*6 = 16 tomato and 1 + 6 = 7 cheese.
There will be no remaining ingredients.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tomatoSlices = 17, cheeseSlices = 4
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explantion:</strong> There will be no way to use all ingredients to make small and jumbo burgers.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tomatoSlices = 4, cheeseSlices = 17
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explantion:</strong> Making 1 jumbo burger there will be 16 cheese remaining and making 2 small burgers there will be 15 cheese remaining.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= tomatoSlices, cheeseSlices &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
</ul>
</div>