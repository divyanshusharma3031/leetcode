# Bit Difference
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given two numbers <strong style="user-select: auto;">A</strong> and <strong style="user-select: auto;">B</strong>. The task is&nbsp;to <strong style="user-select: auto;">count the number of bits needed to be flipped </strong>to <strong style="user-select: auto;">convert </strong>A to B.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1</strong></span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>A = 10, B = 20
<strong style="user-select: auto;">Output</strong>: 4
<strong style="user-select: auto;">Explanation</strong>:
A &nbsp;= 01010
B &nbsp;= 10100
As we can see, the bits of A that need 
to be flipped are <strong style="user-select: auto;">0101</strong>0. If we flip 
these bits, we get 10100, which is B.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: A = 20, B = 25
<strong style="user-select: auto;">Output</strong>: 3
<strong style="user-select: auto;">Explanation</strong>:
A &nbsp;= 10100
B &nbsp;= 11001
As we can see, the bits of A that need 
to be flipped are 1<strong style="user-select: auto;">01</strong>0<strong style="user-select: auto;">0</strong>. If we flip 
these bits, we get 11001, which is B.</span>

</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;</strong>The task is to complete the function <strong style="user-select: auto;">countBitsFlip</strong>() that <strong style="user-select: auto;">takes A and B</strong> as parameters and <strong style="user-select: auto;">returns </strong>the <strong style="user-select: auto;">count </strong>of the <strong style="user-select: auto;">number of bits to be flipped</strong> to convert<strong style="user-select: auto;"> A to B</strong>.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(log N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ A, B ≤ 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>