# bit_manipulation
bit manpulation is cpp project which explores various bit manipulation operation and some interesting use cases.

## resources ##
https://www.bogotobogo.com/cplusplus/quiz_bit_manipulation.php

## memory unit ##

<table class="vertical-navbox">
<tbody>
<tr>
<th class="navbox-title" colspan="2">Multiples of bytes</th>
</tr>
<tr>
<td>
<table>
<tbody>
<tr>
<th class="navbox-title" colspan="3"><a title="Decimal" href="https://en.wikipedia.org/wiki/Decimal">Decimal</a></th>
</tr>
<tr>
<th class="navbox-abovebelow">Value</th>
<th class="navbox-abovebelow" colspan="2"><a title="Metric prefix" href="https://en.wikipedia.org/wiki/Metric_prefix">Metric</a></th>
</tr>
<tr>
<td>1000</td>
<td>kB</td>
<td><a class="mw-selflink selflink">kilobyte</a></td>
</tr>
<tr>
<td>1000<sup>2</sup></td>
<td>MB</td>
<td><a title="Megabyte" href="https://en.wikipedia.org/wiki/Megabyte">megabyte</a></td>
</tr>
<tr>
<td>1000<sup>3</sup></td>
<td>GB</td>
<td><a title="Gigabyte" href="https://en.wikipedia.org/wiki/Gigabyte">gigabyte</a></td>
</tr>
<tr>
<td>1000<sup>4</sup></td>
<td>TB</td>
<td><a title="Terabyte" href="https://en.wikipedia.org/wiki/Terabyte">terabyte</a></td>
</tr>
<tr>
<td>1000<sup>5</sup></td>
<td>PB</td>
<td><a title="Petabyte" href="https://en.wikipedia.org/wiki/Petabyte">petabyte</a></td>
</tr>
<tr>
<td>1000<sup>6</sup></td>
<td>EB</td>
<td><a title="Exabyte" href="https://en.wikipedia.org/wiki/Exabyte">exabyte</a></td>
</tr>
<tr>
<td>1000<sup>7</sup></td>
<td>ZB</td>
<td><a title="Zettabyte" href="https://en.wikipedia.org/wiki/Zettabyte">zettabyte</a></td>
</tr>
<tr>
<td>1000<sup>8</sup></td>
<td>YB</td>
<td><a title="Yottabyte" href="https://en.wikipedia.org/wiki/Yottabyte">yottabyte</a></td>
</tr>
</tbody>
</table>
</td>
<td>
<table>
<tbody>
<tr>
<th class="navbox-title" colspan="5"><a title="Binary prefix" href="https://en.wikipedia.org/wiki/Binary_prefix">Binary</a></th>
</tr>
<tr>
<th class="navbox-abovebelow">Value</th>
<th class="navbox-abovebelow" colspan="2"><a class="mw-redirect" title="IEC 80000-13" href="https://en.wikipedia.org/wiki/IEC_80000-13">IEC</a></th>
<th class="navbox-abovebelow" colspan="2"><a title="JEDEC memory standards" href="https://en.wikipedia.org/wiki/JEDEC_memory_standards#Unit_prefixes_for_semiconductor_storage_capacity">JEDEC</a></th>
</tr>
<tr>
<td>1024</td>
<td>KiB</td>
<td><a title="Kibibyte" href="https://en.wikipedia.org/wiki/Kibibyte">kibibyte</a></td>
<td>KB</td>
<td>kilobyte</td>
</tr>
<tr>
<td>1024<sup>2</sup></td>
<td>MiB</td>
<td><a title="Mebibyte" href="https://en.wikipedia.org/wiki/Mebibyte">mebibyte</a></td>
<td>MB</td>
<td>megabyte</td>
</tr>
<tr>
<td>1024<sup>3</sup></td>
<td>GiB</td>
<td><a title="Gibibyte" href="https://en.wikipedia.org/wiki/Gibibyte">gibibyte</a></td>
<td>GB</td>
<td>gigabyte</td>
</tr>
<tr>
<td>1024<sup>4</sup></td>
<td>TiB</td>
<td><a title="Tebibyte" href="https://en.wikipedia.org/wiki/Tebibyte">tebibyte</a></td>
<td colspan="2">&ndash;</td>
</tr>
<tr>
<td>1024<sup>5</sup></td>
<td>PiB</td>
<td><a title="Pebibyte" href="https://en.wikipedia.org/wiki/Pebibyte">pebibyte</a></td>
<td colspan="2">&ndash;</td>
</tr>
<tr>
<td>1024<sup>6</sup></td>
<td>EiB</td>
<td><a title="Exbibyte" href="https://en.wikipedia.org/wiki/Exbibyte">exbibyte</a></td>
<td colspan="2">&ndash;</td>
</tr>
<tr>
<td>1024<sup>7</sup></td>
<td>ZiB</td>
<td><a title="Zebibyte" href="https://en.wikipedia.org/wiki/Zebibyte">zebibyte</a></td>
<td colspan="2">&ndash;</td>
</tr>
<tr>
<td>1024<sup>8</sup></td>
<td>YiB</td>
<td><a title="Yobibyte" href="https://en.wikipedia.org/wiki/Yobibyte">yobibyte</a></td>
<td colspan="2">
<p>&ndash;</p>
</td>
</tr>
</tbody>
</table>
</td>
</tr>
</tbody>
</table>


## operation ##

|Symbol	        | Function	                | Description |
|  :---:        | :---                      | :--- |
| ~	            | Complement	            | Bit n of ~x is the opposite of bit n of x |
| &	            | Bitwise And	            | Bit n of x&y; is 1 if bit n of x and bit n of y is 1. |
| \|	        | Bitwise Or	            | Bit n of x|y is 1 if bit n of x or bit n of y is 1. |
| ^	            | Bitwise Exclusive Or	    | Bit n of x^y is 1 if bit n of x or bit n of y is 1 but not if both are 1. |
| ^	            | Bitwise Exclusive Or	    | x^y = (x\|y) & !(x&y;) : either x or y but not both |
| >>            | Right Shift (divide by 2) | Bit n of x>>s is bit n-s of x. |
| <<            | Left Shift (multiply by 2)    | Bit n of x<<s is bit n+s of x. |


<table border="" cellpadding="5">
<tbody>
<tr>
<th>Symbol</th>
<th>Function</th>
<th>Description</th>
</tr>
<tr>
<td>~</td>
<td>Complement</td>
<td>Bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>~x</strong>&nbsp;is the opposite of bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x</strong></td>
</tr>
<tr>
<td>&amp;</td>
<td>Bitwise And</td>
<td>Bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x&amp;y;</strong>&nbsp;is 1 if bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x</strong>&nbsp;and bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>y</strong>&nbsp;is 1.</td>
</tr>
<tr>
<td>|</td>
<td>Bitwise Or</td>
<td>Bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x|y</strong>&nbsp;is 1 if bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x</strong>&nbsp;or bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>y</strong>&nbsp;is 1.</td>
</tr>
<tr>
<td>^</td>
<td>Bitwise Exclusive Or</td>
<td>Bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x^y</strong>&nbsp;is 1 if bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x</strong>&nbsp;or bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>y</strong>&nbsp;is 1 but not if both are 1.&nbsp;<br />x^y = (x|y) &amp; !(x&amp;y;) : either x or y but not both</td>
</tr>
<tr>
<td>&gt;&gt;</td>
<td>Right Shift (divide by 2)</td>
<td>Bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x&gt;&gt;s</strong>&nbsp;is bit&nbsp;<strong>n-s</strong>&nbsp;of&nbsp;<strong>x</strong>.</td>
</tr>
<tr>
<td>&lt;&lt;</td>
<td>Left Shift (multiply by 2)</td>
<td>Bit&nbsp;<strong>n</strong>&nbsp;of&nbsp;<strong>x&lt;&lt;s</strong>&nbsp;is bit&nbsp;<strong>n+s</strong>&nbsp;of&nbsp;<strong>x</strong>.</td>
</tr>
</tbody>
</table>

