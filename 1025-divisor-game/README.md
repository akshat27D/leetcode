<h2><a href="https://leetcode.com/problems/divisor-game/">1025. Divisor Game</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Alice and Bob take turns playing a game, with Alice starting first.</p>

<p style="user-select: auto;">Initially, there is a number <code style="user-select: auto;">n</code> on the chalkboard. On each player's turn, that player makes a move consisting of:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choosing any <code style="user-select: auto;">x</code> with <code style="user-select: auto;">0 &lt; x &lt; n</code> and <code style="user-select: auto;">n % x == 0</code>.</li>
	<li style="user-select: auto;">Replacing the number <code style="user-select: auto;">n</code> on the chalkboard with <code style="user-select: auto;">n - x</code>.</li>
</ul>

<p style="user-select: auto;">Also, if a player cannot make a move, they lose the game.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Alice chooses 1, and Bob has no more moves.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Alice chooses 1, Bob chooses 1, and Alice has no more moves.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>