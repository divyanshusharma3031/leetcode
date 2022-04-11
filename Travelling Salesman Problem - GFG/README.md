# Travelling Salesman Problem
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a matrix cost&nbsp;of size n&nbsp;where cost[i][j] denotes the cost of moving from city i to city j. Your task is to complete a tour from the city 0 (0 based index)&nbsp;to all other cities such that you visit each city atmost once and then at the end come back to city 0 in min cost.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>cost = {{0,111},{112,0}}
<strong style="user-select: auto;">Output: </strong>223
<strong style="user-select: auto;">Explanation: </strong>We can visit 0-&gt;1-&gt;0 and 
cost = 111 + 112.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>cost = {{0,1000,5000},{5000,0,1000},
{1000,5000,0}}
<strong style="user-select: auto;">Output: </strong>3000
<strong style="user-select: auto;">Explanation: </strong>We can visit 0-&gt;1-&gt;2-&gt;0 and cost 
= 1000+1000+1000 = 3000</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anyhting. Your task is to complete the function&nbsp;<strong style="user-select: auto;">total_cost()&nbsp;</strong>which takes cost as input parameter and returns the total cost to visit each city exactly once starting from city 0 and again comback to city 0.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(2<sup style="user-select: auto;">n</sup>&nbsp;* n<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Compelxity:&nbsp;</strong>O(2<sup style="user-select: auto;">n</sup>&nbsp;* n)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 10<br style="user-select: auto;">
1 &lt;= cost[i][j] &lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>