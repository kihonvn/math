# Sets

## Definitions

### The pseudo definition of set

A set is an unordered collection. 

### Finite sets

A finite set is a set having a fixed number of elements.

### Infinite sets

An infinete set is a set that is not [finite](#finite-sets).

### Cardinality of a finite set

The cardinality of a [finite set](#finite-sets) is the number of its elements.

### Subsets

&#x1D434; set is a subset of &#x1D435; set if and only if every element of &#x1D434; is also an element of &#x1D435;.

### Set equality

Set &#x1D434; and set &#x1D435; equals if and only if &#x1D434; is a [subset](#subsets) of &#x1D435; and vice versal.

### Empty sets or null sets

An empty or null set is a set having no element. In convention, an empty is a [subset](#subsets) of all other sets.

## Operations

### Set union

<svg width="132" height="82" xmlns="http://www.w3.org/2000/svg" stroke="#f00" fill="#0f0">
  <path d="M66,72.225 A40,40 0 1 1 66,9.775"/>
  <path d="M66,72.225 A40,40 0 1 0 66,9.775"/>
  <path d="M66,72.225 A40,40 0 0 0 66,9.775"/>
  <path d="M66,72.225 A40,40 0 0 1 66,9.775"/>
</svg>

The union of &#x1D434; and &#x1D435; sets is a set containing all elements of &#x1D434; and &#x1D435;.

&#x1D434; &#x222A; &#x1D435; = {x : x &#x2208; &#x1D434; &#x2228; x &#x2208; &#x1D435;}

- &#x1D434; = {1, 2}, &#x1D435; = {3, 4} &#x21D2; &#x1D434; &#x222A; &#x1D435; = {1, 2, 3, 4}
- &#x1D434; = {1, 2}, &#x1D435; = {2, 3} &#x21D2; &#x1D434; &#x222A; &#x1D435; = {1, 2, 2, 3} = {1, 2, 3}
- &#x2124; &#x222A; &#x2115; = &#x2124;

### Set intersection

<svg width="132" height="82" xmlns="http://www.w3.org/2000/svg" stroke="#f00" fill="#0f0">
  <path d="M66,72.225 A40,40 0 1 1 66,9.775" fill="none"/>
  <path d="M66,72.225 A40,40 0 1 0 66,9.775" fill="none"/>
  <path d="M66,72.225 A40,40 0 0 0 66,9.775"/>
  <path d="M66,72.225 A40,40 0 0 1 66,9.775"/>
</svg>

The intersection of &#x1D434; and &#x1D435; sets is a set containing elements that are in both &#x1D434; and &#x1D435;.

&#x1D434; &#x2229; &#x1D435; = {x : x &#x2208; &#x1D434; &#x2227; x &#x2208; &#x1D435;}

- &#x1D434; = {1, 2}, &#x1D435; = {2, 3} &#x21D2; &#x1D434; &#x2229; &#x1D435; = {2}
- &#x2124; &#x2229; &#x2115; = &#x2115;
- &#x1D434; = {1, 2}, &#x1D435; = {3, 4} &#x21D2; &#x1D434; &#x222A; &#x1D435; = &#x2205;

### Disjoint sets

Two sets are disjoint if their intersection is an [empty set](#empty-sets-or-null-sets).

## Notations

|Notation|Description|Example
|:-:|-|-|
|&#x2208;|is an element of<br>is a member of<br>is in|x &#x2208; &#x1D434;
|&#x2209;|is not an element of<br>is not a member of<br>is not in|x &#x2209; &#x1D434;
|{}|(curly brackets) a set or a set builder|{1, 2, 3}<br>{a, b, c}<br>{1, a, 2, b}
|&#x2758;set-name&#x2758;|the [cardinality](#cardinality-of-a-finite-set) of the set-name set|&#x2758;&#x1D434;&#x2758;
|...|(ellipsis) same as previous or next|{1, 2, 3, ..., 7, 8, 9}<br>{1, 2, 3, ...}<br>{..., -3, -2, -1}
|&#x2758;|(vertical bar) such that or where|{x &#x2208; &#x2115; &#x2758; 9 < x < 100}<br>{x &#x2208; &#x211A; &#x2758; -1 < x < 1}<br>{2x &#x2758; x &#x2208; &#x2124;}
|:|(colon) such that or where|{x &#x2208; &#x2115; : 9 < x < 100}<br>{x &#x2208; &#x211A; : -1 < x < 1}<br>{2x : x &#x2208; &#x2124;}
|,|(comma) and|{x &#x2208; &#x2115; : 9 < x < 100, x &#x2260; 50}<br>{3 + 2x : x &#x2208; &#x2119;, x < 39}<br>{9x : x &#x2208; &#x2124;, -3 < x}
|&#x2119;|(Double-Struck Capital P) Positive number set|{1, 2, 3, ...}
|&#x2115;|Natural number set|{0, 1, 2, 3, ... }
|&#x2124;|Integer set|{..., -3, -2, -1, 0, 1, 2, 3, ...}
|&#x211A;|Rational number set
|&#x211D;|Real number set
|&#x2102;|Complex number set|{a + bi : a,b &#x2208; &#x211D;, i<sup>2</sup> = -1}
|&#x2205;|[empty (null) set](#empty-sets-or-null-sets)|{}
|&#x2282;|is a [subset](#subsets) of|&#x1D434; &#x2282; &#x1D435;
|&#x2284;|is not a [subset](#subsets) of|&#x1D434; &#x2284; &#x1D435;
|=|[equal](#set-equality)|&#x1D434; = &#x1D435;
|&#x2286;|is a [subset](#subsets) of or equal|&#x1D434; &#x2286; &#x1D435;
|&#x222A;|[set union](#set-union)|&#x1D434; &#x222A; &#x1D435;
|&#x2229;|[set intersection](#set-intersection)|&#x1D434; &#x2229; &#x1D435;


## Funnies

### No matter order and repetition

- {1, 2} = {2, 1} = {0+1, 1+1}
- {2, 2} = {2}

### A set can contain other sets

- {1, 2, {1, 2}}
- {&#x2205;, 1, 2, {a, b}, {1, a}, {1, b}}

### Is an element of and is a subset of

- &#x1D434; = {1} and &#x1D435; = {1, 2} &#x21D2; &#x1D434; &#x2282; &#x1D435; and &#x1D434; &#x2209; &#x1D435;
- &#x1D434; = {1} and &#x1D435; = {1, {1}} &#x21D2; &#x1D434; &#x2282; &#x1D435; and &#x1D434; &#x2208; &#x1D435;

### Complex or simple is up to you

- Even number set
  - {2x : x &#x2208; &#x2115;}
  - {x &#x2208; &#x2115; : x is even}
  - {x &#x2208; &#x2115; : &#x2203;n &#x2208; &#x2115;, x = 2n}
  - {x &#x2208; &#x2115; : &#x2203;n &#x2208; &#x2115; &#x2227; x = 2n}
  - {x &#x2208; &#x2115; : &#x2203;n &#x2208; &#x2115; and x = 2n}
  - {x &#x2208; &#x2115; : &#x2203;n &#x2208; &#x2115; (x = 2n)}
- Integer number set
  - &#x2124;
  - {x &#x2208; &#x2124;}
  - {x : x &#x2208; &#x2115; &#x2228; -x &#x2208; &#x2115;}