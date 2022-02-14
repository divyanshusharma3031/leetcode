# Search a node in BST
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a <strong style="user-select: auto;">Binary Search Tree </strong>and a node value X, find if the node with value X is present in the BST or not.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>         2
                \
&nbsp;                81 
&nbsp;              /    \ 
&nbsp;            42      87 
&nbsp;             \       \ 
&nbsp;              66      90 
&nbsp;             / 
&nbsp;           45
X = 87
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>As 87 is present in the
given nodes , so the output will be
1.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>      6
&nbsp;            \ 
&nbsp;             7 
&nbsp;            / \ 
&nbsp;           8   9
X = 11
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>As 11 is not present in 
the given nodes , so the output will
be 0.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function<strong style="user-select: auto;">search()</strong>which returns <strong style="user-select: auto;">true </strong>if the node with <strong style="user-select: auto;">value x</strong> is <strong style="user-select: auto;">present </strong>in the BST<strong style="user-select: auto;">else returns false</strong>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>O(Height of the BST)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>O(1).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>