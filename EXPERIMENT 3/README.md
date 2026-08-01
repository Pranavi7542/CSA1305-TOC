# ε-Closure of an NFA with ε-Moves in C

## 📌 Project Overview

This project implements a **C program** to compute the **ε-closure (epsilon-closure)** of every state in a **Non-Deterministic Finite Automata (NFA)** with **ε-transitions (epsilon moves)**.

The program accepts the number of states and the ε-transition matrix as input and computes the ε-closure of each state using recursion (Depth First Search). The ε-closure of a state consists of the state itself and all other states reachable through zero or more ε-transitions.

---

## 🎯 Aim

To write and execute a C program to find the **ε-closure of all states** in a **Non-Deterministic Finite Automata (NFA)** with **ε-moves**.

---

## 📖 Theory

The **ε-closure** of a state is the set of all states that can be reached from that state using **zero or more ε-transitions**.

- Every state belongs to its own ε-closure.
- If an ε-transition exists from one state to another, the destination state is also included.
- The process continues recursively until no new states can be reached.

### Example

Consider an NFA with the following ε-transitions:

- q0 → q1
- q1 → q2
- q2 → q3

Then,

- ε-Closure(q0) = {q0, q1, q2, q3}
- ε-Closure(q1) = {q1, q2, q3}
- ε-Closure(q2) = {q2, q3}
- ε-Closure(q3) = {q3}

---

## ⚙️ Algorithm

1. Start the program.
2. Read the number of states.
3. Read the ε-transition matrix.
4. For each state:
   - Mark all states as unvisited.
   - Include the current state in its ε-closure.
   - Recursively visit every state reachable through ε-transitions.
5. Print the ε-closure of every state.
6. Stop the program.

---

## 💻 Source Code

```c
#include <stdio.h>

#define MAX 10

int n;
int epsilon[MAX][MAX];
int visited[MAX];

void eclosure(int state)
{
    int i;

    visited[state] = 1;
    printf("q%d ", state);

    for(i = 0; i < n; i++)
    {
        if(epsilon[state][i] == 1 && !visited[i])
        {
            eclosure(i);
        }
    }
}

int main()
{
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix (0 or 1):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &epsilon[i][j]);
        }
    }

    printf("\nEpsilon Closures:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            visited[j] = 0;

        printf("E-Closure(q%d) = { ", i);
        eclosure(i);
        printf("}\n");
    }

    return 0;
}
```

---

## ▶️ How to Compile

Using GCC:

```bash
gcc epsilon_closure.c -o epsilon_closure
```

---

## ▶️ How to Run

### Windows

```bash
epsilon_closure.exe
```

### Linux / macOS

```bash
./epsilon_closure
```

---

## 🖥️ Sample Input

```
Enter number of states: 4

Enter epsilon transition matrix (0 or 1):

0 1 0 0
0 0 1 0
0 0 0 1
0 0 0 0
```

---

## 🖥️ Sample Output

```
Epsilon Closures:

E-Closure(q0) = { q0 q1 q2 q3 }
E-Closure(q1) = { q1 q2 q3 }
E-Closure(q2) = { q2 q3 }
E-Closure(q3) = { q3 }
```

---

## 📂 Project Structure

```
NFA-Epsilon-Closure/
│── epsilon_closure.c
│── README.md
```

---

## 🛠️ Technologies Used

- C Programming
- GCC Compiler
- Command Line Interface

---

## 🎓 Learning Outcome

After completing this experiment, you will be able to:

- Understand the concept of **ε-transitions** in an NFA.
- Compute the **ε-closure** of every state.
- Implement recursive graph traversal in C.
- Apply ε-closure computation during NFA-to-DFA conversion.

---

## 📌 Result

The C program successfully computes the **ε-closure of all states** in a **Non-Deterministic Finite Automata (NFA)** with **ε-moves**. The program correctly identifies all states reachable through zero or more ε-transitions for every state in the automaton.

---

**Course:** Formal Languages and Automata Theory (FLAT)  
**Language:** C  
**Experiment:** ε-Closure of an NFA with ε-Moves
