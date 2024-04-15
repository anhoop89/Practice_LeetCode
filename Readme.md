Practicing some leetcode problems in C++ and python. 

Enhancing programming skills at any level. Tackle problems spanning various topics, from basic arrays to advanced graph algorithms. With LeetCode, sharpen my problem-solving skills, prepare for technical interviews, and join a global community of passionate programmers.

*** Shout out to https://github.com/3ba2ii/LeetSync?tab=readme-ov-file . This extension helps me save all my solution to my github.

# Dynamic Programming (DP)

Dynamic Programming (DP) is a problem-solving technique used to solve problems by breaking them down into simpler subproblems and solving each subproblem only once. It's particularly useful for optimization problems where the solution can be constructed from optimal solutions to subproblems.

## Key Concepts

1. **Memoization:** Storing the results of expensive function calls and returning the cached result when the same inputs occur again.

2. **Tabulation:** Constructing a table such that the value of each cell represents the solution to a subproblem, and using these values to solve larger subproblems.

3. **Optimal Substructure:** The property of a problem that allows the optimal solution to the problem to be constructed from the optimal solutions of its subproblems.

4. **Overlapping Subproblems:** Subproblems that are reused multiple times in the computation of the final solution.

5. **Bottom-up approach:** Solving subproblems iteratively starting from the simplest ones and gradually solving larger subproblems until the solution to the original problem is obtained.

6. **Top-down approach:** Solving subproblems recursively, storing the results of each subproblem in a data structure (such as a hash table or an array) to avoid redundant computations.

7. **State space:** The set of all possible configurations or states that a problem can be in.

8. **Transition function:** A function that defines the relationship between states and their successors in a dynamic programming problem.

9. **Optimization criterion:** The objective function or criteria used to evaluate the quality of a solution in optimization problems.

10. **Greedy choice property:** The property of certain problems where making a locally optimal choice at each step leads to a globally optimal solution.

These key concepts provide a foundation for understanding and solving dynamic programming problems efficiently.

# Backtracking

Backtracking is a problem-solving technique used to explore all possible solutions to a problem by making a series of choices, backtracking when a choice leads to a dead end, and trying alternative choices. It is particularly useful for solving problems where there is a need to exhaustively search through all possible combinations or permutations of a set of elements.

## Key Concepts

- **Decision Tree:** Visualize backtracking as exploring a decision tree, where each node represents a decision or choice made at a certain stage of the problem-solving process.

- **Recursion:** Implement backtracking algorithms using recursion, where the recursive function explores the decision tree by making choices at each level of recursion.

- **Pruning:** Optimize the search process by pruning branches of the decision tree that cannot lead to a valid solution, avoiding unnecessary exploration.

- **Base Case:** Define a base case as a stopping condition where the algorithm terminates and returns a solution or backtracks to explore alternative choices.

- **Candidate List:** Generate a candidate list at each step containing all possible choices that can be made, guiding the exploration process.

- **Constraint Function:** Check whether a given candidate is valid or satisfies certain conditions using a constraint function. Prune candidates that do not meet the constraints.

- **Backtrack Function:** Recursively explore the decision tree, making choices, and backtracking when necessary, to systematically search the solution space.

## Problem Identification

Backtracking is suitable for solving problems with the following characteristics:

- **Exhaustive Search:** When all possible solutions need to be explored to find the optimal or feasible solution.

- **Combinatorial Optimization:** Problems involving combinations or permutations of elements, such as subset sum, permutations, combinations, and Sudoku.

- **Constraint Satisfaction Problems:** Problems where solutions must satisfy certain constraints, such as the N-Queens problem and graph coloring.

- **Graph Traversal:** Searching through a graph to find a path or cycle that satisfies certain conditions, such as the Hamiltonian cycle and the traveling salesman problem.

Backtracking offers a flexible and efficient approach to solving problems with a large search space, allowing for the exploration of all possible solutions in a systematic manner.
