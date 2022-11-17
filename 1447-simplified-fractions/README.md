<h2><a href="https://leetcode.com/problems/simplified-fractions/">1447. Simplified Fractions</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">a list of all <strong style="user-select: auto;">simplified</strong> fractions between </em><code style="user-select: auto;">0</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">1</code><em style="user-select: auto;"> (exclusive) such that the denominator is less-than-or-equal-to </em><code style="user-select: auto;">n</code>. You can return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> ["1/2"]
<strong style="user-select: auto;">Explanation:</strong> "1/2" is the only unique fraction with a denominator less-than-or-equal-to 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3
<strong style="user-select: auto;">Output:</strong> ["1/2","1/3","2/3"]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4
<strong style="user-select: auto;">Output:</strong> ["1/2","1/3","1/4","2/3","3/4"]
<strong style="user-select: auto;">Explanation:</strong> "2/4" is not a simplified fraction because it can be simplified to "1/2".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
</ul>
</div>