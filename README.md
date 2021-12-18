# P6-Leveraging-the-Standard-Library
This project was created by Shelby Jorgensen for my CSCI-151 class, Programming with C++. This project taught us how to work with the standard library. Below, I have attached the outline that was provided for this project.

Outline: Leveraging the STL
In this project you will apply your knowledge of containers, iterators, and algorithms provided in the standard
library to solve some common programming problems. These kinds of problems typically show up in most
progarmming projects in one way or another.
It would be tedious and error-prone to try to develop your own algorithms that solve the following problems.
The main objective of this assignment is for you to be able to leverage the standard library in your solution which
provides a lot of functionality that will take care of the minor details of the implementation.
For example, suppose you are asked to sort a list of numbers. You could research sorting algorithms and
implement a sort yourself, this may take you between 30-60 minutes to get correct, depending on your skill level.
Alternatively, you could recognize that the standard library already contains a sorting algorithm (called
std::sort) which you can just use to solve the problem for you and the code can be written in a matter of
seconds.
Project Requirements
Solve all of the following problems using algorithms from the standard library to get full credit on the assignment.
In particular, you will lose points if you write a raw for-loop in your code (range-based for-loop is ok).
There is an additional bonus problem that is a significantly more challenging than the rest. This is provided for
fun for those of you who are interested in a challenge, and will not be graded.
Furthermore, for this project all of the problems have some starter code that sets up the problem. You can find
the starter code at the following URL: https://github.com/mokonzi131/highline-cpp-stl-starter. You may either
copy this code as a starting point, or better yet, clone the git repository and use your cloned repository as a
starting point for your work on this project. Either way is fine, but learning how to clone a git repository is
something that will be beneficial to you in your career.
1. Warm-up: Given a list of random Car objects, print out the objects in the list in reverse price order.
2. Bitonic Sequence: Given a list of random numbers, make it into a bitonic sequence where the first half is
sorted from least-to-greatest, and the second half is sorted from greatest-to-least. In other words, the final
list should increase in order towards the middle, then decrease in order back towards the end. i.e.:
1, 2, 5, 7, 8, 9, 8, 6, 4, 3, 2, 0 
3. Statistics: Given a list of random Car objects, print out the average price and the price range (difference
between the lowest and highest prices).
4. Prime Searcher: Given a list of random integers between 0 and 100, print true if any of the elements in
the list are prime numbers, and false otherwise. NOTE: It is ok to use a raw for-loop in your check to
determine whether a specific number is prime. It is possible to do so without a raw for-loop, but in this case
you may use one. That said, do NOT use a raw for-loop to loop through the list of values .
5. Tagging: Give a list of random Car objects, transform this into a list of tagged objects using the provided
Tag template class. The Tag is a wrapper that contains an object and a boolean true or false where the
tag is set to true according to some criteria. A Car should be tagged true if it has a price below $10,000
or if the vin number stants with a letter between A and F. Then, print out the tagged items such that all the
items tagged as true come first, and then all the items tagged false come last. Hint: Take a look at the
std::partition algorithm.
6. BONUS CHALLENGE (not required) Trapping Rain Water: You are given a list of non-negative integers
representing an elevation map. Consider each index to represent a horizontal location in a mountain
range, and the value at each index to represent the elevation at that location. In the following example:
Input: [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1] 
The first location (index 0) has no elevation, the second location (index 1) has elevation of 1, the third
location (index 2) has no elevation, and so on. You might visualize the "mountain range" as below:
O
O O O O
O O O O O O O O O
Now suppose that it rains. After it rains, a certain amount of water has been trapped by the mountain
range. This can be visualized by the below table here 'W' represents the trapped water:
O
O W W W O O W O
O W O O W O O O O O O
In the above example, 6 units of water have been trapped after it rained.
Your objective is to compute the amount of trapped water, given a random elevation map as an imput.
NOTE: This problem comes from a website called LeetCode. You can find it and many other problems like it if
you are interested. I was given this particular problem in a job interview once.
