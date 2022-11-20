<h2><a href="https://leetcode.com/problems/number-of-distinct-averages/">2465. Number of Distinct Averages</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> of <strong style="user-select: auto;">even</strong> length.</p>

<p style="user-select: auto;">As long as <code style="user-select: auto;">nums</code> is <strong style="user-select: auto;">not</strong> empty, you must repetitively:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Find the minimum number in <code style="user-select: auto;">nums</code> and remove it.</li>
	<li style="user-select: auto;">Find the maximum number in <code style="user-select: auto;">nums</code> and remove it.</li>
	<li style="user-select: auto;">Calculate the average of the two removed numbers.</li>
</ul>

<p style="user-select: auto;">The <strong style="user-select: auto;">average</strong> of two numbers <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> is <code style="user-select: auto;">(a + b) / 2</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the average of <code style="user-select: auto;">2</code> and <code style="user-select: auto;">3</code> is <code style="user-select: auto;">(2 + 3) / 2 = 2.5</code>.</li>
</ul>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the number of <strong style="user-select: auto;">distinct</strong> averages calculated using the above process</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that when there is a tie for a minimum or maximum number, any can be removed.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,1,4,0,3,5]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
1. Remove 0 and 5, and the average is (0 + 5) / 2 = 2.5. Now, nums = [4,1,4,3].
2. Remove 1 and 4. The average is (1 + 4) / 2 = 2.5, and nums = [4,3].
3. Remove 3 and 4, and the average is (3 + 4) / 2 = 3.5.
Since there are 2 distinct numbers among 2.5, 2.5, and 3.5, we return 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,100]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
There is only one average to be calculated after removing 1 and 100, so we return 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length</code> is even.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>