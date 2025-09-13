# Numerical Analysis Homework 1

## Overview
This homework implements three numerical root-finding methods for the function

\[
f(x) = 3x^3 - 2x^2 + 5x - 2e^x + 1
\]

- `bisection.cpp` – Bisection method  
- `newton.cpp` – Newton's method  
- `secant.cpp` – Secant method  

---

## Requirements
- C++ compiler supporting C++11 or higher  
  - **Linux/macOS**: `g++` is usually preinstalled or can be installed with package managers.  
  - **Windows**: Install [MinGW](http://www.mingw.org/) or use WSL / Git Bash / Visual Studio.  

---

## Compilation
### On Linux / macOS:
```bash
g++ -o bisection bisection.cpp
g++ -o newton newton.cpp
g++ -o secant secant.cpp
```
### On Windows (PowerShell or Command Prompt, assuming MinGW is installed):
```powershell
g++ -o bisection.exe bisection.cpp
g++ -o newton.exe newton.cpp
g++ -o secant.exe secant.cpp
```

---

## Running
### On Linux / macOS:
```bash
./bisection
./newton
./secant
```
### On Windows (PowerShell or Command Prompt, assuming MinGW is installed):
```powershell
bisection.exe
newton.exe
secant.exe
```

---

Each program will display the iterative processes and the final root approximation.
