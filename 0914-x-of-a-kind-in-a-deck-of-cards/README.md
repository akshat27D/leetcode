<h2><a href="https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/">914. X of a Kind in a Deck of Cards</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">deck</code> where <code style="user-select: auto;">deck[i]</code> represents the number written on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> card.</p>

<p style="user-select: auto;">Partition the cards into <strong style="user-select: auto;">one or more groups</strong> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Each group has <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">x</code> cards where <code style="user-select: auto;">x &gt; 1</code>, and</li>
	<li style="user-select: auto;">All the cards in one group have the same integer written on them.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if such partition is possible, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> deck = [1,2,3,4,4,3,2,1]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation</strong>: Possible partition [1,1],[2,2],[3,3],[4,4].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> deck = [1,1,1,2,2,2,3,3]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation</strong>: No possible partition.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= deck.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= deck[i] &lt; 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>