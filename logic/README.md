# Logic

## Propositions

A proposition is a sentence having a definite truth value (i.e., we can say it is true or false).

## Truth tables

A truth table is a table where each column contains possible truth values of a proposition. In a truth table, &#x1D7F6; and &#x1D7F7; represent &#x1D461;&#x1D45F;&#x1D462;&#x1D452; and &#x1D453;&#x1D44E;&#x1D459;&#x1D460;&#x1D452;, respectively.

## Logical laws

### Commutative laws

- &#x1D45D; &#x2227; &#x1D45E; &#x21D4; &#x1D45E; &#x2227; &#x1D45D;
- &#x1D45D; &#x2228; &#x1D45E; &#x21D4; &#x1D45E; &#x2228; &#x1D45D;

### Associative laws

- (&#x1D45D; &#x2227; &#x1D45E;) &#x2227; &#x1D45F; &#x21D4; &#x1D45D; &#x2227; (&#x1D45E; &#x2227; &#x1D45F;)
- (&#x1D45D; &#x2228; &#x1D45E;) &#x2228; &#x1D45F; &#x21D4; &#x1D45D; &#x2228; (&#x1D45E; &#x2228; &#x1D45F;)

### Distributive laws

- &#x1D45D; &#x2227; (&#x1D45E; &#x2228; &#x1D45F;) &#x21D4; (&#x1D45D; &#x2227; &#x1D45E;) &#x2228; (&#x1D45D; &#x2227; &#x1D45F;)
- &#x1D45D; &#x2228; (&#x1D45E; &#x2227; &#x1D45F;) &#x21D4; (&#x1D45D; &#x2228; &#x1D45E;) &#x2227; (&#x1D45D; &#x2228; &#x1D45F;)

### Identity laws

&#x1D45D; &#x2228; &#x1D7F6; &#x21D4; &#x1D45D; &#x21D4; &#x1D45D; &#x2227; &#x1D7F7;

### Negation laws

- &#x1D45D; &#x2227; &#x00AC;&#x1D45D; &#x21D4; &#x1D7F6;
- &#x1D45D; &#x2228; &#x00AC;&#x1D45D; &#x21D4; &#x1D7F7;

### Idempotent laws

&#x1D45D; &#x2227; &#x1D45D; &#x21D4; &#x1D45D; &#x21D4; &#x1D45D; &#x2228; &#x1D45D;

### Null laws

- &#x1D7F6; &#x2227; &#x1D45D; &#x21D4; &#x1D7F6;
- &#x1D7F7; &#x2228; &#x1D45D; &#x21D4; &#x1D7F7;

### Absorption laws

&#x1D45D; &#x2227; (&#x1D45D; &#x2228; &#x1D45E;) &#x21D4; &#x1D45D; &#x21D4; &#x1D45D; &#x2228; (&#x1D45D; &#x2227; &#x1D45E;)

### DeMorgan's laws

- &#x00AC;(&#x1D45D; &#x2228; &#x1D45E;) &#x21D4; &#x00AC;&#x1D45D; &#x2227; &#x00AC;&#x1D45E;
- &#x00AC;(&#x1D45D; &#x2227; &#x1D45E;) &#x21D4; &#x00AC;&#x1D45D; &#x2228; &#x00AC;&#x1D45E;

### Involution law

&#x00AC;(&#x00AC;&#x1D45D;) &#x21D4; &#x1D45D;

## Common [implications](operations/relations/implication.md) and [equivalences](operations/relations/equivalence.md)

### Detachment (Modus Ponens)

(&#x1D45D; &#x2192; &#x1D45E;) &#x2227; &#x1D45D; &#x21D2; &#x1D45E;

### Indirect reasoning (Modus Tollens)

(&#x1D45D; &#x2192; &#x1D45E;) &#x2227; &#x00AC;&#x1D45E; &#x21D2; &#x00AC;&#x1D45D;

### Disjunctive addition

&#x1D45D; &#x21D2; (&#x1D45D; &#x2228; &#x1D45E;)

### Conjunctive simplification

- (&#x1D45D; &#x2227; &#x1D45E;) &#x21D2; &#x1D45D;
- (&#x1D45D; &#x2227; &#x1D45E;) &#x21D2; &#x1D45E;

### Disjunctive simplification

- (&#x1D45D; &#x2228; &#x1D45E;) &#x2227; &#x00AC;&#x1D45D; &#x21D2; &#x1D45E;
- (&#x1D45D; &#x2228; &#x1D45E;) &#x2227; &#x00AC;&#x1D45E; &#x21D2; &#x1D45D;

### Chain rule

(&#x1D45D; &#x2192; &#x1D45E;) &#x2227; (&#x1D45E; &#x2192; &#x1D45F;) &#x21D2; &#x1D45D; &#x2192; &#x1D45F;

### Conditional equivalence

&#x1D45D; &#x2192; &#x1D45E; &#x21D4; &#x00AC;&#x1D45D; &#x2228; &#x1D45E;

### Biconditional equivalences

&#x1D45D; &#x2194; &#x1D45E; &#x21D4; (&#x1D45D; &#x2192; &#x1D45E;) &#x2227; (&#x1D45E; &#x2192; &#x1D45D;) &#x21D4; (&#x1D45D; &#x2227; &#x1D45E;) &#x2228; (&#x00AC;&#x1D45D; &#x2227; &#x00AC;&#x1D45E;)

<details>
<summary>Proof</summary>

According to [biconditional statement definition](operations/relations/if-and-only-if.md#definition), &#x1D45D; &#x2194; &#x1D45E; &#x21D4; (&#x1D45D; &#x2192; &#x1D45E;) &#x2227; (&#x1D45E; &#x2192; &#x1D45D;)

Applying [conditional equivalence](#conditional-equivalence), (&#x00AC;&#x1D45D; &#x2228; &#x1D45E;) &#x2227; (&#x00AC;&#x1D45E; &#x2228; &#x1D45D;)

Applying [distributive law](#distributive-laws): ((&#x00AC;&#x1D45D; &#x2228; &#x1D45E;) &#x2227; &#x00AC;&#x1D45E;) &#x2228; ((&#x00AC;&#x1D45D; &#x2228; &#x1D45E;) &#x2227; &#x1D45D;)

Applying [distributive law](#distributive-laws): ((&#x00AC;&#x1D45D; &#x2227; &#x00AC;&#x1D45E;) &#x2228; (&#x1D45E; &#x2227; &#x00AC;&#x1D45E;)) &#x2228; ((&#x1D45D; &#x2227; &#x00AC;&#x1D45D;) &#x2228; (&#x1D45D; &#x2227; &#x1D45E;))

Applying [negation law](#negation-laws): ((&#x00AC;&#x1D45D; &#x2227; &#x00AC;&#x1D45E;) &#x2228; &#x1D7F6;) &#x2228; (&#x1D7F6; &#x2228; (&#x1D45D; &#x2227; &#x1D45E;))

Applying [identity law](#identity-laws): (&#x00AC;&#x1D45D; &#x2227; &#x00AC;&#x1D45E;) &#x2228; (&#x1D45D; &#x2227; &#x1D45E;)

Applying [commutative law](#commutative-laws): (&#x1D45D; &#x2227; &#x1D45E;) &#x2228; (&#x00AC;&#x1D45D; &#x2227; &#x00AC;&#x1D45E;)
</details>

### Contrapositive

&#x1D45D; &#x2192; &#x1D45E; &#x21D4; (&#x00AC;&#x1D45E; &#x2192; &#x00AC;&#x1D45D;)

## Practices

1. Determine the truth value of the following propositions:
   - If an integer is not even, then it is not a multiple of four.
   - The fact that a polygon is a rectangle is a necessary condition that it is a square.
   - If &#x1D465;<sup>&#x1D7F8;</sup> is not &#x1D7F8;&#x1D7FB;, then &#x1D465; is not &#x1D7FB;.
   - If &#x1D465; = &#x1D7F8; or &#x1D465; = &#x1D7F9;, then &#x1D465;<sup>&#x1D7F8;</sup> - &#x1D7FB;&#x1D465; + &#x1D7FC; = 0
   - &#x1D465; = &#x1D466; is a necessary condition for &#x1D465;<sup>&#x1D7F8;</sup> = &#x1D466;<sup>&#x1D7F8;</sup>