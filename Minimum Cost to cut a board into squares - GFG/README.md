# Minimum Cost to cut a board into squares
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A board of length <strong style="user-select: auto;">M</strong>&nbsp;and width <strong style="user-select: auto;">N</strong>&nbsp;is given.&nbsp;The task is&nbsp;to break this board into <strong style="user-select: auto;">M * N</strong>&nbsp;squares such that cost of breaking is minimum. The cutting cost for each edge will be given for the board in two arrays <strong style="user-select: auto;">X[]</strong>&nbsp;and <strong style="user-select: auto;">Y[]</strong>. In short, you&nbsp;need to choose such a sequence of cutting such that cost is minimized. Return the minimized cost.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
M = 6. N = 4</strong>
X[] = {2, 1, 3, 1, 4}
Y[] = {4, 1, 2}
<strong style="user-select: auto;">Output: </strong>42
<strong style="user-select: auto;">Explanation:</strong> 
<img alt="" src="https://media.geeksforgeeks.org/img-practice/board-1646284249.png" style="height: 200px; width: 300px; user-select: auto;" class="img-responsive">
For above board optimal way to cut into square is:
Total minimum cost in above case is 42. It is 
evaluated using following steps.
Initial Value : Total_cost = 0
Total_cost = Total_cost + edge_cost * total_pieces
Cost 4 Horizontal cut:      Cost = 0 + 4*1 = 4
Cost 4 Vertical cut:        Cost = 4 + 4*2 = 12
Cost 3 Vertical cut:        Cost = 12 + 3*2 = 18
Cost 2 Horizontal cut:      Cost = 18 + 2*3 = 24
Cost 2 Vertical cut:        Cost = 24 + 2*3 = 30
Cost 1 Horizontal cut:      Cost = 30 + 1*4 = 34
Cost 1 Vertical cut:        Cost = 34 + 1*4 = 38
Cost 1 Vertical cut:        Cost = 38 + 1*4 = 42
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">minimumCostOfBreaking</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes a&nbsp;string S&nbsp;and returns an integer as output.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(NlogN + MlogM)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 &lt;= N, M&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>