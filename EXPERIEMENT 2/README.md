# Non-Deterministic Finite Automata (NFA) Simulation in C

## 📌 Project Overview

This project implements a **Non-Deterministic Finite Automata (NFA)** in the C programming language. The NFA accepts binary strings over the alphabet **{0,1}** that **start with '0' and end with '1'**.

The program reads a binary string from the user and determines whether it belongs to the specified language. If the string starts with **'0'** and ends with **'1'**, the string is accepted; otherwise, it is rejected.

---

## 🎯 Aim

To write and execute a C program to simulate a **Non-Deterministic Finite Automata (NFA)** for the language representing binary strings that **start with '0' and end with '1'**.

---

## 📖 Language

**L = { w | w starts with '0' and ends with '1' }**

### Accepted Strings

- 01
- 001
- 011
- 0101
- 0001

### Rejected Strings

- 10
- 111
- 000
- 1
- 0

---

## ⚙️ Algorithm

1. Start the program.
2. Read the input binary string.
3. Find the length of the string.
4. Check whether the first character is **'0'**.
5. Check whether the last character is **'1'**.
6. If both conditions are satisfied, display **"String Accepted"**.
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

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len > 0 && str[0] == '0' && str[len - 1] == '1')
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
gcc nfa.c -o nfa
```

---

## ▶️ How to Run

### Windows

```bash
nfa.exe
```

### Linux / macOS

```bash
./nfa
```

---

## 🖥️ Sample Output

### Example 1

**Input**

```
Enter the binary string: 0101
```

**Output**

```
String Accepted
```

---

### Example 2

**Input**

```
Enter the binary string: 1110
```

**Output**

```
String Rejected
```

---

## 📂 Project Structure

```
NFA-Simulation/
│── nfa.c
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

- Understand the concept of Non-Deterministic Finite Automata (NFA).
- Simulate an NFA using the C programming language.
- Verify whether a binary string belongs to a specified regular language.
- Apply automata concepts in compiler design and formal language processing.

---

## 📌 Result

The C program successfully simulates a **Non-Deterministic Finite Automata (NFA)** for binary strings that **start with '0' and end with '1'**. The program correctly accepts valid strings and rejects invalid strings according to the specified language.

---

**Course:** Formal Languages and Automata Theory (FLAT)  
**Language:** C  
**Experiment:** NFA Simulation
