# Deterministic Finite Automata (DFA) Simulation in C

## 📌 Project Overview

This project implements a **Deterministic Finite Automata (DFA)** in the C programming language. The DFA accepts strings over the alphabet **{a, b}** that **start with 'a' and end with 'a'**.

The program reads an input string from the user and determines whether it satisfies the given language. If the string starts with **'a'** and ends with **'a'**, it is accepted; otherwise, it is rejected.

---

## 🎯 Aim

To write and execute a C program to simulate a **Deterministic Finite Automata (DFA)** for the language representing strings that **start with 'a' and end with 'a'**.

---

## 📖 Language

**L = { w | w starts with 'a' and ends with 'a' }**

### Accepted Strings
- a
- aa
- aba
- abba
- aabba

### Rejected Strings
- b
- ba
- abb
- baba
- bb

---

## ⚙️ Algorithm

1. Start the program.
2. Read the input string.
3. Find the length of the string.
4. Check whether the first character is **'a'**.
5. Check whether the last character is **'a'**.
6. If both conditions are true, display **"String Accepted"**.
7. Otherwise, display **"String Rejected"**.
8. Stop the program.

---

## 💻 Source Code

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len > 0 && str[0] == 'a' && str[len - 1] == 'a')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
```

---

## ▶️ How to Compile

Using GCC:

```bash
gcc dfa.c -o dfa
```

---

## ▶️ How to Run

### Windows

```bash
dfa.exe
```

### Linux / macOS

```bash
./dfa
```

---

## 🖥️ Sample Output

### Example 1

**Input**

```
Enter the string: aba
```

**Output**

```
String Accepted
```

---

### Example 2

**Input**

```
Enter the string: abb
```

**Output**

```
String Rejected
```

---

## 📂 Project Structure

```
DFA-Simulation/
│── dfa.c
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

- Understand the concept of Deterministic Finite Automata (DFA).
- Simulate DFA using the C programming language.
- Verify whether a string belongs to a specified regular language.
- Apply finite automata concepts in compiler design and formal language processing.

---

## 📌 Result

The C program successfully simulates a **Deterministic Finite Automata (DFA)** for strings that **start with 'a' and end with 'a'**. The program correctly accepts valid strings and rejects invalid strings according to the specified language.

---

**Course:** Formal Languages and Automata Theory (FLAT)  
**Language:** C  
**Experiment:** DFA Simulation
