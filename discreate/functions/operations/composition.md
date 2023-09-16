# Function Composition

## Definition

Let &#x1D453; : &#x1D434; &#x2192; &#x1D435; and &#x1D454; : &#x1D435; &#x2192; &#x1D436;. The composition of &#x1D453; followed by &#x1D454; is a &#x1D454; &#x2218; &#x1D453; : &#x1D434; &#x2192; &#x1D436; defined by &#x1D454; &#x2218; &#x1D453; = &#x1D454;(&#x1D453;(&#x1D465;)), which is read "&#x1D454; of &#x1D453; of &#x1D465;".

### Examples

- On &#x211D;, let &#x1D453;(&#x1D465;) = &#x1D465;<sup>&#x1D7F8;</sup> and &#x1D454;(&#x1D465;) = &#x1D465; + &#x1D7F7;. We have &#x1D454;(&#x1D453;(&#x1D465;)) = &#x1D465;<sup>&#x1D7F8;</sup> + 1 and &#x1D453;(&#x1D454;(&#x1D465;)) = (&#x1D465; + &#x1D7F7;)<sup>&#x1D7F8;</sup>.

## Theorems

### Function composition is associative

If &#x1D453; : &#x1D434; &#x2192; &#x1D435;, &#x1D454; : &#x1D435; &#x2192; &#x1D436;, and &#x1D458; : &#x1D436; &#x2192; &#x1D437;, then &#x1D458; &#x2218; (&#x1D454; &#x2218; &#x1D453;) = (&#x1D458; &#x2218; &#x1D454;) &#x2218; &#x1D453;.

### The composition of [injections](../properties/injective.md#definition) is an [injection](../properties/injective.md#definition)

If &#x1D453; : &#x1D434; &#x2192; &#x1D435; and &#x1D454; : &#x1D435; &#x2192; &#x1D436; are injections, then &#x1D454; &#x2218; &#x1D453; : &#x1D434; &#x2192; &#x1D436; is an injection.

### The composition of [surjections](../properties/surjective.md#definition) is an [surjection](../properties/surjective.md#definition)

If &#x1D453; : &#x1D434; &#x2192; &#x1D435; and &#x1D454; : &#x1D435; &#x2192; &#x1D436; are surjections, then &#x1D454; &#x2218; &#x1D453; : &#x1D434; &#x2192; &#x1D436; is an surjection.