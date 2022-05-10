# Maximum product subset of an array
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A[]</strong>. The task&nbsp;is to find the maximum product possible with the subset of elements present in the array. The maximum product can be a single element also.<br style="user-select: auto;">
Since the product can be large, return it modulo&nbsp;(10<sup style="user-select: auto;">9</sup>&nbsp;+ 7).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
A[] = {-1, -1, -2, 4, 3}
<strong style="user-select: auto;">Output: </strong>24
<strong style="user-select: auto;">Explanation:</strong> Maximum product will be ( -2 * -1 * 4 * 3 ) = 24

</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
A[] = {-1, 0}
<strong style="user-select: auto;">Output: </strong>0
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">findMaxProduct</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes an array of size <strong style="user-select: auto;">N</strong>&nbsp;and returns an integer.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 2 * 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
-10&nbsp;&lt;= A[i] &lt;= 10</span></p>
 <p style="user-select: auto;"></p>
            </div>