# Shop in Candy Store
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In a candy store, there are <strong style="user-select: auto;">N</strong> different types of candies available and the prices of all the N different types of candies are provided to you.<br style="user-select: auto;">
You are now provided with an attractive offer.<br style="user-select: auto;">
You can buy a single candy from the store and get at most <strong style="user-select: auto;">K</strong> other candies ( all are different types ) for free.<br style="user-select: auto;">
Now you have to answer two questions. Firstly, you have to find what is the <strong style="user-select: auto;">minimum amount of money</strong> you have to spend to buy all the<strong style="user-select: auto;"> N </strong>different candies. Secondly, you have to find what is the <strong style="user-select: auto;">maximum amount of money</strong> you have to spend to buy all the N different candies.<br style="user-select: auto;">
In both the cases you must utilize the offer i.e. you buy one candy and get <strong style="user-select: auto;">K </strong>other candies for free.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4
K = 2
candies[] = {3 2 1 4}</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
3 7</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
As according to the offer if you buy 
one candy you can take at most two 
more for free. So in the first case, 
you buy the candy which costs 1 and 
takes candies worth 3 and 4 for free, 
also you buy candy worth 2 as well.
So <strong style="user-select: auto;">min cost</strong> : 1+2 =3.
In the second case, you can buy the 
candy which costs 4 and takes candies 
worth 1 and 2 for free, also you need 
to buy candy worth 3 as well. 
So <strong style="user-select: auto;">max cost :</strong> 3+4 =7.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> </span>
<span style="font-size: 18px; user-select: auto;">N = 5
K = 4</span>
<span style="font-size: 18px; user-select: auto;">candies[] = {3 2 1 4 5}
</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
Output:</strong> </span>
<span style="font-size: 18px; user-select: auto;">1 5

<strong style="user-select: auto;">Explanation:
</strong></span><span style="font-size: 18px; user-select: auto;">For minimimum cost buy the candy with
the cost 1 and get all the other candies
for free.
For maximum cost buy the candy with
the cost 5 and get all other candies
for free.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">candyStore()</strong>&nbsp;which takes the array candies[], its size N<strong style="user-select: auto;">&nbsp;</strong>and an integer K<strong style="user-select: auto;">&nbsp;</strong>as input parameters&nbsp;and returns the minimum amount and maximum amount of money to buy all candies according to the offer.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:</strong> O(NLogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;=&nbsp;<strong style="user-select: auto;">N&nbsp;</strong>&lt;= 100000<br style="user-select: auto;">
&nbsp;0 &lt;= <strong style="user-select: auto;">K</strong> &lt;= N-1<br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">candies[i]</strong>&nbsp;&lt;= 10000</span></p>
 <p style="user-select: auto;"></p>
            </div>