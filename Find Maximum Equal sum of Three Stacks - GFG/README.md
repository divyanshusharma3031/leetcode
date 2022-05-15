# Find Maximum Equal sum of Three Stacks
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given three stacks <strong style="user-select: auto;">S1</strong>, <strong style="user-select: auto;">S2</strong>, and <strong style="user-select: auto;">S3</strong> of the positive numbers, the task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed. Stacks are represented as an array, and the first index of the array represents the top element of the stack.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N1 = 3, N2 = 4, N3 = 2
S1 = {4,2,3}
S2 = {1,1,2,3}
S3= {1,4}<strong style="user-select: auto;">
Output:</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
</strong>5<strong style="user-select: auto;">
Explanation:
</strong>We can pop 1 element from the 1st stack, and 2
elements from the 2nd stack. Now remaining elements
yield the equal sum of the three stacks, that is 5.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
</strong>N1 =2, N2 = 1, N3 = 3
S1 = {4,7}</span><span style="font-size: 18px; user-select: auto;">
S2 = {10}
S3 = {1,2,3}<strong style="user-select: auto;">
Output:
</strong>0<strong style="user-select: auto;">
Explanation:
</strong>We will never get an equal sum after popping
some elements, so the answer will be 0.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">maxEqualSum()</strong>&nbsp;which takes the arrays <strong style="user-select: auto;">S1[], S2[], </strong>and<strong style="user-select: auto;"> S3[]</strong>&nbsp;and their&nbsp;sizes&nbsp;<strong style="user-select: auto;">N1, N2, </strong>and<strong style="user-select: auto;"> N3&nbsp;</strong>as inputs and returns the maximum equal sum we can obtain.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N1, N2, N3 &lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= S1[i],&nbsp;S2[i], S3[i] &lt;= 10<sup style="user-select: auto;">3</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Sum of N over all test cases doesn't exceeds 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>