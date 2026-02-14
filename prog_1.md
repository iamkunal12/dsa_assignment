# Program 1: Balanced Parentheses Using Stack

## Objective
To check whether a given mathematical expression has balanced parentheses using the stack data structure.

---

## Problem Statement
Write a program to determine whether the parentheses in a mathematical expression are balanced or not.

Test expressions:
1. a + (b − c) ∗ (d  
2. m + [a − b ∗ (c + d ∗ {m)]  
3. a + (b − c)

---

## Concept Used

### Stack (LIFO – Last In First Out)

- Opening brackets are pushed into the stack.
- Closing brackets check the top of the stack.
- If matching pair → pop.
- If mismatch or stack empty → Not Balanced.
- At end:
  - If stack is empty → Balanced
  - If stack not empty → Not Balanced

---

## Algorithm

1. Initialize an empty stack.
2. Traverse the expression character by character.
3. If opening bracket `(` `{` `[` → push into stack.
4. If closing bracket `)` `}` `]`:
   - If stack is empty → Not Balanced.
   - Else check if top matches.
   - If matched → pop.
   - Else → Not Balanced.
5. After complete traversal:
   - If stack is empty → Balanced.
   - Else → Not Balanced.

---

## Sample Input & Output

### Example 1
Input: a + (b − c) ∗ (d
Output: not balanced.

### Example 2
Input: (a+b)-a
 Output: balanced.


## conclusion
This program successfully checks whether the given mathematical expression has balanced parentheses using the stack data structure.


