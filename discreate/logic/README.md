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

### Logical disjunction

Let &#x1D45D; and &#x1D45E; be propositions. The values of &#x1D45D; &#x2228; &#x1D45E;, their disjunction, is defined by the following truth table:

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2228; &#x1D45E;
|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F6;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

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

### The converse of a conditional statement

The converse of &#x1D45D; &#x2192; &#x1D45E; is &#x1D45E; &#x2192; &#x1D45D;.

|&#x1D45D;|&#x1D45E;|&#x1D45D; &#x2192; &#x1D45E;|&#x1D45E; &#x2192; &#x1D45D;
|:-:|:-:|:-:|:-:
|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;
|&#x1D7F6;|&#x1D7F7;|&#x1D7F7;|&#x1D7F6;
|&#x1D7F7;|&#x1D7F6;|&#x1D7F6;|&#x1D7F7;
|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;|&#x1D7F7;

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