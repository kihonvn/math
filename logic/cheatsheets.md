# Cheat Sheet

## Equivalences (⇔)

|Name|Content
|-|-
|Commutative Law|p ∧ q ⇔ q ∧ p<br>p ∨ q ⇔ q ∨ p
|Associative Law|(p ∧ q) ∧ r ⇔ p ∧ (q ∧ r)<br>(p ∨ q) ∨ r ⇔ p ∨ (q ∨ r)
|Distributive Law|p ∧ (q ∨ r) ⇔ (p ∧ q) ∨ (p ∨ r)<br>p ∨ (q ∧ r) ⇔ (p ∨ q) ∧ (p ∨ r)
|Identity Law|p ∨ 0 ⇔ p<br>p ∧ 1 ⇔ p
|Negation Law|p ∧ ¬p ⇔ 0<br>p ∨ ¬p ⇔ 1
|Idempotent Law|p ∧ p ⇔ p<br>p ∨ p ⇔ p
|Null Law|p ∧ 0 ⇔ 0<br>p ∨ 1 ⇔ 1
|Absorption Law|p ∧ (p ∨ q) ⇔ p<br>p ∨ (p ∧ q) ⇔ p
|DeMorgan's Law|¬(p ∧ q) ⇔ ¬p ∨ ¬q<br>¬(p ∨ q) ⇔ ¬p ∧ ¬q
|Involution Law|¬(¬p) ⇔ p
|Conditional Equivalence|p → q ⇔ ¬p ∨ q
|Biconditional Equivalence|p ↔ q ⇔ (p → q) ∧ (q → p) ⇔ (p ∧ q) ∨ (¬p ∧ ¬q)
|Contrapositive|(p → q) ⇔ (¬q → ¬p)

## Implications (⇒)

|Name|Content
|-|-
|Detachment<br>(Aka Modus Ponens)|(p → q) ∧ p ⇒ q
|Indirect reasoning<br>(Aka Modus Tollens)|(p → q) ∧ ¬q ⇒ ¬p
|Disjunctive Addition|p ⇒ (p ∨ q)
|Conjunctive Simplification|(p ∧ q) ⇒ p<br>(p ∧ q) ⇒ q
|Disjunctive Simplification|(p ∨ q) ∧ ¬p ⇒ q<br>(p ∨ q)