<h2><a href="https://leetcode.com/problems/pizza-with-3n-slices/">1388. Pizza With 3n Slices</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a pizza with <code style="user-select: auto;">3n</code> slices of varying size, you and your friends will take slices of pizza as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">You will pick <strong style="user-select: auto;">any</strong> pizza slice.</li>
	<li style="user-select: auto;">Your friend Alice will pick the next slice in the anti-clockwise direction of your pick.</li>
	<li style="user-select: auto;">Your friend Bob will pick the next slice in the clockwise direction of your pick.</li>
	<li style="user-select: auto;">Repeat until there are no more slices of pizzas.</li>
</ul>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">slices</code> that represent the sizes of the pizza slices in a clockwise direction, return <em style="user-select: auto;">the maximum possible sum of slice sizes that you can pick</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/18/sample_3_1723.png" style="width: 500px; height: 266px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> slices = [1,2,3,4,5,6]
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> Pick pizza slice of size 4, Alice and Bob will pick slices with size 3 and 5 respectively. Then Pick slices with size 6, finally Alice and Bob will pick slice of size 2 and 1 respectively. Total = 4 + 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/18/sample_4_1723.png" style="width: 500px; height: 299px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> slices = [8,9,8,6,1,1]
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explanation:</strong> Pick pizza slice of size 8 in each turn. If you pick slice with size 9 your partners will pick slices of size 8.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 * n == slices.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= slices.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= slices[i] &lt;= 1000</code></li>
</ul>
</div>