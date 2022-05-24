# Array Partition
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an&nbsp;array of <strong style="user-select: auto;">N</strong> integers, you have to find if it is possible to partition the array with following rules:</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each element should belong to exactly one partition.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Each partition should have atleast <strong style="user-select: auto;">K</strong> elements.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Absolute difference between any pair of elements in the same partition should not exceed <strong style="user-select: auto;">M</strong>.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5
K = 2
M = 3
A[] = {8, 3, 9, 1, 2}
<strong style="user-select: auto;">Output:</strong>
YES
<strong style="user-select: auto;">Explanation</strong>:
We can partition the array into two 
partitions: {8, 9} and {3, 1, 2} such that
all rules are satisfied.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">partitionArray()</strong>&nbsp;which takes the number of elements&nbsp;<strong style="user-select: auto;">N,</strong>&nbsp;integer <strong style="user-select: auto;">K,</strong>&nbsp;integer <strong style="user-select: auto;">M&nbsp;</strong>and array&nbsp;<strong style="user-select: auto;">A[ ]</strong>&nbsp;as input parameters&nbsp;and returns true if we can partition the array such that all rules are satisfied, else returns false.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N * Log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N&nbsp;≤ 2*10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ K&nbsp;≤ N<br style="user-select: auto;">
1 ≤ M&nbsp;≤ 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
1 ≤ A[i]&nbsp;≤ 10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>