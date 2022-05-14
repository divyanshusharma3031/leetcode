# Maximize sum after K negations
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers of size <strong style="user-select: auto;">N</strong> and a number <strong style="user-select: auto;">K</strong>., Your must modify array <strong style="user-select: auto;">arr[]</strong> exactly <strong style="user-select: auto;">K</strong> number of times. Here modify array means in each operation you can replace any array element either <strong style="user-select: auto;">arr[i] </strong>by<strong style="user-select: auto;"> -arr[i]</strong> or <strong style="user-select: auto;">-arr[i] </strong>by<strong style="user-select: auto;"> arr[i]</strong>. You need to perform this operation in such a way that after K operations, the sum of the array must be maximum.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5, K = 1
arr[] = {1, 2, -3, 4, 5}
<strong style="user-select: auto;">Output:</strong>
15
<strong style="user-select: auto;">Explanation:
</strong>We have k=1 so we can change -3 to 3 and
sum all the elements to produce 15 as output.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 10, K = 5
arr[] = {5, -2, 5, -4, 5, -12, 5, 5, 5, 20}
<strong style="user-select: auto;">Output:</strong>
68
<strong style="user-select: auto;">Explanation:
</strong>Here  we have k=5 so we turn -2, -4, -12 to
2, 4, and 12 respectively. Since we have
performed 3 operations so k is now 2. To get
maximum sum of array we can turn positive
turned 2 into negative and then positive
again so k is 0. Now sum is
5+5+4+5+12+5+5+5+20+2 = 68</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You <strong style="user-select: auto;">don't</strong> have to print anything, print ting is done by the driver code itself. You have to complete the function <strong style="user-select: auto;">maximizeSum()</strong> which takes the array <strong style="user-select: auto;">A[]</strong>, its size <strong style="user-select: auto;">N</strong><strong style="user-select: auto;">, </strong>and an integer <strong style="user-select: auto;">K </strong>as inputs and returns the maximum possible sum.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N*logN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
<span style="background-color: transparent; color: rgb(0, 0, 0); font-family: arial; user-select: auto;">1 ≤ N,K ≤ 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="background-color: transparent; color: rgb(0, 0, 0); font-family: arial; user-select: auto;">-10<sup style="user-select: auto;">9</sup>&nbsp;≤ A<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">9</sup></span></span></p>
 <p style="user-select: auto;"></p>
            </div>