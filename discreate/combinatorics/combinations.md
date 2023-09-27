# Combinations

Order is not important in combinations.

## Definitions

### Binomial coefficient

Let &#x1D45B; and &#x1D458; be non-negative integers. The binomial coefficient of &#x1D45B; and &#x1D458;, &#x1D436;(&#x1D45B;, &#x1D458;), is ***the number of combinations*** of &#x1D45B; objects taken &#x1D458; at a time, and is read "***&#x1D45B; choose &#x1D458;***".

## Theorems

### Binomial coefficient formula

Let &#x1D45B; and &#x1D458; be non-negative integers and &#x1D458; <= &#x1D45B;.

&#x1D436;(&#x1D45B;, &#x1D458;) = &#x1D45B;! / ((&#x1D45B; - &#x1D458;)! * &#x1D458;!)

### Binomial theorem

*Binomial theorem gives us a formula for expanding (&#x1D465;+&#x1D466;)<sup>&#x1D45B;</sup>, &#x1D45B; &#x2208; &#x2115; and &#x1D465;, &#x1D466; &#x2208; &#x211D;.*

Let &#x1D45B; be non-negative integer.

(&#x1D465; + &#x1D466;)<sup>&#x1D45B;</sup> = &#x2211;<sub>&#x1D458; in &#x1D7F6;, &#x1D45B;</sub> &#x1D436;(&#x1D45B; &#x1D458;) &#x1D465;<sup>&#x1D45B; - &#x1D458;</sup>&#x1D466;<sup>&#x1D458;</sup>

- &#x1D45B; = &#x1D7F9;
  - &#x1D7F9;!/(&#x1D7F9;-&#x1D7F6;)! * &#x1D7F6;! = &#x1D7F7;
  - &#x1D7F9;!/(&#x1D7F9;-&#x1D7F7;)! * &#x1D7F7;! = &#x1D7F9;
  - &#x1D7F9;!/(&#x1D7F9;-&#x1D7F8;)! * &#x1D7F8;! = &#x1D7F9;
  - &#x1D7F9;!/(&#x1D7F9;-&#x1D7F9;)! * &#x1D7F9;! = &#x1D7F7;
- &#x1D45B; = &#x1D7FA;
  - &#x1D7FA;!/(&#x1D7FA;-&#x1D7F6;)! * &#x1D7F6;! = &#x1D7F7;
  - &#x1D7FA;!/(&#x1D7FA;-&#x1D7F7;)! * &#x1D7F7;! = &#x1D7FA;
  - &#x1D7FA;!/(&#x1D7FA;-&#x1D7F8;)! * &#x1D7F8;! = &#x1D7FC;
  - &#x1D7FA;!/(&#x1D7FA;-&#x1D7F9;)! * &#x1D7F9;! = &#x1D7FA;
  - &#x1D7FA;!/(&#x1D7FA;-&#x1D7FA;)! * &#x1D7FA;! = &#x1D7F7;
- &#x1D45B; = &#x1D7FB;
  - &#x1D7FB;!/(&#x1D7FB;-&#x1D7F6;)! * &#x1D7F6;! = &#x1D7F7;
  - &#x1D7FB;!/(&#x1D7FB;-&#x1D7F7;)! * &#x1D7F7;! = &#x1D7FB;
  - &#x1D7FB;!/(&#x1D7FB;-&#x1D7F8;)! * &#x1D7F8;! = &#x1D7F7;&#x1D7F6;
  - &#x1D7FB;!/(&#x1D7FB;-&#x1D7F9;)! * &#x1D7F9;! = &#x1D7F7;&#x1D7F6;
  - &#x1D7FB;!/(&#x1D7FB;-&#x1D7FA;)! * &#x1D7FA;! = &#x1D7FB;
  - &#x1D7FB;!/(&#x1D7FB;-&#x1D7FB;)! * &#x1D7FB;! = &#x1D7F7;
- &#x1D45B; = &#x1D7FC;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7F6;)! * &#x1D7F6;! = &#x1D7F7;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7F7;)! * &#x1D7F7;! = &#x1D7FC;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7F8;)! * &#x1D7F8;! = &#x1D7F7;&#x1D7FB;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7F9;)! * &#x1D7F9;! = &#x1D7F8;&#x1D7F6;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7FA;)! * &#x1D7FA;! = &#x1D7F7;&#x1D7FB;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7FB;)! * &#x1D7FB;! = &#x1D7FC;
  - &#x1D7FC;!/(&#x1D7FC;-&#x1D7FC;)! * &#x1D7FC;! = &#x1D7F7;

## Practices

1. If we toss a fair coin five times, how many cases do we get three heads?
1. A pizza parlor offers 𝟩 toppings. How many 𝟤-topping pizzas could they put on their menu? Assume double toppings are not allowed.
1. Alex has 𝟩 friends and wants to go on a trip, but his car only has 𝟧 seats (including the driver's seat). If Alex is always one of the passengers, how many ways can he choose his friends to join him on the trip?
1. The coefficient of 𝑥<sup>𝟧</sup> in the expansion of (𝟣-𝟤𝑥)<sup>𝟩</sup> is?


## Answers

1. 
1. 𝐶(𝟩, 𝟤)
1. 𝐶(𝟩, 𝟦)
1. -𝟤<sup>𝟧</sup> * 𝐶(𝟩, 𝟧)
