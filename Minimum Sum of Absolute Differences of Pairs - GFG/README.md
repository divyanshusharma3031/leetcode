# Minimum Sum of Absolute Differences of Pairs
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given two arrays <strong style="user-select: auto;">A</strong>&nbsp;and <strong style="user-select: auto;">B</strong>&nbsp;of equal length <strong style="user-select: auto;">N</strong>. Your task is to pair each element of array <strong style="user-select: auto;">A</strong>&nbsp;to an element in array <strong style="user-select: auto;">B</strong>, such that the sum&nbsp;of the&nbsp;<strong style="user-select: auto;">absolute differences </strong>of all the pairs<strong style="user-select: auto;"> </strong>is<strong style="user-select: auto;"> minimum.</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">N = 4</span>
<span style="font-size: 18px; user-select: auto;">A = {4,1,8,7}</span>
<span style="font-size: 18px; user-select: auto;">B = {2,3,6,5}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">6</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">If we take the pairings as (1,2), (4,3),
(7,5), and (8,6), the sum will be S =
|1 - 2| + |4 - 3| + |7 - 5| + |8 - 6| = 6.
It can be shown that this is the minimum sum we can get.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">N = 3</span>
<span style="font-size: 18px; user-select: auto;">A = {4,1,2}</span>
<span style="font-size: 18px; user-select: auto;">B = {2,4,1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">0</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">If we take the pairings as (4,4), (1,1), and
(2,2), the sum will be S = |4 - 4| + |1 - 1| +
|2 - 2| = 0. It can be shown that this is the
minimum sum we can get.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">findMinSum()</strong>&nbsp;which takes the arrays&nbsp;<strong style="user-select: auto;">A[], B[],</strong>&nbsp;and its size <strong style="user-select: auto;">N&nbsp;</strong>as inputs and returns the <strong style="user-select: auto;">minimum</strong> sum of the absolute differences of the pairs.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= A[i] &lt;= 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
0 &lt;= B[i] &lt;= 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
Sum of N over all test cases doesn't exceeds 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>