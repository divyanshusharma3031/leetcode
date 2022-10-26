# The Smurfs
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A geek once visited a magical island where he found a special creature. He named it as&nbsp;Smurf. He noticed a very strange thing there. The&nbsp;smurfs&nbsp;resembled the primary colors of light. To make it more clear, the primary colors of light are <strong style="user-select: auto;">Red</strong>(R), <strong style="user-select: auto;">Green</strong>(G), and <strong style="user-select: auto;">Blue</strong>(B). He talked to one of the&nbsp;smurfs. The&nbsp;smurfs&nbsp;came to know that he is a good programmer. The&nbsp;smurfs&nbsp;suggested a deal that they will ask him one question and if he is able to answer that question, they will allow the geek to take anything from the island.<br style="user-select: auto;">
The question is as follows:<br style="user-select: auto;">
The&nbsp;smurfs&nbsp;possess a very magical property. When two&nbsp;smurfs&nbsp;of different colors meet with other, they gets converted into a&nbsp;smurf&nbsp;of the third color. How many minimum number of&nbsp;smurfs&nbsp;will be remaining after this transformation? The question looked simple to geek. However, the&nbsp;smurfs&nbsp;put another constraint to make the geek think more. The two&nbsp;smurfs&nbsp;must be adjacent to each other &nbsp;to make the transformation take place. There are <strong style="user-select: auto;">n</strong> smurfs the colors of which are given in an array <strong style="user-select: auto;">a[]</strong>.</span></p>

<p dir="ltr" style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5
a = {'R' , 'G', 'B', 'R', 'B'}
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explaination:</strong> First 'R' and 'G' makes 'B'. 
Then 'B' and 'R' makes 'G' and that 'G' 
with 'B' at index 2 makes 'R', Now the 'R' 
and the last 'B' makes 'G'.</span></pre>

<p dir="ltr" style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
a = {'R', 'R'}
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explaination:</strong> There are two 'R' s. So 
they cannot change to anything else.</span></pre>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">findMin()</strong> which takes n and a as input parameters and retunrs the minimum number of smurfs existing at the end.</span></p>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 1000&nbsp;&nbsp;</span></p>
</div>