# Direct Proof

## Examples

### p → r, q → s, p ∨ q ⇒ s ∨ r

<table style="text-align: center">
  <thead>
    <tr>
      <th>Step</th>
      <th>Proposition</th>
      <th>Justification</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>1</td>
      <td>p ∨ q</td>
      <td><i>Premise</i></td>
    </tr>
    <tr>
      <td>2</td>
      <td>¬p → q</td>
      <td><i>Conditional rule on 1</i></td>
    </tr>
    <tr>
      <td>3</td>
      <td>q → s</td>
      <td><i>Premise</i></td>
    </tr>
    <tr>
      <td>4</td>
      <td>¬p → s</td>
      <td><i>Chain rule on 2 and 3</i></td>
    </tr>
    <tr>
      <td>5</td>
      <td>¬s → p</td>
      <td><i>Contrapositive on 4</i></td>
    </tr>
    <tr>
      <td>6</td>
      <td>p → r</td>
      <td><i>Premise</i></td>
    </tr>
    <tr>
      <td>7</td>
      <td>¬s → r</td>
      <td><i>Chain rule on 5 and 6</i></td>
    </tr>
    <tr>
      <td>8</td>
      <td>s ∨ r</td>
      <td><i>Conditional rule on 7 ∎</i></td>
    </tr>
  </tbody>
</table>

### ¬p ∨ q, s ∨ p, ¬q ⇒ s

<table style="text-align: center">
  <thead>
    <tr>
      <th>Step</th>
      <th>Proposition</th>
      <th>Justification</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>1</td>
      <td>¬p ∨ q</td>
      <td><i>Premise</i></td>
    </tr>
    <tr>
      <td>2</td>
      <td>q ∨ ¬p</td>
      <td><i>Commutative rule on 1</i></td>
    </tr>
    <tr>
      <td>3</td>
      <td>¬q → ¬p</td>
      <td><i>Conditional rule on 2</i></td>
    </tr>
    <tr>
      <td>4</td>
      <td>s ∨ p</td>
      <td><i>Premise</i></td>
    </tr>
    <tr>
      <td>5</td>
      <td>p ∨ s</td>
      <td><i>Commutative rule on 4</i></td>
    </tr>
    <tr>
      <td>6</td>
      <td>¬p → s</td>
      <td><i>Conditional rule on 5</i></td>
    </tr>
    <tr>
      <td>7</td>
      <td>¬q → s</td>
      <td><i>Chain rule on 3 and 6 ∎</i></td>
    </tr>
  </tbody>
</table>