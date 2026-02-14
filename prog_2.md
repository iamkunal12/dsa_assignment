# Infix to Postfix Conversion and Evaluation

## Data Structures used.

The program uses a stack implemented using a structure:

- A structure `Stack` is defined with:
  - `int top` to store the index of the top element.
  - `char items[SIZE]` to store stack elements.
- The stack is used for:
  - Storing operators during infix to postfix conversion.
  - Storing operands during postfix evaluation.

The stack is implemented using an array of fixed size (20).


##  Functions

1. init(Stack *s)  
   Initializes the stack by setting `top = -1`.

2. isEmpty(Stack *s)  
   Checks whether the stack is empty.

3. push(Stack *s, char value)  
   Pushes an element onto the stack.

4. pop(Stack *s)  
   Removes and returns the top element from the stack.

5. peek(Stack *s)  
   Returns the top element without removing it.

6. precedence(char op)  
   Returns the precedence of operators:
   `+`, `-` → 1  
   `*`, `/` → 2  
   `^` → 3  

7. infixToPostfix(char infix[], char postfix[])  
   Converts an infix expression into postfix form using stack and operator precedence rules.

8. evaluatePostfix(char postfix[])  
   Evaluates the postfix expression using stack operations and returns the result.


##  main() Function

- Takes infix expression input from the user.
- Calls `infixToPostfix()` to convert it into postfix form.
- Displays the postfix expression.
- Calls `evaluatePostfix()` to calculate the result.
- Displays the final evaluated result.


## Sample Output

Enter any infix expression : 2+3*4  
the postfix expression is: 234*+  
the evaluated result is : 14