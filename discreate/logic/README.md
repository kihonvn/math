# Logic

## Propositions

A proposition is a sentence having a definite truth value (i.e., we can say it is true or false).

## Truth tables

A truth table is a table where each column contains possible truth values of a proposition. In a truth table, &#x1D7F6; and &#x1D7F7; represent &#x1D461;&#x1D45F;&#x1D462;&#x1D452; and &#x1D453;&#x1D44E;&#x1D459;&#x1D460;&#x1D452;, respectively.

## Logical operations

### Logical conjunctions

Let &#x1D45D; and &#x1D45E; be propositions. The values of &#x1D45D; &#x2227; &#x1D45E;, their conjunction, is defined by the following truth table:

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2227; &#x1D45E;
|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

The conjunction of propositions is true, if all propositions are true.

### Logical disjunction

Let &#x1D45D; and &#x1D45E; be propositions. The values of &#x1D45D; &#x2228; &#x1D45E;, their disjunction, is defined by the following truth table:

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2228; &#x1D45E;
|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

The disjunction of propositions is false, if all propositions are false.

### Logical negations

Let &#x1D45D; be propositions. The values of &#x00AC;&#x1D45D;, its negation, is defined by the following truth table:

|&#x1D45D;|&#x00AC;&#x1D45D;
|:-:|:-:
|&#x1D7F6;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F6;

### Conditional statements

The conditional statement, "If &#x1D45D; then &#x1D45E;", denoted &#x1D45D; &#x2192; &#x1D45E;, is defined by the following truth table:

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2192; &#x1D45E;
|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

We also say:
- &#x1D45D; implies &#x1D45E;.
- &#x1D45E; follows from &#x1D45D;.
- &#x1D45E;, if &#x1D45E;.
- &#x1D45D;, only if &#x1D45E;.
- &#x1D45D; is sufficient for &#x1D45E;.
- &#x1D45E; is necessary for &#x1D45D;.

The conditional statement of propositions is false, if the necessary condition is true and the sufficient condition is false.

### The converse of a conditional statement

The converse of &#x1D45D; &#x2192; &#x1D45E; is &#x1D45E; &#x2192; &#x1D45D;.

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2192; &#x1D45E;|&#x1D45E; &#x2192; &#x1D45D;
|:-:|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

The converse of a conditional statement is false, if the sufficient condition is true and the necessary is false.

### The contrapositive of a conditional statement

The contrapositive of &#x1D45D; &#x2192; &#x1D45E; is &#x00AC;&#x1D45E; &#x2192; &#x00AC;&#x1D45D;.

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2192; &#x1D45E;|&#x00AC;&#x1D45E; &#x2192; &#x00AC;&#x1D45D;
|:-:|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

As you can see, a conditional statement and its contrapositive have the same logical meaning. It means we can prove a conditional statement by proving its contrapositive instead.

### The inverse of a conditional statement

The inverse of &#x1D45D; &#x2192; &#x1D45E; is &#x00AC;&#x1D45D; &#x2192; &#x00AC;&#x1D45E;.

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2192; &#x1D45E;|&#x00AC;&#x1D45D; &#x2192; &#x00AC;&#x1D45E;
|:-:|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

The inverse and converse of a conditional statement have the same logical meaning.

### The biconditional statement

The bicondional statement, "&#x1D45D; if and only if &#x1D45E;", denoted &#x1D45D; &#x2194; &#x1D45E;, is defined by the following truth table:

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2194; &#x1D45E;
|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

We also say:
- &#x1D45D; is necessary and sufficient for &#x1D45E;.
- &#x1D45D; is equivalent to &#x1D45E;.
- If &#x1D45D;, then &#x1D45E;, and if &#x1D45E;, then &#x1D45D;.
- If &#x1D45D;, then &#x1D45E;, and conversely.

The biconditional statement of propositions is true, if all propositions have the same truth value.

### Logical operations precedence

1. [Negation](#logical-negations)
1. [Conjunction](#logical-conjunctions)
1. [Disjunction](#logical-disjunction)
1. [Conditional statement](#conditional-statements)
1. [Biconditional statement](#the-biconditional-statement)

In the same level, check from left to right. As usual, we can use parentheses to override the order.

## Practices

1. Determine the truth value of the following propositions:
   - If an integer is not even, then it is not a multiple of four.
   - The fact that a polygon is a rectangle is a necessary condition that it is a square.
   - If &#x1D465;<sup>&#x1D7F8;</sup> is not &#x1D7F8;&#x1D7FB;, then &#x1D465; is not &#x1D7FB;.
   - If &#x1D465; = &#x1D7F8; or &#x1D465; = &#x1D7F9;, then &#x1D465;<sup>&#x1D7F8;</sup> - &#x1D7FB;&#x1D465; + &#x1D7FC; = 0
   - &#x1D465; = &#x1D466; is a necessary condition for &#x1D465;<sup>&#x1D7F8;</sup> = &#x1D466;<sup>&#x1D7F8;</sup>