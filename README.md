# Push_Swap

<p align="center">
  <img src="https://user-images.githubusercontent.com/94384240/170144677-24ff4d41-6e4a-491a-adfa-7dcf0eac630a.jpeg" alt="42 School Logo" width="300">
</p>

## 🔢 42 Cursus - Push_Swap

The *Push_Swap* project is an algorithmic challenge where the goal is to sort a stack of numbers with a limited set of operations.
The fewer moves you use, the better your solution!

This project is an excellent way to improve problem-solving skills, understand sorting algorithms, and optimize efficiency.

📜 To see the project subject, [click here](https://github.com/jlebre/42Push_Swap/blob/main/push_swap.pdf)!

---

## 📂 Important Files

🔹 To see the `.h` file, [click here](https://github.com/jlebre/42Push_Swap/blob/main/push_swap.h)!

🔹 To see the `Makefile`, [click here](https://github.com/jlebre/42Push_Swap/blob/main/Makefile)!

🔹 [Main Function](https://github.com/jlebre/42Push_Swap/blob/main/srcs/push_swap.c)

🔹 [Stack Operations](https://github.com/jlebre/42Push_Swap/blob/main/srcs/operations.c)

🔹 [Sorting Algorithms](https://github.com/jlebre/42Push_Swap/blob/main/srcs/sorting.c)

🔹 [Utility Functions](https://github.com/jlebre/42Push_Swap/blob/main/srcs/utils.c)

🔹 [Argument Parser](https://github.com/jlebre/42Push_Swap/blob/main/srcs/parser.c)

🔹 [Error Handling](https://github.com/jlebre/42Push_Swap/blob/main/srcs/error.c)

---

## 🛠 How to Use

### 1️⃣ Clone the Repository
```bash
git clone https://github.com/jlebre/42Push_Swap.git
cd 42Push_Swap
```

### 2️⃣ Compile the Program
```bash
make
```

### 3️⃣ Run the Program
```bash
./push_swap <list_of_numbers>
```
Example:
```bash
./push_swap 3 2 5 1 4
```

This will output a sequence of operations to sort the stack.

### 4️⃣ Checker (Bonus)
To verify if your output is correct, use the *checker* program (if implemented):
```bash
./push_swap 3 2 5 1 4 | ./checker 3 2 5 1 4
```
If the output is `OK`, the sorting sequence is correct; otherwise, it will return `KO`.

---

## 📊 Operations Overview

- `sa` / `sb` - Swap the first two elements of stack A/B
- `ss` - Swap the first two elements of both stacks
- `pa` / `pb` - Push the top element from one stack to another
- `ra` / `rb` - Rotate stack A/B (shift up all elements by 1)
- `rr` - Rotate both stacks at the same time
- `rra` / `rrb` - Reverse rotate stack A/B (shift down all elements by 1)
- `rrr` - Reverse rotate both stacks at the same time

---

![image](https://github.com/user-attachments/assets/2f108f98-715c-4416-90c0-f2ce22348269)
