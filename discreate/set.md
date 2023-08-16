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

### The empty (null) set

The empty or null set is the set having no element. In convention, the empty set is a [subset](#subsets) of all other sets.

### The universe or the universal set

The universe set is the set of all elements.

## Operations

### Set union

![Set union](img/set-union.svg)

<small>**Figure 1** - Venn Diagram for set union</small>

The union of &#x1D434; and &#x1D435; sets is a set containing all elements of &#x1D434; and &#x1D435;.

&#x1D434; &#x222A; &#x1D435; = {&#x1D465; : &#x1D465; &#x2208; &#x1D434; &#x2228; &#x1D465; &#x2208; &#x1D435;}

- &#x1D434; = {&#x1D7F7;, &#x1D7F8;}, &#x1D435; = {&#x1D7F9;, &#x1D7FA;} &#x21D2; &#x1D434; &#x222A; &#x1D435; = {&#x1D7F7;, &#x1D7F8;, &#x1D7F9;, &#x1D7FA;}
- &#x1D434; = {&#x1D7F7;, &#x1D7F8;}, &#x1D435; = {&#x1D7F8;, &#x1D7F9;} &#x21D2; &#x1D434; &#x222A; &#x1D435; = {&#x1D7F7;, &#x1D7F8;, &#x1D7F8;, &#x1D7F9;} = {&#x1D7F7;, &#x1D7F8;, &#x1D7F9;}
- &#x2124; &#x222A; &#x2115; = &#x2124;

### Set intersection

![Set intersection](img/set-intersection.svg)

<small>**Figure 2** - Venn Diagram for set intersection</small>

The intersection of &#x1D434; and &#x1D435; sets is a set containing elements that are in both &#x1D434; and &#x1D435;.

&#x1D434; &#x2229; &#x1D435; = {&#x1D465; : &#x1D465; &#x2208; &#x1D434; &#x2227; &#x1D465; &#x2208; &#x1D435;}

- &#x1D434; = {&#x1D7F7;, &#x1D7F8;}, &#x1D435; = {&#x1D7F8;, &#x1D7F9;} &#x21D2; &#x1D434; &#x2229; &#x1D435; = {&#x1D7F8;}
- &#x2124; &#x2229; &#x2115; = &#x2115;
- &#x1D434; = {&#x1D7F7;, &#x1D7F8;}, &#x1D435; = {&#x1D7F9;, &#x1D7FA;} &#x21D2; &#x1D434; &#x2229; &#x1D435; = &#x2205;

### Disjoint sets

Two sets are disjoint if their intersection is [the empty set](#the-empty-null-set).

### The complement of a set relative to another one

![Set complement](img/set-complement.svg)

<small>**Figure 3** - Venn Diagram for the complement of the red set relative to the blue one</small>

The complement of a set &#x1D434; relative to another set &#x1D435; is a set containing all elelements in &#x1D435; but not in &#x1D434;.

&#x1D435; - &#x1D434; = {&#x1D465; : &#x1D465; &#x2208; &#x1D435; &#x2227; &#x1D465; &#x2209; &#x1D434;}

The complement of a set (relative to [the universe](#the-universe-or-the-universal-set)) is a set containing all elements not in it (but in [the universe](#the-universe-or-the-universal-set)).

&#x1D434;<sup>&#x1D436;</sup> = &#x1D448; - &#x1D434;

- &#x1D434; = {&#x1D7F7;, &#x1D7F8;}, &#x1D435; = {&#x1D7F8;, &#x1D7F9;} &#x21D2; &#x1D435; - &#x1D434; = {&#x1D7F9;} and &#x1D434; - &#x1D435; = {&#x1D7F7;}
- &#x1D434; = {&#x1D7F7;, &#x1D7F8;, &#x1D7F9;}, &#x1D435; = {&#x1D7F8;} &#x21D2; &#x1D435; - &#x1D434; = &#x2205; and &#x1D434; - &#x1D435; = {&#x1D7F7;, &#x1D7F9;}

### The symmetric difference of two sets

![Set symmetric difference](img/set-symmetric-difference.svg)

<small>**Figure 4** - Venn Diagram for the symmetric difference of red and blue sets</small>

The symmetric difference of two sets &#x1D434; and &#x1D435; is a set containing all elements in &#x1D434; and in &#x1D435; but not both.

&#x1D434; &#x2A01; &#x1D435; = (&#x1D434; &#x222A; &#x1D435;) - (&#x1D434; &#x2229; &#x1D435;)

- &#x1D434; = {&#x1D7F7;, &#x1D7F8;}, &#x1D435; = {&#x1D7F8;, &#x1D7F9;} &#x21D2; &#x1D434; &#x2A01; &#x1D435; = {&#x1D7F7;, &#x1D7F9;}

## Notations

|Notation|Description|Example
|:-:|-|-|
|&#x2208;|is an element of<br>is a member of<br>is in|&#x1D465; &#x2208; &#x1D434;
|&#x2209;|is not an element of<br>is not a member of<br>is not in|&#x1D465; &#x2209; &#x1D434;
|{}|(curly brackets) a set or a set builder|{&#x1D7F7;, &#x1D7F8;, &#x1D7F9;}<br>{&#x1D44E;, &#x1D44F;, &#x1D450;}<br>{&#x1D7F7;, &#x1D44E;, &#x1D7F8;, &#x1D44F;}
|&#x2758;set-name&#x2758;|the [cardinality](#cardinality-of-a-finite-set) of the set-name set|&#x2758;&#x1D434;&#x2758;
|...|(ellipsis) same as previous or next|{&#x1D7F7;, &#x1D7F8;, &#x1D7F9;, ..., &#x1D7FD;, &#x1D7FE;, &#x1D7FF;}<br>{&#x1D7F7;, &#x1D7F8;, &#x1D7F9;, ...}<br>{..., -&#x1D7F9;, -&#x1D7F8;, -&#x1D7F7;}
|&#x2758;|(vertical bar) such that or where|{&#x1D465; &#x2208; &#x2115; &#x2758; &#x1D7FF; < &#x1D465; < &#x1D7F7;&#x1D7F6;&#x1D7F6;}<br>{&#x1D465; &#x2208; &#x211A; &#x2758; -&#x1D7F7; < &#x1D465; < &#x1D7F7;}<br>{&#x1D7F8;&#x1D465; &#x2758; &#x1D465; &#x2208; &#x2124;}
|:|(colon) such that or where|{&#x1D465; &#x2208; &#x2115; : &#x1D7FF; < &#x1D465; < &#x1D7F7;&#x1D7F6;&#x1D7F6;}<br>{&#x1D465; &#x2208; &#x211A; : -&#x1D7F7; < &#x1D465; < &#x1D7F7;}<br>{&#x1D7F8;&#x1D465; : &#x1D465; &#x2208; &#x2124;}
|,|(comma) and|{&#x1D465; &#x2208; &#x2115; : &#x1D7FF; < &#x1D465; < &#x1D7F7;&#x1D7F6;&#x1D7F6;, &#x1D465; &#x2260; &#x1D7FB;&#x1D7F6;}<br>{&#x1D7F9; + &#x1D7F8;&#x1D465; : &#x1D465; &#x2208; &#x2119;, &#x1D465; < &#x1D7F9;&#x1D7FF;}<br>{&#x1D7FF;&#x1D465; : &#x1D465; &#x2208; &#x2124;, -&#x1D7F9; < &#x1D465;}
|&#x2119;|(Double-Struck Capital P) Positive number set|{&#x1D7F7;, &#x1D7F8;, &#x1D7F9;, ...}
|&#x2115;|Natural number set|{&#x1D7F6;, &#x1D7F7;, &#x1D7F8;, &#x1D7F9;, ... }
|&#x2124;|Integer set|{..., -&#x1D7F9;, -&#x1D7F8;, -&#x1D7F7;, &#x1D7F6;, &#x1D7F7;, &#x1D7F8;, &#x1D7F9;, ...}
|&#x211A;|Rational number set
|&#x211D;|Real number set
|&#x2102;|Complex number set|{&#x1D44E; + &#x1D44F;&#x1D456; : &#x1D44E;,&#x1D44F; &#x2208; &#x211D;, &#x1D456;<sup>&#x1D7F8;</sup> = -&#x1D7F7;}
|&#x2205;|[The empty (null) set](#the-empty-null-set)|{}
|&#x1D448;|[The universe (universal set)](#the-universe-or-the-universal-set)
|&#x2282;|is a [subset](#subsets) of|&#x1D434; &#x2282; &#x1D435;
|&#x2284;|is not a [subset](#subsets) of|&#x1D434; &#x2284; &#x1D435;
|=|[equal](#set-equality)|&#x1D434; = &#x1D435;
|&#x2286;|is a [subset](#subsets) of or equal|&#x1D434; &#x2286; &#x1D435;
|&#x222A;|[set union](#set-union)|&#x1D434; &#x222A; &#x1D435;
|&#x2229;|[set intersection](#set-intersection)|&#x1D434; &#x2229; &#x1D435;
|-|[set complement](#the-complement-of-a-set-relative-to-another-one)|&#x1D435; - &#x1D434; or &#x1D434; - &#x1D435;
|set<sup>&#x1D436;</sup>|The [complement](#the-complement-of-a-set-relative-to-another-one) of the set (relative to [the universe](#the-universe-or-the-universal-set))|&#x1D434;<sup>&#x1D436;</sup> = &#x1D448; - &#x1D434;
|&#x1D448;<sup>&#x1D436;</sup>|The [complement](#the-complement-of-a-set-relative-to-another-one) of [the universe](#the-universe-or-the-universal-set)|&#x1D448;<sup>&#x1D436;</sup> = &#x1D448; - &#x1D448; = &#x2205;
|&#x2205;<sup>&#x1D436;</sup>|The [complement](#the-complement-of-a-set-relative-to-another-one) of [the empty set](#the-empty-null-set)|&#x2205;<sup>&#x1D436;</sup> = &#x1D448; - &#x2205; = &#x1D448;

## Funnies

### No matter order and repetition

- {&#x1D7F7;, &#x1D7F8;} = {&#x1D7F8;, &#x1D7F7;} = {&#x1D7F6;+&#x1D7F7;, &#x1D7F7;+&#x1D7F7;}
- {&#x1D7F8;, &#x1D7F8;} = {&#x1D7F8;}

### A set can contain other sets

- {&#x1D7F7;, &#x1D7F8;, {&#x1D7F7;, &#x1D7F8;}}
- {&#x2205;, &#x1D7F7;, &#x1D7F8;, {&#x1D44E;, &#x1D44F;}, {&#x1D7F7;, &#x1D44E;}, {&#x1D7F7;, &#x1D44F;}}

### Is an element of and is a subset of

- &#x1D434; = {&#x1D7F7;} and &#x1D435; = {&#x1D7F7;, &#x1D7F8;} &#x21D2; &#x1D434; &#x2282; &#x1D435; and &#x1D434; &#x2209; &#x1D435;
- &#x1D434; = {&#x1D7F7;} and &#x1D435; = {&#x1D7F7;, {&#x1D7F7;}} &#x21D2; &#x1D434; &#x2282; &#x1D435; and &#x1D434; &#x2208; &#x1D435;

### Complex or simple is up to you

- Even number set
  - {&#x1D7F8;&#x1D465; : &#x1D465; &#x2208; &#x2115;}
  - {&#x1D465; &#x2208; &#x2115; : &#x1D465; is even}
  - {&#x1D465; &#x2208; &#x2115; : &#x2203;&#x1D45B; &#x2208; &#x2115;, &#x1D465; = &#x1D7F8;&#x1D45B;}
  - {&#x1D465; &#x2208; &#x2115; : &#x2203;&#x1D45B; &#x2208; &#x2115; &#x2227; &#x1D465; = &#x1D7F8;&#x1D45B;}
  - {&#x1D465; &#x2208; &#x2115; : &#x2203;&#x1D45B; &#x2208; &#x2115; and &#x1D465; = &#x1D7F8;&#x1D45B;}
  - {&#x1D465; &#x2208; &#x2115; : &#x2203;&#x1D45B; &#x2208; &#x2115; (&#x1D465; = &#x1D7F8;&#x1D45B;)}
- Integer number set
  - &#x2124;
  - {&#x1D465; &#x2208; &#x2124;}
  - {&#x1D465; : &#x1D465; &#x2208; &#x2115; &#x2228; -&#x1D465; &#x2208; &#x2115;}

### Somehow similar

- (&#x1D434; &#x2282; &#x1D435;) &#x2227; (&#x1D435; &#x2282; &#x1D436;) &#x21D2; &#x1D434; &#x2282; &#x1D436;
- &#x1D434; &#x222A; &#x1D435; = &#x1D435; &#x222A; &#x1D434;
- &#x1D434; &#x222A; (&#x1D435; &#x222A; &#x1D436;) = (&#x1D434; &#x222A; &#x1D435;) &#x222A; &#x1D436;
- &#x1D434; &#x2282; (&#x1D434; &#x222A; &#x1D435;)
- &#x1D434; &#x2229; &#x1D435; = &#x1D435; &#x2229; &#x1D434;
- &#x1D434; &#x2229; (&#x1D435; &#x2229; &#x1D436;) = (&#x1D434; &#x2229; &#x1D435;) &#x2229; &#x1D436;
- (&#x1D434; &#x2229; &#x1D435;) &#x2282; &#x1D434;
- &#x1D434; &#x222A; (&#x1D435; &#x2229; &#x1D436;) = (&#x1D434; &#x222A; &#x1D435;) &#x2229; (&#x1D434; &#x222A; &#x1D436;)
- &#x1D434; &#x2229; (&#x1D435; &#x222A; &#x1D436;) = (&#x1D434; &#x2229; &#x1D435;) &#x222A; (&#x1D434; &#x2229; &#x1D436;)
- (&#x1D434; &#x222A; &#x1D435; = &#x1D448;) &#x2227; (&#x1D434; &#x2229; &#x1D435;) = &#x2205; &#x21D2; &#x1D448; - &#x1D434; = &#x1D435;
- &#x1D434; &#x222A; &#x1D434;<sup>&#x1D436;</sup> = &#x1D448;
- &#x1D448;<sup>&#x1D436;</sup> = &#x2205;
- &#x2205;<sup>&#x1D436;</sup> = &#x1D448;
- &#x1D434; - &#x1D435; = &#x1D435; - &#x1D434; if and only if &#x1D434; = &#x1D435;
- (&#x1D434; &#x222A; &#x1D435;)<sup>&#x1D436;</sup> = &#x1D434;<sup>&#x1D436;</sup> &#x2229; &#x1D435;<sup>&#x1D436;</sup>
- &#x1D434; &#x2A01; &#x1D435; = &#x1D435; &#x2A01; &#x1D434;