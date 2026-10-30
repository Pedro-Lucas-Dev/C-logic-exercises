<div align="center">

# 🧠 C Logic Exercises

**It's not about the answer. It's about how I got there.**

![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/status-in%20progress-yellow?style=for-the-badge)
![Focus](https://img.shields.io/badge/focus-problem%20solving-8A2BE2?style=for-the-badge)

</div>

---

## 📖 About

This repository is a record of **how I think**.

While taking a programming logic course (taught in C), I decided not to just copy the official answers. Instead, I solve each problem on my own first, and then I save my reasoning side by side with the course's solution.

The course already provides the correct answers, so the goal here is different: to **document my own problem-solving process**, compare it with other approaches, and watch my logic evolve over time.

## 🎯 Purpose

- **Track my thinking**: keep my original solution exactly as I wrote it.
- **Compare approaches**: put my answer next to the course's solution and see where they differ.
- **Learn from the gap**: every difference is a chance to improve.
- **Build a portfolio of progress**: the commit history shows how my logic matures.

## 🗂️ How each file is organized

Every exercise lives in its own `.c` file, and every file follows the same three-part structure:

| Part | What it contains |
| :--- | :--- |
| 📝 **Problem** | The exercise statement, committed as a comment at the top of the file |
| 💡 **My solution** | The code I wrote on my own, before looking at the answer |
| ✅ **Course solution** | The official answer, committed as a comment for comparison |

### Example layout

```c
/*
 * ============================================================
 *  PROBLEM
 * ============================================================
 *  Write a program that reads two integers and prints
 *  their sum.
 */

#include <stdio.h>

/* ============================================================
 *  MY SOLUTION
 * ============================================================ */
int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);

    return 0;
}

/*
 * ============================================================
 *  COURSE SOLUTION
 * ============================================================
 *
 *  #include <stdio.h>
 *
 *  int main(void)
 *  {
 *      int x, y, sum;
 *      scanf("%d %d", &x, &y);
 *      sum = x + y;
 *      printf("%d\n", sum);
 *      return 0;
 *  }
 */
```

## 📁 Example Repository Structure

```text
logica-c/
├── 01-basics/
│   ├── 01-sum.c
│   └── 02-average.c
├── 02-conditionals/
│   └── ...
├── 03-loops/
│   └── ...
└── README.md
```

> The folders follow the order of the course modules. Names may evolve as the course moves forward.

## ⚙️ How to compile and run

I'm working on **Windows**, using **GCC** (via MinGW-w64) from the terminal.

```bash
# Compile
gcc -Wall -Wextra -o exercise.exe path\to\file.c

# Run
exercise.exe
```

> Not sure GCC is installed? Run `gcc --version` to check.

## 🔄 My workflow

1. **Read** the problem carefully.
2. **Think** about it and solve it on my own, with no AI and no peeking at the answer.
3. **Test** my solution with different inputs.
4. **Compare** it with the course's answer.
5. **Commit** the problem, my solution and the official solution together.

## 🛠️ Tools

- **Language:** C
- **Editor:** Cursor
- **Compiler:** GCC (MinGW-w64)
- **OS:** Windows
- **Version control:** Git & GitHub

## 🤖 A note on AI

**All the solutions in this repository were written by me, without the use of AI.** The only exception is this README, which was written with the help of AI.

## 💬 A note on the solutions

My solutions are not always the shortest or the most elegant, and that's intentional. They show the way I reasoned at that moment. Seeing them next to the course's answers is what makes this repository useful to me.
