# Combinatorics

An art of quickly couting the number of objects in a set.

## The rule of products

If &#x1D45D;<sub>&#x1D7F7;</sub> and &#x1D45D;<sub>&#x1D7F8;</sub> are the number of ways to perform &#x1D45C;<sub>&#x1D7F7;</sub> and &#x1D45C;<sub>&#x1D7F8;</sub> operations, then there are &#x1D45D;<sub>&#x1D7F7;</sub>&#x1D45D;<sub>&#x1D7F8;</sub> ways to perform &#x1D45C;<sub>&#x1D7F7;</sub> and &#x1D45C;<sub>&#x1D7F8;</sub>. Note that &#x1D45D;<sub>&#x1D7F7;</sub> and &#x1D45D;<sub>&#x1D7F8;</sub> must be independent.

## Extended rule of products

If &#x1D45D;<sub>&#x1D7F7;</sub>, &#x1D45D;<sub>&#x1D7F8;</sub>, ..., and &#x1D45D;<sub>&#x1D45B;</sub> ways to perform each in &#x1D45B; operations, then there are &#x1D45D;<sub>&#x1D7F7;</sub>&#x1D45D;<sub>&#x1D7F8;</sub>...&#x1D45D;<sub>&#x1D45B;</sub> ways to accomplish &#x1D45B; operations.

## Factorials

If &#x1D45B; is a positive integer, the &#x1D45B; factorial is the product of &#x1D45B; and all positive integers being less than it, denoted &#x1D45B;!.

&#x1D45B;! = &#x1D7F7; * &#x1D7F8; * ... * (&#x1D45B;-1) * &#x1D45B;

By convention, &#x1D7F6;! = &#x1D7F7;.

### Examples

- &#x1D7F7;! = &#x1D7F7;
- &#x1D7F8;! = &#x1D7F7;! * &#x1D7F8; = &#x1D7F7; * &#x1D7F8; = &#x1D7F8;
- &#x1D7F9;! = &#x1D7F8;! * &#x1D7F9; = &#x1D7F8; * &#x1D7F9; = &#x1D7FC;
- &#x1D7FA;! = &#x1D7F9;! * &#x1D7FA; = &#x1D7FC; * &#x1D7FA; = &#x1D7F8;&#x1D7FA;
- &#x1D7FB;! = &#x1D7FA;! * &#x1D7FB; = &#x1D7F8;&#x1D7FA; * &#x1D7FB; = &#x1D7F7;&#x1D7F8;&#x1D7F6;
- &#x1D7FC;! = &#x1D7FB;! * &#x1D7FC; = &#x1D7F7;&#x1D7F8;&#x1D7F6; * &#x1D7FC; = &#x1D7FD;&#x1D7F8;&#x1D7F6;
- &#x1D7FD;! = &#x1D7FC;! * &#x1D7FD; = &#x1D7FD;&#x1D7F8;&#x1D7F6; * &#x1D7FD; = &#x1D7FB;&#x1D7F6;&#x1D7FA;&#x1D7F6;
- &#x1D7FE;! = &#x1D7FD;! * &#x1D7FE; = &#x1D7FD;&#x1D7F8;&#x1D7F6; * &#x1D7FE; = &#x1D7FB;&#x1D7F6;&#x1D7FA;&#x1D7F6; * &#x1D7FE; = &#x1D7FA;&#x1D7F6;&#x1D7F9;&#x1D7F8;&#x1D7F6;
- &#x1D7FF;! = &#x1D7FE;! * &#x1D7FF; = &#x1D7FA;&#x1D7F6;&#x1D7F9;&#x1D7F8;&#x1D7F6; * &#x1D7FF; = &#x1D7F9;&#x1D7FC;&#x1D7F8;&#x1D7FE;&#x1D7FE;&#x1D7F6;

## Practices

1. If having &#x1D45B; different toys, how many ways to give them all to two children such that one child must have at least one toy?