# Image Multiplication
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given a binary tree. Your task is pretty straightforward. You have to find the sum of the product of each node and its mirror image (The mirror of a node is a node which exists at the mirror position of the node in opposite subtree at the root.). Don’t take into account a pair more than once. The root node is the mirror image of itself.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">      4         </span>
<span style="font-size: 18px; user-select: auto;">    /    \</span>
<span style="font-size: 18px; user-select: auto;">   5      6</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">46</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">Sum = (4*4) + (5*6) = 46</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">                       1                 </span>
<span style="font-size: 18px; user-select: auto;">                   /        \</span>
<span style="font-size: 18px; user-select: auto;">                 3            2</span>
        <span style="font-size: 18px; user-select: auto;">          /  \         /  \</span>
<span style="font-size: 18px; user-select: auto;">              7     6       5    4</span>
<span style="font-size: 18px; user-select: auto;">            /   \    \     /  \    \</span>
<span style="font-size: 18px; user-select: auto;">          11    10    15  9    8    12</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">332</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">Sum = (1*1) + (3*2) + (7*4) + (6*5) + (11*12) + (15*9) = 332</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You need to&nbsp;<strong style="user-select: auto;">complete&nbsp;</strong>the&nbsp;<strong style="user-select: auto;">function imgMultiply()&nbsp;</strong>that takes&nbsp;<strong style="user-select: auto;">root&nbsp;</strong>as&nbsp;<strong style="user-select: auto;">parameter&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">returns&nbsp;</strong>the&nbsp;<strong style="user-select: auto;">required sum</strong>.The answer may be very large, compute the answer modulo 10<sup style="user-select: auto;">9</sup>&nbsp;+ 7.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(Number of nodes).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= Data of a node &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>