# 🧮 Simple Calculator in C

A beginner-friendly command-line calculator written in C.  
This project performs basic arithmetic operations using user input and runs in a continuous loop until the user chooses to exit.

---

## 📌 Features

- ➕ Addition  
- ➖ Subtraction  
- ✖ Multiplication  
- ➗ Division (with divide-by-zero handling)  
- 🔢 Remainder (modulus operation)  
- 🔁 Runs continuously until user exits  
- ⚠ Basic error handling  

---

## 🛠 Technologies Used

- C Programming Language  
- Standard C Library (`stdio.h`)  

---

## 📂 Project Structure
simple-calculator/
│
├── calculator.c
└── README.md

---

## ▶ How to Compile and Run

### 🔹 Using GCC

```bash
gcc calculator.c -o calculator
./calculator
```

---
### 🔹 On Windows (MinGW)

1. Open Command Prompt.
2. Navigate to your project folder:
   cd path\to\your\project

3. Compile the program:
  ``` gcc calculator.c -o calculator.exe```

4. Run the program:
   ```calculator.exe```
---

## 💡 How It Works

1. The program displays a menu with operation choices.
2. The user selects an option (1–6).
3. The program prompts the user to enter two numbers.
4. Based on the selected option, the corresponding arithmetic operation is performed.
5. The result is displayed on the screen.
6. The program continues running in a loop until the user selects the Exit option.

---

## ⚠ Input Handling

- Prevents division by zero during division and remainder operations.
- Displays an error message if the user attempts to divide by zero.
- Handles invalid menu choices by prompting the user to enter a valid option.
- Converts float inputs to integers internally for the remainder operation.

---

## 🚀 Learning Outcomes

This project helped in understanding:

- The use of `while` loops for continuous execution.
- Conditional statements (`if`, `else if`, `else`) for decision making.
- User input handling using `scanf`.
- Performing basic arithmetic operations in C.
- Type casting between data types.
- Basic error handling techniques.
- Structuring a simple menu-driven program.

---

## 🔮 Future Improvements

- Refactor the program using separate functions for each operation.
- Improve input validation to handle non-numeric inputs.
- Add support for continuous calculations without re-entering numbers.
- Implement a calculation history feature.
- Develop a graphical user interface (GUI) version.
