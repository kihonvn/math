# A Recursive Definition For A Sequence

## Definition

### A recurrence relation of a sequence

A recurrence relation of a sequence (&#x1D44E;<sub>&#x1D45B;</sub>)<sub>&#x1D45B;&#x2265;&#x1D7F6;</sub> is an equation relating a term of the sequence to previous terms (terms with smaller index).

### An initial condition of a sequence

An initial condition of a sequence is a list of few terms of the sequence.

### A recursive definition of a sequence

A recursive definition for a sequence consists a [recurrence relation](#a-recurrence-relation-of-a-sequence) and an [initial condition](#an-initial-condition-of-a-sequence).

### Examples

- &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D7F8;&#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> with &#x1D44E;<sub>&#x1D7F6;</sub> = 1
- &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> + &#x1D44E;<sub>&#x1D45B;-&#x1D7F8;</sub> with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F6; and &#x1D44E;<sub>&#x1D7F7;</sub> = &#x1D7F7;

## Practices

1. Find the recursive definitions of the following sequences
   - &#x1D7F8;, &#x1D7FB;, &#x1D7FE;, &#x1D7F7;&#x1D7F7;, ... 
   - &#x1D7F7;, &#x1D7FB;, &#x1D7FF;, &#x1D7F7;&#x1D7F9;, ...
   - &#x1D7FB;&#x1D7F6;, &#x1D7FA;&#x1D7F9;, &#x1D7F9;&#x1D7FC;, &#x1D7F8;&#x1D7FF;, ...
1. Find the recursive definitions of the following sequences
   - &#x1D7F8;, &#x1D7FC;, &#x1D7F7;&#x1D7FE;, &#x1D7FB;&#x1D7FA;, ...
   - &#x1D7F9;, &#x1D7FC;, &#x1D7F7;&#x1D7F8;, &#x1D7F8;&#x1D7FA;, ...
   - &#x1D7F8;&#x1D7FD;, &#x1D7FF;, &#x1D7F9;, &#x1D7F7;, ...
1. Find the recursive definitions of the following sequences
   - &#x1D7F7;, &#x1D7F9;, &#x1D7FC;, &#x1D7F7;&#x1D7F6;, &#x1D7F7;&#x1D7FB;, ...

## Answers

1. 
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> + &#x1D7F9; with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F8;
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> + &#x1D7FA; with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F7;
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> - &#x1D7FD; with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7FB;&#x1D7F6;
1. 
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D7F9;&#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F8;
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D7F8;&#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F9;
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D7F9;<sup>-&#x1D7F7;</sup>&#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F8;&#x1D7FD;
1. 
   - &#x1D44E;<sub>&#x1D45B;</sub> = &#x1D44E;<sub>&#x1D45B;-&#x1D7F7;</sub> + &#x1D45B; + &#x1D7F7; with &#x1D44E;<sub>&#x1D7F6;</sub> = &#x1D7F7;

## See also

- [Closed-formula of a sequence](closed-formula.md#definition)