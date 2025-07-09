# Shapes-calculator
# 🧮 Shapes Calculator – C++

## Description
This is a simple console-based C++ program that calculates **area**, **circumference**, **volume**, and **surface area** for various 2D and 3D geometric shapes. The user interacts with a menu and provides dimensions to get instant results.

## 🚀 Features
- Calculates for the following shapes:
  - Square
  - Circle
  - Triangle (with side validation)
  - Cube
  - Sphere
  - Pyramid
  - Cone (spelled "Corn" in code)
  - Trapezoid
  - Pentagon
  - Cuboid (Rectangular Prism)
- Validates input to ensure positive values
- Displays both **area and perimeter** for 2D shapes
- Displays both **volume and surface area** for 3D shapes
- Simple user interface in terminal

## 📦 How to Compile
You can compile the program using any standard C++ compiler. For example, using `g++`:

```bash
g++ -o shapes_calculator "shapes calculator .cpp"
to run it:
./shapes_calculator
example usage:
Welcome to shape calculator.
-------------Choice menu-------------
1.  Square 
2.  Circle 
3.  Triangle 
...
Please choose the number of the shape you interested in : 1

Great!, so you would like to know more about the square.
Please insert the length of one side : 5

The area of the Square  = 25 .
The circumference of Square  = 20 .
🛠 Technologies Used
Language: C++

Compiler: g++, Visual C++, or any standard C++ compiler

Concepts: Functions, Loops, Conditional Statements, Input Validation

📁 File Structure
shapes calculator .cpp – Main program file with all shape logic and menu system.

❗ Notes
The term "Corn" in the code actually refers to "Cone".

The trapezoid area calculation uses a formula based on Heron’s formula, assuming it is cyclic (can be improved for general trapezoids).

🧑‍💻 Author
Created by Tamer Alomari
