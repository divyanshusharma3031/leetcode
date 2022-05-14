# Maximize sum(arr[i]*i) of an Array
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;">Given an array <strong style="user-select: auto;">A</strong> of&nbsp;<strong style="user-select: auto;">N</strong>&nbsp;integers. Your task is to write a program to find the maximum value of <strong style="user-select: auto;">∑arr[i]*i</strong>, where i = 0, 1, 2,…., n – 1.<br style="user-select: auto;">
You are allowed to rearrange the elements of the array.<br style="user-select: auto;">
<strong style="user-select: auto;">Note</strong>: Since output could be large, hence module 10<sup style="user-select: auto;">9</sup>+7 and then print answer.</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> Arr[] = {5, 3, 2, 4, 1}
<strong style="user-select: auto;">Output :</strong> 40
<strong style="user-select: auto;">Explanation:
</strong>If we arrange the array as 1 2 3 4 5 then 
we can see that the minimum index will multiply
with minimum number and maximum index will 
multiply with maximum number. 
So 1*0+2*1+3*2+4*3+5*4=0+2+6+12+20 = 40 mod(10<sup style="user-select: auto;">9</sup>+7) = 40

</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> Arr[] = {1, 2, 3}
<strong style="user-select: auto;">Output :</strong> 8

</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">Maximize() </strong>that takes an&nbsp;<em style="user-select: auto;">array <strong style="user-select: auto;">(arr)</strong></em><strong style="user-select: auto;">, </strong><em style="user-select: auto;">sizeOfArray <strong style="user-select: auto;">(n)</strong></em><strong style="user-select: auto;">,</strong>&nbsp;and return the maximum value of an array. The<strong style="user-select: auto;"> driver code </strong>takes care of the <strong style="user-select: auto;">printing</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(nlog(n)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">7</sup><br style="user-select: auto;">
1 ≤ A<sub style="user-select: auto;">i</sub> ≤ N</span></span></p>
 <p style="user-select: auto;"></p>
            </div>