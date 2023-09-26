# Bit Strings

## Definitions

A bit string is a sequence of bits. We present a bit by either 𝟷 or 𝟶 characters to indicate true or false, yes or no, exist or not exist, etc. The number of 𝟷s in a bit string is called its weight, which is always less than or equal to its length, the number of its bits. For example, 𝟶𝟶, 𝟶𝟷, 𝟷𝟶, and 𝟷𝟷 are 2-bit bit strings whose weight is 𝟶, 𝟷, 𝟷, and 𝟸, respectively.

## Notations

- &#x1D401;<sup>&#x1D45B;</sup> the &#x1D45B;-bit strings set
- <img src='img/n-bit-k-weigth-strings-set.svg' style='vertical-align: middle' alt='n-bit k-weigth strings set'></img> the &#x1D45B;-bit strings of &#x1D458;-weigth set

## Analysis

### Interested in length only

Let &#x1D459; be the length of a bit string, i.e., we have &#x1D459; places to put in either &#x1D7F6; or &#x1D7F7;. Thus, we have &#x1D7F8;<sub>&#x1D7F7;</sub> * &#x1D7F8;<sub>&#x1D7F8;</sub> * ... * &#x1D7F8;<sub>&#x1D459;-&#x1D7F7;</sub> * &#x1D7F8;<sub>&#x1D459;</sub> = &#x1D7F8;<sup>&#x1D459;</sup> ways to construct a &#x1D459;-length bit string.

### Interested in both length and weight

Let a bit string has &#x1D459; length and &#x1D464; weight, i.e., we have &#x1D459; places to put in &#x1D464; &#x1D7F7;s and (&#x1D459;-&#x1D464;) &#x1D7F6;s.

If we put &#x1D7F7; at the first place, the problem becomes to find how many ways to put &#x1D464;-&#x1D7F7; &#x1D7F7;s and (&#x1D459;-&#x1D464;) &#x1D7F6;s in &#x1D459;-&#x1D7F7; places, i.e., a bit string &#x1D459;-&#x1D7F7; and &#x1D464;-&#x1D7F7; weight. On the other hand, we would put &#x1D7F6; at the first place, we need to find have many ways to construct a bit string &#x1D459;-&#x1D7F7; length and &#x1D464; weight.

|&#x1D401;(&#x1D459;, &#x1D464;)| = |&#x1D401;(&#x1D459;-&#x1D7F7;, &#x1D464;-&#x1D7F7;)| + |&#x1D401;(&#x1D459;-&#x1D7F7;, &#x1D464;)|<br>
|&#x1D401;(&#x1D459;-&#x1D7F7;, &#x1D464;-&#x1D7F7;)| = |&#x1D401;(&#x1D459;-&#x1D7F8;, &#x1D464;-&#x1D7F8;)| + |&#x1D401;(&#x1D459;-&#x1D7F8;, &#x1D464;-&#x1D7F7;)|<br>
|&#x1D401;(&#x1D459;-&#x1D7F7;, &#x1D464;)| = |&#x1D401;(&#x1D459;-&#x1D7F8;, &#x1D464;-&#x1D7F7;)| + |&#x1D401;(&#x1D459;-&#x1D7F8;, &#x1D464;)|<br>
...
