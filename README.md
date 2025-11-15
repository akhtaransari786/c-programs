# C Programs

A collection of beginner-friendly C programs demonstrating fundamental programming concepts.

## Programs Included

### 1. **hello.c**

A simple "Hello World" program.

- **Purpose**: Introduction to C programming and output using `printf()`
- **Output**: Prints "Hello world" to the console

### 2. **Area of circle.c**

Calculates the area of a circle based on user input.

- **Purpose**: Demonstrates input/output and basic mathematical operations
- **Formula**: Area = π × r²
- **Input**: Radius (float)
- **Output**: Area of the circle

### 3. **Area of square.c**

Calculates the area of a square based on user input.

- **Purpose**: Demonstrates `scanf()` for user input and simple calculations
- **Formula**: Area = side²
- **Input**: Side length (float)
- **Output**: Area of the square

### 4. **calculate operator.c**

Performs basic arithmetic operations on two predefined numbers.

- **Purpose**: Demonstrates arithmetic operators (+, -, \*, /, %)
- **Operations Performed**:
  - Addition (a + b)
  - Subtraction (a - b)
  - Multiplication (a × b)
  - Division (a ÷ b)
  - Modulus (a % b)
- **Default Values**: a = 10, b = 50

### 5. **Factorial.c**

calculate factorial of a number

## Compilation & Execution

### On Windows (PowerShell):

```powershell
# Compile
gcc -o hello hello.c
gcc -o circle "Area of circle.c"
gcc -o square "Area of square.c"
gcc -o calculator "calculate operator.c"

# Run
.\hello.exe
.\circle.exe
.\square.exe
.\calculator.exe
```

### On Linux/Mac:

```bash
# Compile
gcc -o hello hello.c
gcc -o circle "Area of circle.c"
gcc -o square "Area of square.c"
gcc -o calculator "calculate operator.c"

# Run
./hello
./circle
./square
./calculator
```

## Requirements

- GCC compiler installed
- Basic knowledge of C programming

## Author

Akhtar Ansari
