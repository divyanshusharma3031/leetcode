# Binary Tree to CDLL
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree of<strong style="user-select: auto;"> N</strong> edges. The task is to convert this to a Circular Doubly Linked List(<strong style="user-select: auto;">CDLL</strong>) in-place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted CDLL. The order of nodes in CDLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (left most node in BT) must be head node of the CDLL.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp; &nbsp; 1
 &nbsp; &nbsp;/&nbsp; &nbsp;\
 &nbsp; 3&nbsp; &nbsp; &nbsp;2
<strong style="user-select: auto;">Output:
</strong>3 1 2&nbsp;
2 1 3<strong style="user-select: auto;">
Explanation: </strong>After converting tree to CDLL
when CDLL is is traversed from head to
tail and then tail to head, elements
are displayed as in the output.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp;&nbsp; 10
 &nbsp; /&nbsp; &nbsp; \
 &nbsp;20&nbsp; &nbsp; 30
 /&nbsp; \
40 &nbsp;60
<strong style="user-select: auto;">Output:
</strong>40 20 60 10 30&nbsp;
30 10 60 20 40<strong style="user-select: auto;">
Explanation:</strong>After converting tree to CDLL,
when CDLL is is traversed from head to
tail and then tail to head, elements
are displayed as in the output.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't have to take input. Complete the function <strong style="user-select: auto;">bTreeToCList()&nbsp;</strong>that takes root as a parameter and <strong style="user-select: auto;">returns </strong>the <strong style="user-select: auto;">head of the list</strong>. The printing is done by the driver code. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= Data of a node &lt;= 10<sup style="user-select: auto;">4</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected time complexity:&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected auxiliary space:&nbsp;</strong>O(h) , where h = height of tree</span></p>
 <p style="user-select: auto;"></p>
            </div>