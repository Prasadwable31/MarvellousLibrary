# 📘 MarvellousLibrary

**MarvellousLibrary** is a modular C project containing reusable mathematical and logical utility functions.  It demonstrates **clean folder structure, automated builds with Makefile**.


The project is fully **unit-tested** using the [Unity Test Framework](https://github.com/ThrowTheSwitch/Unity).

This project can act as a **foundation library** for larger projects like calculators, system utilities, or learning assignments.

---

## 📂 Project Structure

```
MarvellousLibrary/
│── src/                 # Source files
│   ├── Main.c           # Entry point (demo / application driver)
│   ├── Helper.c         # Implementation of all utility functions
│
│── include/             # Header files
│   ├── Marvellous.h     # Function prototypes and declarations
│
│── Test/                # Unit testing files
│   ├── Testing_Calculator.c   # Unit test cases for all functions
│   ├── unity.c
│   ├── unity.h
│
│── Makefile             # Build automation
│── README.md            # Project documentation
```

---

## ⚙️ Features

- Basic arithmetic operations: `Addition`, `Subtraction`, `Multiplication`, `Division`, `Modulo`
- Advanced operations: `Power`, `Factorial`, `Percentage`, `SumRange`
- Number utilities: `CheckPrime`, `CheckPerfect`, `Reverse`, `CountDigits`, `SumDigits`
- Divisibility checks & factor display
- Negative and edge-case handling
- Fully tested with automated unit tests

---

## 🛠️ Compilation & Execution

The project uses a `Makefile` for easy build management.  

### Build the main application
```bash
make Compile
```

### Run the application
```bash
make run
```

### Run the unit tests
```bash
make Testing
```

### Clean all generated executables
```bash
make clean
```

---

## ✅ Example Output (Unit Tests)

After running `make Testing`, you should see something like:

```
./Test/Testing_Calculator.c:138:Test_Addition:PASS
./Test/Testing_Calculator.c:139:Test_Subtraction:PASS
./Test/Testing_Calculator.c:140:Test_Multiplication:PASS
./Test/Testing_Calculator.c:141:Test_Division:PASS
...
-----------------------
16 Tests 0 Failures 0 Ignored
OK
```

---

## 🔮 Future Improvements

- Add **string utilities** (length, reverse, palindrome, etc.)
- Add **matrix operations** (addition, multiplication, transpose)
- Improve **error handling** with proper enums instead of constants
- Expand test coverage with **boundary cases**
- Provide **Windows-compatible Makefile** for cross-platform builds

---

## 👨‍💻 Author

**Prasad Wable**  
📅 *Started on: 27/04/2025*  
📘 *Project Type: Educational / Utility Library*  