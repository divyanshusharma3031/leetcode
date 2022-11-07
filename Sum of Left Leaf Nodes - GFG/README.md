# Sum of Left Leaf Nodes
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree of size&nbsp;<strong style="user-select: auto;">N. </strong>Find&nbsp;the sum of all the&nbsp;leaf nodes that are left&nbsp;child of their parent&nbsp;of the given binary tree.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
&nbsp;      </strong>1
&nbsp;    /   \
&nbsp;   2     3<strong style="user-select: auto;">
Output: </strong>2
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong> : 
         1
        /  \
       2    3
     /  \     \
    4    5     8 
  /  \        /  \
 7    2      6    9
<strong style="user-select: auto;">Output</strong>: 13
<strong style="user-select: auto;">Explanation:
</strong>sum = 6 + 7 = 13</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">leftLeavesSum()</strong>&nbsp;which takes the root node of the tree as input and returns the sum of all the left leaf nodes present in the given binary tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=Number of nodes&lt;=10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong>The&nbsp;<strong style="user-select: auto;">Input/Ouput</strong>&nbsp;format and&nbsp;<strong style="user-select: auto;">Example</strong>&nbsp;given are used for system's internal purpose, and should be used by a user for&nbsp;<strong style="user-select: auto;">Expected Output</strong>&nbsp;only. As it is function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
</div>