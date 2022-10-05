# Overview

I used this project to teach myself how to use the basics of c++.  

My focus on this project was to implement a program using classes in c++ to get a feel for how the language  
works. I didn't emphasize object-oriented design as much as I could have, simply because I didn't want to over-engineer   
this tic-tac-toe game. This program reads user input, processes it, then outputs a response to the terminal until the  
game ending conditions have been met (one of the players gets three in a row, or every space is filled).  

I wanted to learn something new and challenging with this project.   
Before this, I had never written a program in c++, so it was cool for me to learn about  
the advantages and disadvantages of the language. Memory allocation, pointers, and passing  
by value or by reference are all parts of the language that make it attractive, yet difficult at the same time.  

The pieces of this project that I learned the most from are 1) creating header files in c++ and 2) forcing objects  
to pass by reference since they don't automatically do so in this language.  


[Software Demo Video](https://www.loom.com/share/41009f2ffb4b42038ec40f7e51003f4d)

# Development Environment

To get started I downloaded Jetbrains CLion which came fully equipped to program in c++, though the IDE did seem
like it was a little overkill for a project like this.

Since c++ is a lower level language, it requires the use of libraries to handle basic tasks. The standard library (std)  
is the one I used most. I also included <iostream> and <string>, though I don't think I always needed them both.

# Useful Websites


* [W3Schools](https://www.w3schools.com/cpp/default.asp)
* [GeeksForGeeks](https://www.geeksforgeeks.org/exit-codes-in-c-c-with-examples/)

# Future Work

* Split this up into more classes to try and keep everything as private as possible for better encapsulation design
* Add a GUI
* Handle incorrect user inputs