# Check if all levels of two trees are anagrams or not
## Hard
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two binary trees, the task is&nbsp;to check if each of their levels are anagrams of each other or not.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/abc-1649622345.gif" style="height: 173px; width: 366px; user-select: auto;">
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation:</strong> 
<strong style="user-select: auto;">Tree 1:</strong>
Level 0 : 1
Level 1 : 3, 2
Level 2 : 5, 4

<strong style="user-select: auto;">Tree 2:</strong>
Level 0 : 1
Level 1 : 2, 3
Level 2 : 4, 5

As we can clearly see all the levels of above two binary trees 
are anagrams of each other, hence return true.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
<img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20221119111710/WhatsAppImage20221119at111602AM.jpeg" style="height: 253px; width: 573px; user-select: auto;">
Output: 0</strong>
<strong style="user-select: auto;">Explanation:</strong> 
<strong style="user-select: auto;">Tree 1:
</strong>Level 0 : 1
Level 1 : 2, 3 
Level 2 : 5, 4 

<strong style="user-select: auto;">Tree 2:</strong> 
Level 0 : 1 
Level 1 : 2, 4 
Level 2 : 5, 3 

As we can clearly see that level 1 and leve 2 are not anagrams of each other, hence return false.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">areAnagrams</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes the root of two trees as input&nbsp;and returns an 1 if all the levels are anagrams, else returns 0&nbsp;as output.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(NlogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= tree.val &lt;= 10<sup style="user-select: auto;">9</sup></span></p>
</div>