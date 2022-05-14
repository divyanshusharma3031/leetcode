# Swap and Maximize
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">a[ ]</strong> of&nbsp;<strong style="user-select: auto;">N</strong>&nbsp;elements. Consider array as a circular array <em style="user-select: auto;">i.e.</em> element after <strong style="user-select: auto;">a<sub style="user-select: auto;">n</sub></strong>&nbsp;is <strong style="user-select: auto;">a<sub style="user-select: auto;">1</sub></strong>. The task is to find maximum sum of the absolute difference between consecutive elements with rearrangement of array elements allowed <em style="user-select: auto;">i.e</em>. after any rearrangement of array elements find <strong style="user-select: auto;">|a<sub style="user-select: auto;">1</sub>&nbsp;– a<sub style="user-select: auto;">2</sub>| + |a<sub style="user-select: auto;">2</sub>&nbsp;– a<sub style="user-select: auto;">3</sub>| + …… + |a<sub style="user-select: auto;">n-1&nbsp;</sub>–&nbsp;a<sub style="user-select: auto;">n</sub>| + |a<sub style="user-select: auto;">n</sub>&nbsp;– a<sub style="user-select: auto;">1</sub>|</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
a[] = {4, 2, 1, 8}
<strong style="user-select: auto;">Output:</strong> 
18
<strong style="user-select: auto;">Explanation</strong>: Rearrangement done is {1, 8, 
2, 4}. Sum of absolute difference between 
consecutive elements after rearrangement = 
|1 - 8| + |8 - 2| + |2 - 4| + |4 - 1| = 
7 + 6 + 2 + 3 = 18.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
a[] = {10, 12}
<strong style="user-select: auto;">Output:</strong> 
4
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong style="user-select: auto;">maxSum</strong>() that takes <strong style="user-select: auto;">array a[ ]</strong>&nbsp;and its size<strong style="user-select: auto;">&nbsp;N</strong> as input parameters and return the maximum sum using above method.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ N ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>