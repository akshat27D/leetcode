<h2><a href="https://leetcode.com/problems/convert-the-temperature/">2469. Convert the Temperature</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a non-negative floating point number rounded to two decimal places <code style="user-select: auto;">celsius</code>, that denotes the <strong style="user-select: auto;">temperature in Celsius</strong>.</p>

<p style="user-select: auto;">You should convert Celsius into <strong style="user-select: auto;">Kelvin</strong> and <strong style="user-select: auto;">Fahrenheit</strong> and return it as an array <code style="user-select: auto;">ans = [kelvin, fahrenheit]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the array <code style="user-select: auto;">ans</code>. </em>Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual answer will be accepted.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note that:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">Kelvin = Celsius + 273.15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">Fahrenheit = Celsius * 1.80 + 32.00</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> celsius = 36.50
<strong style="user-select: auto;">Output:</strong> [309.65000,97.70000]
<strong style="user-select: auto;">Explanation:</strong> Temperature at 36.50 Celsius converted in Kelvin is 309.65 and converted in Fahrenheit is 97.70.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> celsius = 122.11
<strong style="user-select: auto;">Output:</strong> [395.26000,251.79800]
<strong style="user-select: auto;">Explanation:</strong> Temperature at 122.11 Celsius converted in Kelvin is 395.26 and converted in Fahrenheit is 251.798.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= celsius &lt;= 1000</code></li>
</ul>
</div>