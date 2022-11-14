<h2><a href="https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/">1317. Convert Integer to the Sum of Two No-Zero Integers</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><strong style="user-select: auto;">No-Zero integer</strong> is a positive integer that <strong style="user-select: auto;">does not contain any <code style="user-select: auto;">0</code></strong> in its decimal representation.</p>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">a list of two integers</em> <code style="user-select: auto;">[A, B]</code> <em style="user-select: auto;">where</em>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> are <strong style="user-select: auto;">No-Zero integers</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">A + B = n</code></li>
</ul>

<p style="user-select: auto;">The test cases are generated so that there is at least one valid solution. If there are many valid solutions you can return any of them.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> [1,1]
<strong style="user-select: auto;">Explanation:</strong> A = 1, B = 1. A + B = n and both A and B do not contain any 0 in their decimal representation.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 11
<strong style="user-select: auto;">Output:</strong> [2,9]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>