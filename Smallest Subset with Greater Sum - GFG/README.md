# Smallest Subset with Greater Sum
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array <strong style="user-select: auto;">Arr</strong> of size <strong style="user-select: auto;">N</strong> containing&nbsp;non-negative integers. Your task is to choose&nbsp;the <strong style="user-select: auto;">minimum</strong> number of elements such that their sum should be greater than the sum of the rest of the elements of the array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">N = 5</span>
<span style="font-size: 18px; user-select: auto;">Arr[] = {4,3,1,0,2}</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">2</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">If we just select 4 and 3 from the array, 
the sum will be (4+3) = 7 and the sum of 
the rest of the elements will be (2+0+1)=3. 
So, the answer will be 2. We can also 
select 4 and 2 as well.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">N = 4</span>
<span style="font-size: 18px; user-select: auto;">Arr = {3,6,0,2}</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">1</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation:</span></strong>
<span style="font-size: 18px; user-select: auto;">If we select element 6, the sum of the 
rest of the elements will be (3+0+2)=5. 
So the answer will be 1.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">minSubset()</strong>&nbsp;which takes the array&nbsp;<strong style="user-select: auto;">Arr[]</strong>&nbsp;and its size <strong style="user-select: auto;">N&nbsp;</strong>as inputs and returns the minimum number of elements to be selected.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N log N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= Arr[i] &lt;= 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
Sum of N over all test cases doesn't exceeds 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
Array may contain duplicate elements.&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>