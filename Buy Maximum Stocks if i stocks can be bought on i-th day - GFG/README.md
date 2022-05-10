# Buy Maximum Stocks if i stocks can be bought on i-th day
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In a stock market, there is a product with its infinite stocks. The stock prices are given for&nbsp;<strong style="user-select: auto;">N</strong>&nbsp;days, where <strong style="user-select: auto;">price[i]</strong> denotes the price of the stock on the i<sup style="user-select: auto;">th</sup>&nbsp;day.<br style="user-select: auto;">
There is a rule that a customer can buy at most i stock on the i<sup style="user-select: auto;">th</sup>&nbsp;day.<br style="user-select: auto;">
If the customer has an amount of&nbsp;<strong style="user-select: auto;">k</strong>&nbsp;amount of money initially. The task is to&nbsp;find out the maximum number of stocks a customer can buy.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>price[] = { 10, 7, 19 }
k = 45
<strong style="user-select: auto;">Output: </strong>4
<strong style="user-select: auto;">Explanation:</strong> A customer purchases 1 stock on day 1, 
2 stocks on day 2 and 1 stock on day 3 for 
10, 7 * 2 = 14 and 19 respectively. Hence, 
total amount is 10 + 14 + 19 = 43 and number 
of stocks purchased is 4.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>price[] = { 7, 10, 4 }
k = 100
<strong style="user-select: auto;">Output: </strong>6
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">buyMaximumProducts</strong><strong style="user-select: auto;">()</strong>&nbsp;which takes an array&nbsp;<strong style="user-select: auto;">price&nbsp;</strong>and an integer&nbsp;<strong style="user-select: auto;">k</strong>&nbsp;and returns an integer as output.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(NlogN)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N&nbsp;&lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= price[i] &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= k &lt;= 10<sup style="user-select: auto;">3</sup></span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>