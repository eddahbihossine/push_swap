
# 🌀 Push Swap

## Overview

**Push Swap** is a 42 project focused on sorting data on a stack with a limited set of operations and the least amount of moves possible. The challenge lies in optimizing the algorithm to handle varying amounts of data efficiently. This project is a great way to delve into algorithmic thinking and problem-solving in C. 🛠️

## 🚀 Project Objective

The goal of this project is to sort a stack of integers using two stacks (A and B) and a limited set of operations. The task is to design an efficient algorithm that minimizes the number of moves required to sort the stack.

## 🛠️ Operations

You can only use the following operations to sort the stacks:

- `sa`: Swap the first two elements at the top of stack A.
- `sb`: Swap the first two elements at the top of stack B.
- `ss`: Perform `sa` and `sb` at the same time.
- `pa`: Push the top element of stack B onto stack A.
- `pb`: Push the top element of stack A onto stack B.
- `ra`: Rotate stack A (shift all elements by one, the first element becomes the last).
- `rb`: Rotate stack B.
- `rr`: Perform `ra` and `rb` simultaneously.
- `rra`: Reverse rotate stack A (shift all elements by one in reverse order).
- `rrb`: Reverse rotate stack B.
- `rrr`: Perform `rra` and `rrb` simultaneously.

## 📋 Project Structure

```plaintext
.
├── LICENSE
├── Makefile
├── README.md
└── srcs
    ├── calculate_intructions.c
    ├── check_sort.c
    ├── checker.c
    ├── ft_error.c
    ├── ft_strjoin.c
    ├── get_next_line.c
    ├── get_next_line_utils.c
    ├── index_allitems.c
    ├── list_params.c
    ├── list_params2.c
    ├── main.c
    ├── movement3.c
    ├── movement_bonus.c
    ├── movement_bonus3.c
    ├── movements.c
    ├── movements2.c
    ├── movements_bonus2.c
    ├── parsing.c
    ├── push_swap.h
    ├── push_swapbonus.h
    ├── sort100.c
    ├── sort3.c
    ├── sort4.c
    ├── sort5.c
    ├── sortone.c
    ├── utils.c
    └── utils2.c

2 directories, 30 files

```

## 🔧 Compilation

To compile the project, use the provided `Makefile`:

```bash
make
```

This will generate an executable called `push_swap`.

To compile the Bonus, use the provided `Makefile`:

```bash
make bonus
```

This will generate an executable called `checker`.




## 📈 Usage

### Running the Program

To run the `push_swap` program, you need to pass a sequence of integers as arguments:

```bash
./push_swap [sequence of integers]
```

Example:

```bash
./push_swap 4 67 3 87 23
```

The program will output the series of operations needed to sort the stack.

### Evaluating the Program

To check if your program outputs a correct series of operations, use the `checker` program (or write your own):

```bash
./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
```

The `checker` will verify if the operations correctly sort the stack and output `OK` if the result is correct, or `KO` otherwise.

## ⚙️ Algorithms

The heart of the `push_swap` project lies in developing different sorting algorithms that work efficiently for small and large sets of numbers. Here's a breakdown:

### Small Stack Algorithm
For stacks containing **3 to 5 elements**, you can use simpler algorithms with a fixed number of operations. Brute force or hardcoded solutions can work here.

### Large Stack Algorithm
For larger stacks, **>5 elements**, you’ll need to implement more efficient sorting algorithms, such as:
- **QuickSort-based sorting**: Dividing the stack into chunks and sorting them iteratively.
- **Radix sort**: Sorting numbers based on their binary representation.

These algorithms must be optimized to minimize the number of moves, ensuring the project meets the performance criteria.

## 📜 Bonuses

To extend the basic functionality of your `push_swap` program, you can implement the following bonuses:

- **Visualization**: Create a graphical or textual representation of the sorting process in real-time.
- **Advanced Sorting Algorithms**: Implement more complex algorithms like merge sort or a hybrid algorithm to handle larger datasets more efficiently.

## 🧪 Testing

Testing your implementation is crucial to ensuring the correctness and efficiency of your algorithm. You can test it with different input sequences:

- **Random sequences**: Test with random values to see how your algorithm performs with various datasets.
- **Edge cases**: Ensure that your program handles edge cases like already sorted data, reverse sorted data, duplicate values, and extreme values.
  
You can automate the testing process with a simple shell script like `tester.sh` or use available testing tools provided by the 42 community.

## 📊 Performance

The efficiency of your program is measured by the number of operations it requires to sort the stack. Here are some benchmarks to aim for:

- **3 elements**: ~3 operations.
- **5 elements**: ~12 operations.
- **100 elements**: <700 operations.
- **500 elements**: <5500 operations.

The closer your program gets to these benchmarks, the better!

## 📚 References and Learning Resources

- [Sorting Algorithms](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Stack Data Structure](https://www.geeksforgeeks.org/stack-data-structure-introduction-program/)
- [Efficient Sorting in C](https://www.cs.cmu.edu/~avrim/451f11/lectures/lect0913.pdf)

## 🌟 Learning Objectives

By completing this project, you will:
- Deepen your understanding of data structures, particularly stacks.
- Improve your skills in algorithm development and optimization.
- Learn to manage complexity and performance in C programming.

## 📝 License

This project is open-source and available under the [MIT License](LICENSE).

