# Functions

## Definition

A function &#x1D453; from a set &#x1D44B; into a set &#x1D44C; is a [relation from &#x1D44B; into &#x1D44C;](../relation/README.md#definition) such that ***each &#x1D44B; element*** is related to ***one and only one &#x1D44C; element***. In that case, &#x1D44B; is called the function ***domain***, and &#x1D44C; is called the function ***codomain***.

&#x1D453; : &#x1D44B; &#x2192; &#x1D44C;

A function from set &#x1D44B; into set &#x1D44C; is a subset of [&#x1D44B; &#x00D7; &#x1D44C;](../set/operations/cartesian-product.md#definition).

### Examples

- &#x1D453; = {(&#x1D465;, &#x1D7F9;&#x1D465;) : &#x1D465; &#x2208; &#x211D;}
- &#x1D453; = {(&#x1D465;, &#x1D7F7;/&#x1D465;) : &#x1D465; &#x2208; &#x211D; and &#x1D465; &#x2260; &#x1D7F6;}

## Describe a function

We can describe a function by four ways (Rule of Four):
- [Algebraically (by formula)](#by-formula)
- Numerically (a table)
- Graphically (a graph)
- In words

### By formula

Let &#x1D453; : &#x2115; &#x2192; &#x2115; is defined by the following set:

&#x1D453; = {(&#x1D7F6;, &#x1D7F6;), (&#x1D7F7;, &#x1D7F9;), (&#x1D7F8;, &#x1D7FC;), ...}

We may assume the formula of &#x1D453; is (&#x1D465;, &#x1D7F9;&#x1D465;) or &#x1D453; = {(&#x1D465;, &#x1D7F9;&#x1D465;) : &#x1D465;, &#x1D7F9;&#x1D465; &#x2208; &#x2115;}.

Note that a function may have zero, one, or many formulas.

#### Conditional function formula

*Piecewise function*

We may define a function by a group of formulas such that we only use one for a particular partition of the function domain. For example,

&#x1D453; = {(&#x1D465;, &#x1D465;) : &#x1D465; &#x2265; &#x1D7F6;} &#x222A; {(&#x1D465;, &#x1D465;<sup>&#x1D7F8;</sup>) : &#x1D465; < &#x1D7F6;}

### By a table

|||||
|:-:|:-:|:-:|:-:|
|&#x1D465;|&#x1D7F6;|&#x1D7F7;|&#x1D7F8;
|&#x1D453;(&#x1D465;)|&#x1D7F6;|&#x1D7F9;|&#x1D7FC;

### By a graph

### In words

&#x1D453; is a function on &#x2115; defined by multiples of 3.

## Functions of more than one variables

If the domain of a function is a Cartesian product of sets, we call that function having more than one variable. For example,

- &#x1D453; : &#x1D434; &#x00D7; &#x1D435; &#x2192; &#x1D436;
- &#x1D453; : &#x1D434; &#x00D7; &#x1D435; &#x00D7; &#x1D436; &#x2192; &#x1D437;
- &#x1D453; = {((&#x1D465;, &#x1D466;), &#x1D465;<sup>&#x1D7F8;</sup> + &#x1D466;<sup>&#x1D7F8;</sup>)}

## See also

- [Image of a domain element under a function](image.md#definition)
- [Range of a function](range.md#definition)
- [Function set](function-set.md#definition)

## Practices

1. Let &#x1D434; = {&#x1D7F7;, &#x1D7F8;, &#x1D7F9;} and &#x1D435; = {&#x1D7FA;, &#x1D7FB;, &#x1D7FC;}. Are the following relations functions?
   - &#x1D453; = {(&#x1D7F7;, &#x1D7FA;), (&#x1D7F8;, &#x1D7FB;), (&#x1D7F9;, &#x1D7FC;)}
   - &#x1D453; = {(&#x1D7F7;, &#x1D7FA;), (&#x1D7F8;, &#x1D7FB;)}
   - &#x1D453; = {(&#x1D7F7;, &#x1D7FA;), (&#x1D7F8;, &#x1D7FB;), (&#x1D7F9;, &#x1D7FA;), (&#x1D7F8;, &#x1D7FC;)}
1. Let &#x1D434; = {&#x1D7F7;, &#x1D7F8;, &#x1D7F9;} and &#x1D453; = {(&#x1D7F7;, &#x1D7F7;), (&#x1D7F8;, &#x1D7F7;), (&#x1D7F9;, &#x1D7F7;)}. Is &#x1D453; a function from &#x1D434; into &#x1D434;?
1. Let &#x1D453; : &#x211D; &#x2192; &#x211D; defined by &#x1D453;(&#x1D465;) = &#x1D7F9;&#x1D465;<sup>&#x1D7F8;</sup> - &#x1D7FB;. Then &#x1D453;(&#x1D7F9;)?


## Answers

1. 
   - Yes
   - No
   - No
1. Yes
1. &#x1D7F8;&#x1D7F8;