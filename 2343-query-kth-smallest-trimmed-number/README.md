<h2><a href="https://leetcode.com/problems/query-kth-smallest-trimmed-number/">2343. Query Kth Smallest Trimmed Number</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> array of strings <code style="user-select: auto;">nums</code>, where each string is of <strong style="user-select: auto;">equal length</strong> and consists of only digits.</p>

<p style="user-select: auto;">You are also given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">queries</code> where <code style="user-select: auto;">queries[i] = [k<sub style="user-select: auto;">i</sub>, trim<sub style="user-select: auto;">i</sub>]</code>. For each <code style="user-select: auto;">queries[i]</code>, you need to:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Trim</strong> each number in <code style="user-select: auto;">nums</code> to its <strong style="user-select: auto;">rightmost</strong> <code style="user-select: auto;">trim<sub style="user-select: auto;">i</sub></code> digits.</li>
	<li style="user-select: auto;">Determine the <strong style="user-select: auto;">index</strong> of the <code style="user-select: auto;">k<sub style="user-select: auto;">i</sub><sup style="user-select: auto;">th</sup></code> smallest trimmed number in <code style="user-select: auto;">nums</code>. If two trimmed numbers are equal, the number with the <strong style="user-select: auto;">lower</strong> index is considered to be smaller.</li>
	<li style="user-select: auto;">Reset each number in <code style="user-select: auto;">nums</code> to its original length.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> of the same length as </em><code style="user-select: auto;">queries</code>,<em style="user-select: auto;"> where </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is the answer to the </em><code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> query.</em></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">To trim to the rightmost <code style="user-select: auto;">x</code> digits means to keep removing the leftmost digit, until only <code style="user-select: auto;">x</code> digits remain.</li>
	<li style="user-select: auto;">Strings in <code style="user-select: auto;">nums</code> may contain leading zeros.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["102","473","251","814"], queries = [[1,1],[2,3],[4,2],[1,2]]
<strong style="user-select: auto;">Output:</strong> [2,2,1,0]
<strong style="user-select: auto;">Explanation:</strong>
1. After trimming to the last digit, nums = ["2","3","1","4"]. The smallest number is 1 at index 2.
2. Trimmed to the last 3 digits, nums is unchanged. The 2<sup style="user-select: auto;">nd</sup> smallest number is 251 at index 2.
3. Trimmed to the last 2 digits, nums = ["02","73","51","14"]. The 4<sup style="user-select: auto;">th</sup> smallest number is 73.
4. Trimmed to the last 2 digits, the smallest number is 2 at index 0.
   Note that the trimmed number "02" is evaluated as 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = ["24","37","96","04"], queries = [[2,1],[2,2]]
<strong style="user-select: auto;">Output:</strong> [3,0]
<strong style="user-select: auto;">Explanation:</strong>
1. Trimmed to the last digit, nums = ["4","7","6","4"]. The 2<sup style="user-select: auto;">nd</sup> smallest number is 4 at index 3.
   There are two occurrences of 4, but the one at index 0 is considered smaller than the one at index 3.
2. Trimmed to the last 2 digits, nums is unchanged. The 2<sup style="user-select: auto;">nd</sup> smallest number is 24.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i]</code> consists of only digits.</li>
	<li style="user-select: auto;">All <code style="user-select: auto;">nums[i].length</code> are <strong style="user-select: auto;">equal</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k<sub style="user-select: auto;">i</sub> &lt;= nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= trim<sub style="user-select: auto;">i</sub> &lt;= nums[i].length</code></li>
</ul>
</div>