<h1>0x1E. C - Search Algorithms</h1>

<h2>Learning Objectives</h2>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<h2>General</h2>
<ol>
<li>What is a search algorithm</li>
<li>What is a linear search</li>
<li>What is a binary search</li>
<li>What is the best search algorithm to use depending on your needs</li>

</ol>
<br>


| Tasks | Files | Description |
| ----------- | ---------- | ----------- |
| 0. Linear search | [0-linear.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/o-linear.c) | Write a function that searches for a value in an array of integers using the Linear search algorithm. <ul> <li>Prototype : int linear_search(int *array, size_t size, int value);</li></ul>  |
| 1. Binary search | [1-binary.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/1-binary.c)| Write a function that searches for a value in a sorted array of integers using the Binary search algorithm. <ul> <li>Prototype : int binary_search(int *array, size_t size, int value);</li></ul> |
|  2. Big O #0  |   [2-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/2-O)  | What is the time complexity (worst case) of a linear search in an array of size n? |
| 3. Big O #1 | [3-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/3-O) |What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n? |
| 4. Big O #2 | [4-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/4-O) | What is the time complexity (worst case) of a binary search in an array of size n? |
| Big O #3  |  [5-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/5-O)   |   What is the space complexity (worst case) of a binary search in an array of size n?   |
| 6. Big O #4 | [6-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/6-O) | What is the space complexity of this function / algorithm |
| 7. Jump search   |  [100-jump.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/100-jump.c)  |  Write a function that searches for a value in a sorted array of integers using the Jump search algorithm.<ul><li>Prototype : int jump_search(int *array, size_t size, int value);</li></ul>  |
| 8. Big O #5 | [101-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/101-O)  | What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?  |
| 9. Interpolation search  | [102-interpolation.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/102-interpolation.c) | Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm. <ul> <li>Prototype : int interpolation_search(int *array, size_t size, int value);</li></ul> |
| 10. Exponential search | [103-exponential.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/103-exponential.c)| Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm.<ul><li>Prototype : int exponential_search(int *array, size_t size, int value);</li></ul> |
| 11. Advanced binary search | [104-advanced_binary.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/104-advanced_binary.c)|Write a function that searches for a value in a sorted array of integers. <ul><li>Prototype : int advanced_binary(int *array, size_t size, int value);</li></ul>|
| 12. Jump search in a singly linked list | [105-jump_list.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/105-jump_list.c)| Please define the following data structure in your search_algos.h header file: Write a function that searches for a value in a sorted list of integers using the Jump search algorithm. <ul><li>Prototype : listint_t *jump_list(listint_t *list, size_t size, int value)</li></ul>|
| 13. Linear search in a skip list | [106-linear_skip.c](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/106-linear_skip.c)| Please define the following data structure in your search_algos.h header file: Write a function that searches for a value in a sorted skip list of integers. <ul><li>Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);</li></ul>|
| 14. Big O #6 | [107-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/107-O)| What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)? |
| 15. Big O #7 | [108-O](https://github.com/Oliveth96/alx-low_level_programming/0x1E-search_algorithms/108-O) | What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?|