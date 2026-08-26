# Striver
A collection of LeetCode questions to ace the coding interview! - Created using [LeetHub v2](https://github.com/arunbhardwaj/LeetHub-2.0)
# cpp memory optimizer 
```cpp
const size_t BUFFER_SIZE = 0x6fafffff;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void* operator new(size_t size) {
    constexpr std::size_t alignment = alignof(std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;

    char* aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;

    return aligned_ptr;
}

void operator delete(void* ptr, unsigned long) {}
void operator delete(void* ptr) {}
void operator delete[](void* ptr) {}
```
## LeetCode Streak
[![anuj990's LeetCode Streak](https://leetcard.jacoblin.cool/anuj990?theme=dark&ext=heatmap)](https://leetcode.com/anuj990)

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/anuj990/Striver/tree/master/0001-two-sum) |
| [0004-median-of-two-sorted-arrays](https://github.com/anuj990/Striver/tree/master/0004-median-of-two-sorted-arrays) |
| [0014-longest-common-prefix](https://github.com/anuj990/Striver/tree/master/0014-longest-common-prefix) |
| [0037-sudoku-solver](https://github.com/anuj990/Striver/tree/master/0037-sudoku-solver) |
| [0039-combination-sum](https://github.com/anuj990/Striver/tree/master/0039-combination-sum) |
| [0040-combination-sum-ii](https://github.com/anuj990/Striver/tree/master/0040-combination-sum-ii) |
| [0042-trapping-rain-water](https://github.com/anuj990/Striver/tree/master/0042-trapping-rain-water) |
| [0051-n-queens](https://github.com/anuj990/Striver/tree/master/0051-n-queens) |
| [0066-plus-one](https://github.com/anuj990/Striver/tree/master/0066-plus-one) |
| [0074-search-a-2d-matrix](https://github.com/anuj990/Striver/tree/master/0074-search-a-2d-matrix) |
| [0078-subsets](https://github.com/anuj990/Striver/tree/master/0078-subsets) |
| [0079-word-search](https://github.com/anuj990/Striver/tree/master/0079-word-search) |
| [0084-largest-rectangle-in-histogram](https://github.com/anuj990/Striver/tree/master/0084-largest-rectangle-in-histogram) |
| [0085-maximal-rectangle](https://github.com/anuj990/Striver/tree/master/0085-maximal-rectangle) |
| [0090-subsets-ii](https://github.com/anuj990/Striver/tree/master/0090-subsets-ii) |
| [0204-count-primes](https://github.com/anuj990/Striver/tree/master/0204-count-primes) |
| [0215-kth-largest-element-in-an-array](https://github.com/anuj990/Striver/tree/master/0215-kth-largest-element-in-an-array) |
| [0216-combination-sum-iii](https://github.com/anuj990/Striver/tree/master/0216-combination-sum-iii) |
| [0239-sliding-window-maximum](https://github.com/anuj990/Striver/tree/master/0239-sliding-window-maximum) |
| [0240-search-a-2d-matrix-ii](https://github.com/anuj990/Striver/tree/master/0240-search-a-2d-matrix-ii) |
| [0268-missing-number](https://github.com/anuj990/Striver/tree/master/0268-missing-number) |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
| [0455-assign-cookies](https://github.com/anuj990/Striver/tree/master/0455-assign-cookies) |
| [0621-task-scheduler](https://github.com/anuj990/Striver/tree/master/0621-task-scheduler) |
| [0628-maximum-product-of-three-numbers](https://github.com/anuj990/Striver/tree/master/0628-maximum-product-of-three-numbers) |
| [0735-asteroid-collision](https://github.com/anuj990/Striver/tree/master/0735-asteroid-collision) |
| [0846-hand-of-straights](https://github.com/anuj990/Striver/tree/master/0846-hand-of-straights) |
| [0904-fruit-into-baskets](https://github.com/anuj990/Striver/tree/master/0904-fruit-into-baskets) |
| [0907-sum-of-subarray-minimums](https://github.com/anuj990/Striver/tree/master/0907-sum-of-subarray-minimums) |
| [0930-binary-subarrays-with-sum](https://github.com/anuj990/Striver/tree/master/0930-binary-subarrays-with-sum) |
| [1004-max-consecutive-ones-iii](https://github.com/anuj990/Striver/tree/master/1004-max-consecutive-ones-iii) |
| [1248-count-number-of-nice-subarrays](https://github.com/anuj990/Striver/tree/master/1248-count-number-of-nice-subarrays) |
| [1423-maximum-points-you-can-obtain-from-cards](https://github.com/anuj990/Striver/tree/master/1423-maximum-points-you-can-obtain-from-cards) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/anuj990/Striver/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1901-find-a-peak-element-ii](https://github.com/anuj990/Striver/tree/master/1901-find-a-peak-element-ii) |
| [3731-find-missing-elements](https://github.com/anuj990/Striver/tree/master/3731-find-missing-elements) |
## Binary Search
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/anuj990/Striver/tree/master/0004-median-of-two-sorted-arrays) |
| [0074-search-a-2d-matrix](https://github.com/anuj990/Striver/tree/master/0074-search-a-2d-matrix) |
| [0240-search-a-2d-matrix-ii](https://github.com/anuj990/Striver/tree/master/0240-search-a-2d-matrix-ii) |
| [0268-missing-number](https://github.com/anuj990/Striver/tree/master/0268-missing-number) |
| [0441-arranging-coins](https://github.com/anuj990/Striver/tree/master/0441-arranging-coins) |
| [1004-max-consecutive-ones-iii](https://github.com/anuj990/Striver/tree/master/1004-max-consecutive-ones-iii) |
| [1901-find-a-peak-element-ii](https://github.com/anuj990/Striver/tree/master/1901-find-a-peak-element-ii) |
## Divide and Conquer
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/anuj990/Striver/tree/master/0004-median-of-two-sorted-arrays) |
| [0023-merge-k-sorted-lists](https://github.com/anuj990/Striver/tree/master/0023-merge-k-sorted-lists) |
| [0148-sort-list](https://github.com/anuj990/Striver/tree/master/0148-sort-list) |
| [0215-kth-largest-element-in-an-array](https://github.com/anuj990/Striver/tree/master/0215-kth-largest-element-in-an-array) |
| [0240-search-a-2d-matrix-ii](https://github.com/anuj990/Striver/tree/master/0240-search-a-2d-matrix-ii) |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
## Matrix
|  |
| ------- |
| [0037-sudoku-solver](https://github.com/anuj990/Striver/tree/master/0037-sudoku-solver) |
| [0074-search-a-2d-matrix](https://github.com/anuj990/Striver/tree/master/0074-search-a-2d-matrix) |
| [0079-word-search](https://github.com/anuj990/Striver/tree/master/0079-word-search) |
| [0085-maximal-rectangle](https://github.com/anuj990/Striver/tree/master/0085-maximal-rectangle) |
| [0240-search-a-2d-matrix-ii](https://github.com/anuj990/Striver/tree/master/0240-search-a-2d-matrix-ii) |
| [1901-find-a-peak-element-ii](https://github.com/anuj990/Striver/tree/master/1901-find-a-peak-element-ii) |
## String
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/anuj990/Striver/tree/master/0003-longest-substring-without-repeating-characters) |
| [0008-string-to-integer-atoi](https://github.com/anuj990/Striver/tree/master/0008-string-to-integer-atoi) |
| [0013-roman-to-integer](https://github.com/anuj990/Striver/tree/master/0013-roman-to-integer) |
| [0014-longest-common-prefix](https://github.com/anuj990/Striver/tree/master/0014-longest-common-prefix) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/anuj990/Striver/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0020-valid-parentheses](https://github.com/anuj990/Striver/tree/master/0020-valid-parentheses) |
| [0022-generate-parentheses](https://github.com/anuj990/Striver/tree/master/0022-generate-parentheses) |
| [0076-minimum-window-substring](https://github.com/anuj990/Striver/tree/master/0076-minimum-window-substring) |
| [0079-word-search](https://github.com/anuj990/Striver/tree/master/0079-word-search) |
| [0151-reverse-words-in-a-string](https://github.com/anuj990/Striver/tree/master/0151-reverse-words-in-a-string) |
| [0205-isomorphic-strings](https://github.com/anuj990/Striver/tree/master/0205-isomorphic-strings) |
| [0242-valid-anagram](https://github.com/anuj990/Striver/tree/master/0242-valid-anagram) |
| [0282-expression-add-operators](https://github.com/anuj990/Striver/tree/master/0282-expression-add-operators) |
| [0424-longest-repeating-character-replacement](https://github.com/anuj990/Striver/tree/master/0424-longest-repeating-character-replacement) |
| [0451-sort-characters-by-frequency](https://github.com/anuj990/Striver/tree/master/0451-sort-characters-by-frequency) |
| [0796-rotate-string](https://github.com/anuj990/Striver/tree/master/0796-rotate-string) |
| [1021-remove-outermost-parentheses](https://github.com/anuj990/Striver/tree/master/1021-remove-outermost-parentheses) |
| [1358-number-of-substrings-containing-all-three-characters](https://github.com/anuj990/Striver/tree/master/1358-number-of-substrings-containing-all-three-characters) |
| [1614-maximum-nesting-depth-of-the-parentheses](https://github.com/anuj990/Striver/tree/master/1614-maximum-nesting-depth-of-the-parentheses) |
| [1903-largest-odd-number-in-string](https://github.com/anuj990/Striver/tree/master/1903-largest-odd-number-in-string) |
| [3280-convert-date-to-binary](https://github.com/anuj990/Striver/tree/master/3280-convert-date-to-binary) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/anuj990/Striver/tree/master/0020-valid-parentheses) |
| [0042-trapping-rain-water](https://github.com/anuj990/Striver/tree/master/0042-trapping-rain-water) |
| [0084-largest-rectangle-in-histogram](https://github.com/anuj990/Striver/tree/master/0084-largest-rectangle-in-histogram) |
| [0085-maximal-rectangle](https://github.com/anuj990/Striver/tree/master/0085-maximal-rectangle) |
| [0155-min-stack](https://github.com/anuj990/Striver/tree/master/0155-min-stack) |
| [0225-implement-stack-using-queues](https://github.com/anuj990/Striver/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/anuj990/Striver/tree/master/0232-implement-queue-using-stacks) |
| [0234-palindrome-linked-list](https://github.com/anuj990/Striver/tree/master/0234-palindrome-linked-list) |
| [0735-asteroid-collision](https://github.com/anuj990/Striver/tree/master/0735-asteroid-collision) |
| [0901-online-stock-span](https://github.com/anuj990/Striver/tree/master/0901-online-stock-span) |
| [0907-sum-of-subarray-minimums](https://github.com/anuj990/Striver/tree/master/0907-sum-of-subarray-minimums) |
| [1021-remove-outermost-parentheses](https://github.com/anuj990/Striver/tree/master/1021-remove-outermost-parentheses) |
| [1614-maximum-nesting-depth-of-the-parentheses](https://github.com/anuj990/Striver/tree/master/1614-maximum-nesting-depth-of-the-parentheses) |
## Two Pointers
|  |
| ------- |
| [0019-remove-nth-node-from-end-of-list](https://github.com/anuj990/Striver/tree/master/0019-remove-nth-node-from-end-of-list) |
| [0042-trapping-rain-water](https://github.com/anuj990/Striver/tree/master/0042-trapping-rain-water) |
| [0061-rotate-list](https://github.com/anuj990/Striver/tree/master/0061-rotate-list) |
| [0141-linked-list-cycle](https://github.com/anuj990/Striver/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/anuj990/Striver/tree/master/0142-linked-list-cycle-ii) |
| [0148-sort-list](https://github.com/anuj990/Striver/tree/master/0148-sort-list) |
| [0151-reverse-words-in-a-string](https://github.com/anuj990/Striver/tree/master/0151-reverse-words-in-a-string) |
| [0160-intersection-of-two-linked-lists](https://github.com/anuj990/Striver/tree/master/0160-intersection-of-two-linked-lists) |
| [0234-palindrome-linked-list](https://github.com/anuj990/Striver/tree/master/0234-palindrome-linked-list) |
| [0295-find-median-from-data-stream](https://github.com/anuj990/Striver/tree/master/0295-find-median-from-data-stream) |
| [0455-assign-cookies](https://github.com/anuj990/Striver/tree/master/0455-assign-cookies) |
| [0876-middle-of-the-linked-list](https://github.com/anuj990/Striver/tree/master/0876-middle-of-the-linked-list) |
| [2095-delete-the-middle-node-of-a-linked-list](https://github.com/anuj990/Striver/tree/master/2095-delete-the-middle-node-of-a-linked-list) |
## Math
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/anuj990/Striver/tree/master/0002-add-two-numbers) |
| [0013-roman-to-integer](https://github.com/anuj990/Striver/tree/master/0013-roman-to-integer) |
| [0029-divide-two-integers](https://github.com/anuj990/Striver/tree/master/0029-divide-two-integers) |
| [0050-powx-n](https://github.com/anuj990/Striver/tree/master/0050-powx-n) |
| [0066-plus-one](https://github.com/anuj990/Striver/tree/master/0066-plus-one) |
| [0070-climbing-stairs](https://github.com/anuj990/Striver/tree/master/0070-climbing-stairs) |
| [0204-count-primes](https://github.com/anuj990/Striver/tree/master/0204-count-primes) |
| [0231-power-of-two](https://github.com/anuj990/Striver/tree/master/0231-power-of-two) |
| [0258-add-digits](https://github.com/anuj990/Striver/tree/master/0258-add-digits) |
| [0268-missing-number](https://github.com/anuj990/Striver/tree/master/0268-missing-number) |
| [0282-expression-add-operators](https://github.com/anuj990/Striver/tree/master/0282-expression-add-operators) |
| [0441-arranging-coins](https://github.com/anuj990/Striver/tree/master/0441-arranging-coins) |
| [0628-maximum-product-of-three-numbers](https://github.com/anuj990/Striver/tree/master/0628-maximum-product-of-three-numbers) |
| [1248-count-number-of-nice-subarrays](https://github.com/anuj990/Striver/tree/master/1248-count-number-of-nice-subarrays) |
| [1903-largest-odd-number-in-string](https://github.com/anuj990/Striver/tree/master/1903-largest-odd-number-in-string) |
| [1922-count-good-numbers](https://github.com/anuj990/Striver/tree/master/1922-count-good-numbers) |
| [3280-convert-date-to-binary](https://github.com/anuj990/Striver/tree/master/3280-convert-date-to-binary) |
| [3536-maximum-product-of-two-digits](https://github.com/anuj990/Striver/tree/master/3536-maximum-product-of-two-digits) |
## Greedy
|  |
| ------- |
| [0455-assign-cookies](https://github.com/anuj990/Striver/tree/master/0455-assign-cookies) |
| [0621-task-scheduler](https://github.com/anuj990/Striver/tree/master/0621-task-scheduler) |
| [0846-hand-of-straights](https://github.com/anuj990/Striver/tree/master/0846-hand-of-straights) |
| [1903-largest-odd-number-in-string](https://github.com/anuj990/Striver/tree/master/1903-largest-odd-number-in-string) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/anuj990/Striver/tree/master/0014-longest-common-prefix) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/anuj990/Striver/tree/master/0001-two-sum) |
| [0003-longest-substring-without-repeating-characters](https://github.com/anuj990/Striver/tree/master/0003-longest-substring-without-repeating-characters) |
| [0013-roman-to-integer](https://github.com/anuj990/Striver/tree/master/0013-roman-to-integer) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/anuj990/Striver/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0037-sudoku-solver](https://github.com/anuj990/Striver/tree/master/0037-sudoku-solver) |
| [0076-minimum-window-substring](https://github.com/anuj990/Striver/tree/master/0076-minimum-window-substring) |
| [0141-linked-list-cycle](https://github.com/anuj990/Striver/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/anuj990/Striver/tree/master/0142-linked-list-cycle-ii) |
| [0160-intersection-of-two-linked-lists](https://github.com/anuj990/Striver/tree/master/0160-intersection-of-two-linked-lists) |
| [0205-isomorphic-strings](https://github.com/anuj990/Striver/tree/master/0205-isomorphic-strings) |
| [0242-valid-anagram](https://github.com/anuj990/Striver/tree/master/0242-valid-anagram) |
| [0268-missing-number](https://github.com/anuj990/Striver/tree/master/0268-missing-number) |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
| [0355-design-twitter](https://github.com/anuj990/Striver/tree/master/0355-design-twitter) |
| [0424-longest-repeating-character-replacement](https://github.com/anuj990/Striver/tree/master/0424-longest-repeating-character-replacement) |
| [0451-sort-characters-by-frequency](https://github.com/anuj990/Striver/tree/master/0451-sort-characters-by-frequency) |
| [0460-lfu-cache](https://github.com/anuj990/Striver/tree/master/0460-lfu-cache) |
| [0621-task-scheduler](https://github.com/anuj990/Striver/tree/master/0621-task-scheduler) |
| [0846-hand-of-straights](https://github.com/anuj990/Striver/tree/master/0846-hand-of-straights) |
| [0904-fruit-into-baskets](https://github.com/anuj990/Striver/tree/master/0904-fruit-into-baskets) |
| [0930-binary-subarrays-with-sum](https://github.com/anuj990/Striver/tree/master/0930-binary-subarrays-with-sum) |
| [1248-count-number-of-nice-subarrays](https://github.com/anuj990/Striver/tree/master/1248-count-number-of-nice-subarrays) |
| [1358-number-of-substrings-containing-all-three-characters](https://github.com/anuj990/Striver/tree/master/1358-number-of-substrings-containing-all-three-characters) |
| [3731-find-missing-elements](https://github.com/anuj990/Striver/tree/master/3731-find-missing-elements) |
## String Matching
|  |
| ------- |
| [0796-rotate-string](https://github.com/anuj990/Striver/tree/master/0796-rotate-string) |
## Sorting
|  |
| ------- |
| [0148-sort-list](https://github.com/anuj990/Striver/tree/master/0148-sort-list) |
| [0215-kth-largest-element-in-an-array](https://github.com/anuj990/Striver/tree/master/0215-kth-largest-element-in-an-array) |
| [0242-valid-anagram](https://github.com/anuj990/Striver/tree/master/0242-valid-anagram) |
| [0268-missing-number](https://github.com/anuj990/Striver/tree/master/0268-missing-number) |
| [0295-find-median-from-data-stream](https://github.com/anuj990/Striver/tree/master/0295-find-median-from-data-stream) |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
| [0451-sort-characters-by-frequency](https://github.com/anuj990/Striver/tree/master/0451-sort-characters-by-frequency) |
| [0455-assign-cookies](https://github.com/anuj990/Striver/tree/master/0455-assign-cookies) |
| [0621-task-scheduler](https://github.com/anuj990/Striver/tree/master/0621-task-scheduler) |
| [0628-maximum-product-of-three-numbers](https://github.com/anuj990/Striver/tree/master/0628-maximum-product-of-three-numbers) |
| [0846-hand-of-straights](https://github.com/anuj990/Striver/tree/master/0846-hand-of-straights) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/anuj990/Striver/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [3536-maximum-product-of-two-digits](https://github.com/anuj990/Striver/tree/master/3536-maximum-product-of-two-digits) |
| [3731-find-missing-elements](https://github.com/anuj990/Striver/tree/master/3731-find-missing-elements) |
## Heap (Priority Queue)
|  |
| ------- |
| [0023-merge-k-sorted-lists](https://github.com/anuj990/Striver/tree/master/0023-merge-k-sorted-lists) |
| [0215-kth-largest-element-in-an-array](https://github.com/anuj990/Striver/tree/master/0215-kth-largest-element-in-an-array) |
| [0239-sliding-window-maximum](https://github.com/anuj990/Striver/tree/master/0239-sliding-window-maximum) |
| [0295-find-median-from-data-stream](https://github.com/anuj990/Striver/tree/master/0295-find-median-from-data-stream) |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
| [0355-design-twitter](https://github.com/anuj990/Striver/tree/master/0355-design-twitter) |
| [0451-sort-characters-by-frequency](https://github.com/anuj990/Striver/tree/master/0451-sort-characters-by-frequency) |
| [0621-task-scheduler](https://github.com/anuj990/Striver/tree/master/0621-task-scheduler) |
| [0703-kth-largest-element-in-a-stream](https://github.com/anuj990/Striver/tree/master/0703-kth-largest-element-in-a-stream) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/anuj990/Striver/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
## Bucket Sort
|  |
| ------- |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
| [0451-sort-characters-by-frequency](https://github.com/anuj990/Striver/tree/master/0451-sort-characters-by-frequency) |
## Counting
|  |
| ------- |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
| [0451-sort-characters-by-frequency](https://github.com/anuj990/Striver/tree/master/0451-sort-characters-by-frequency) |
| [0621-task-scheduler](https://github.com/anuj990/Striver/tree/master/0621-task-scheduler) |
## Linked List
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/anuj990/Striver/tree/master/0002-add-two-numbers) |
| [0019-remove-nth-node-from-end-of-list](https://github.com/anuj990/Striver/tree/master/0019-remove-nth-node-from-end-of-list) |
| [0023-merge-k-sorted-lists](https://github.com/anuj990/Striver/tree/master/0023-merge-k-sorted-lists) |
| [0025-reverse-nodes-in-k-group](https://github.com/anuj990/Striver/tree/master/0025-reverse-nodes-in-k-group) |
| [0061-rotate-list](https://github.com/anuj990/Striver/tree/master/0061-rotate-list) |
| [0141-linked-list-cycle](https://github.com/anuj990/Striver/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/anuj990/Striver/tree/master/0142-linked-list-cycle-ii) |
| [0148-sort-list](https://github.com/anuj990/Striver/tree/master/0148-sort-list) |
| [0160-intersection-of-two-linked-lists](https://github.com/anuj990/Striver/tree/master/0160-intersection-of-two-linked-lists) |
| [0206-reverse-linked-list](https://github.com/anuj990/Striver/tree/master/0206-reverse-linked-list) |
| [0234-palindrome-linked-list](https://github.com/anuj990/Striver/tree/master/0234-palindrome-linked-list) |
| [0237-delete-node-in-a-linked-list](https://github.com/anuj990/Striver/tree/master/0237-delete-node-in-a-linked-list) |
| [0328-odd-even-linked-list](https://github.com/anuj990/Striver/tree/master/0328-odd-even-linked-list) |
| [0355-design-twitter](https://github.com/anuj990/Striver/tree/master/0355-design-twitter) |
| [0460-lfu-cache](https://github.com/anuj990/Striver/tree/master/0460-lfu-cache) |
| [0876-middle-of-the-linked-list](https://github.com/anuj990/Striver/tree/master/0876-middle-of-the-linked-list) |
| [2095-delete-the-middle-node-of-a-linked-list](https://github.com/anuj990/Striver/tree/master/2095-delete-the-middle-node-of-a-linked-list) |
## Recursion
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/anuj990/Striver/tree/master/0002-add-two-numbers) |
| [0025-reverse-nodes-in-k-group](https://github.com/anuj990/Striver/tree/master/0025-reverse-nodes-in-k-group) |
| [0050-powx-n](https://github.com/anuj990/Striver/tree/master/0050-powx-n) |
| [0206-reverse-linked-list](https://github.com/anuj990/Striver/tree/master/0206-reverse-linked-list) |
| [0231-power-of-two](https://github.com/anuj990/Striver/tree/master/0231-power-of-two) |
| [0234-palindrome-linked-list](https://github.com/anuj990/Striver/tree/master/0234-palindrome-linked-list) |
| [1922-count-good-numbers](https://github.com/anuj990/Striver/tree/master/1922-count-good-numbers) |
## Dynamic Programming
|  |
| ------- |
| [0022-generate-parentheses](https://github.com/anuj990/Striver/tree/master/0022-generate-parentheses) |
| [0042-trapping-rain-water](https://github.com/anuj990/Striver/tree/master/0042-trapping-rain-water) |
| [0070-climbing-stairs](https://github.com/anuj990/Striver/tree/master/0070-climbing-stairs) |
| [0085-maximal-rectangle](https://github.com/anuj990/Striver/tree/master/0085-maximal-rectangle) |
| [0907-sum-of-subarray-minimums](https://github.com/anuj990/Striver/tree/master/0907-sum-of-subarray-minimums) |
## Memoization
|  |
| ------- |
| [0070-climbing-stairs](https://github.com/anuj990/Striver/tree/master/0070-climbing-stairs) |
## Simulation
|  |
| ------- |
| [0258-add-digits](https://github.com/anuj990/Striver/tree/master/0258-add-digits) |
| [0735-asteroid-collision](https://github.com/anuj990/Striver/tree/master/0735-asteroid-collision) |
## Number Theory
|  |
| ------- |
| [0204-count-primes](https://github.com/anuj990/Striver/tree/master/0204-count-primes) |
| [0258-add-digits](https://github.com/anuj990/Striver/tree/master/0258-add-digits) |
## Merge Sort
|  |
| ------- |
| [0023-merge-k-sorted-lists](https://github.com/anuj990/Striver/tree/master/0023-merge-k-sorted-lists) |
| [0148-sort-list](https://github.com/anuj990/Striver/tree/master/0148-sort-list) |
## Backtracking
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/anuj990/Striver/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/anuj990/Striver/tree/master/0022-generate-parentheses) |
| [0037-sudoku-solver](https://github.com/anuj990/Striver/tree/master/0037-sudoku-solver) |
| [0039-combination-sum](https://github.com/anuj990/Striver/tree/master/0039-combination-sum) |
| [0040-combination-sum-ii](https://github.com/anuj990/Striver/tree/master/0040-combination-sum-ii) |
| [0051-n-queens](https://github.com/anuj990/Striver/tree/master/0051-n-queens) |
| [0078-subsets](https://github.com/anuj990/Striver/tree/master/0078-subsets) |
| [0079-word-search](https://github.com/anuj990/Striver/tree/master/0079-word-search) |
| [0090-subsets-ii](https://github.com/anuj990/Striver/tree/master/0090-subsets-ii) |
| [0216-combination-sum-iii](https://github.com/anuj990/Striver/tree/master/0216-combination-sum-iii) |
| [0282-expression-add-operators](https://github.com/anuj990/Striver/tree/master/0282-expression-add-operators) |
## Bit Manipulation
|  |
| ------- |
| [0029-divide-two-integers](https://github.com/anuj990/Striver/tree/master/0029-divide-two-integers) |
| [0078-subsets](https://github.com/anuj990/Striver/tree/master/0078-subsets) |
| [0090-subsets-ii](https://github.com/anuj990/Striver/tree/master/0090-subsets-ii) |
| [0231-power-of-two](https://github.com/anuj990/Striver/tree/master/0231-power-of-two) |
| [0268-missing-number](https://github.com/anuj990/Striver/tree/master/0268-missing-number) |
| [0461-hamming-distance](https://github.com/anuj990/Striver/tree/master/0461-hamming-distance) |
| [2220-minimum-bit-flips-to-convert-number](https://github.com/anuj990/Striver/tree/master/2220-minimum-bit-flips-to-convert-number) |
## Depth-First Search
|  |
| ------- |
| [0079-word-search](https://github.com/anuj990/Striver/tree/master/0079-word-search) |
## Enumeration
|  |
| ------- |
| [0204-count-primes](https://github.com/anuj990/Striver/tree/master/0204-count-primes) |
## Database
|  |
| ------- |
| [0584-find-customer-referee](https://github.com/anuj990/Striver/tree/master/0584-find-customer-referee) |
| [0595-big-countries](https://github.com/anuj990/Striver/tree/master/0595-big-countries) |
| [1068-product-sales-analysis-i](https://github.com/anuj990/Striver/tree/master/1068-product-sales-analysis-i) |
| [1378-replace-employee-id-with-the-unique-identifier](https://github.com/anuj990/Striver/tree/master/1378-replace-employee-id-with-the-unique-identifier) |
| [1581-customer-who-visited-but-did-not-make-any-transactions](https://github.com/anuj990/Striver/tree/master/1581-customer-who-visited-but-did-not-make-any-transactions) |
| [1683-invalid-tweets](https://github.com/anuj990/Striver/tree/master/1683-invalid-tweets) |
| [1757-recyclable-and-low-fat-products](https://github.com/anuj990/Striver/tree/master/1757-recyclable-and-low-fat-products) |
## Design
|  |
| ------- |
| [0155-min-stack](https://github.com/anuj990/Striver/tree/master/0155-min-stack) |
| [0225-implement-stack-using-queues](https://github.com/anuj990/Striver/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/anuj990/Striver/tree/master/0232-implement-queue-using-stacks) |
| [0295-find-median-from-data-stream](https://github.com/anuj990/Striver/tree/master/0295-find-median-from-data-stream) |
| [0355-design-twitter](https://github.com/anuj990/Striver/tree/master/0355-design-twitter) |
| [0460-lfu-cache](https://github.com/anuj990/Striver/tree/master/0460-lfu-cache) |
| [0703-kth-largest-element-in-a-stream](https://github.com/anuj990/Striver/tree/master/0703-kth-largest-element-in-a-stream) |
| [0901-online-stock-span](https://github.com/anuj990/Striver/tree/master/0901-online-stock-span) |
## Queue
|  |
| ------- |
| [0225-implement-stack-using-queues](https://github.com/anuj990/Striver/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/anuj990/Striver/tree/master/0232-implement-queue-using-stacks) |
| [0239-sliding-window-maximum](https://github.com/anuj990/Striver/tree/master/0239-sliding-window-maximum) |
## Bracket Sequences
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/anuj990/Striver/tree/master/0020-valid-parentheses) |
## Monotonic Stack
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/anuj990/Striver/tree/master/0042-trapping-rain-water) |
| [0084-largest-rectangle-in-histogram](https://github.com/anuj990/Striver/tree/master/0084-largest-rectangle-in-histogram) |
| [0085-maximal-rectangle](https://github.com/anuj990/Striver/tree/master/0085-maximal-rectangle) |
| [0901-online-stock-span](https://github.com/anuj990/Striver/tree/master/0901-online-stock-span) |
| [0907-sum-of-subarray-minimums](https://github.com/anuj990/Striver/tree/master/0907-sum-of-subarray-minimums) |
## Range Minimum/Maximum Query
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/anuj990/Striver/tree/master/0084-largest-rectangle-in-histogram) |
| [0239-sliding-window-maximum](https://github.com/anuj990/Striver/tree/master/0239-sliding-window-maximum) |
## Sliding Window
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/anuj990/Striver/tree/master/0003-longest-substring-without-repeating-characters) |
| [0076-minimum-window-substring](https://github.com/anuj990/Striver/tree/master/0076-minimum-window-substring) |
| [0239-sliding-window-maximum](https://github.com/anuj990/Striver/tree/master/0239-sliding-window-maximum) |
| [0424-longest-repeating-character-replacement](https://github.com/anuj990/Striver/tree/master/0424-longest-repeating-character-replacement) |
| [0904-fruit-into-baskets](https://github.com/anuj990/Striver/tree/master/0904-fruit-into-baskets) |
| [0930-binary-subarrays-with-sum](https://github.com/anuj990/Striver/tree/master/0930-binary-subarrays-with-sum) |
| [1004-max-consecutive-ones-iii](https://github.com/anuj990/Striver/tree/master/1004-max-consecutive-ones-iii) |
| [1248-count-number-of-nice-subarrays](https://github.com/anuj990/Striver/tree/master/1248-count-number-of-nice-subarrays) |
| [1358-number-of-substrings-containing-all-three-characters](https://github.com/anuj990/Striver/tree/master/1358-number-of-substrings-containing-all-three-characters) |
| [1423-maximum-points-you-can-obtain-from-cards](https://github.com/anuj990/Striver/tree/master/1423-maximum-points-you-can-obtain-from-cards) |
## Monotonic Queue
|  |
| ------- |
| [0239-sliding-window-maximum](https://github.com/anuj990/Striver/tree/master/0239-sliding-window-maximum) |
## Data Stream
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/anuj990/Striver/tree/master/0295-find-median-from-data-stream) |
| [0703-kth-largest-element-in-a-stream](https://github.com/anuj990/Striver/tree/master/0703-kth-largest-element-in-a-stream) |
| [0901-online-stock-span](https://github.com/anuj990/Striver/tree/master/0901-online-stock-span) |
## Doubly-Linked List
|  |
| ------- |
| [0460-lfu-cache](https://github.com/anuj990/Striver/tree/master/0460-lfu-cache) |
## Prefix Sum
|  |
| ------- |
| [0930-binary-subarrays-with-sum](https://github.com/anuj990/Striver/tree/master/0930-binary-subarrays-with-sum) |
| [1004-max-consecutive-ones-iii](https://github.com/anuj990/Striver/tree/master/1004-max-consecutive-ones-iii) |
| [1248-count-number-of-nice-subarrays](https://github.com/anuj990/Striver/tree/master/1248-count-number-of-nice-subarrays) |
| [1423-maximum-points-you-can-obtain-from-cards](https://github.com/anuj990/Striver/tree/master/1423-maximum-points-you-can-obtain-from-cards) |
## Quickselect
|  |
| ------- |
| [0215-kth-largest-element-in-an-array](https://github.com/anuj990/Striver/tree/master/0215-kth-largest-element-in-an-array) |
| [0347-top-k-frequent-elements](https://github.com/anuj990/Striver/tree/master/0347-top-k-frequent-elements) |
## Tournament Sort
|  |
| ------- |
| [0023-merge-k-sorted-lists](https://github.com/anuj990/Striver/tree/master/0023-merge-k-sorted-lists) |
## Tree
|  |
| ------- |
| [0703-kth-largest-element-in-a-stream](https://github.com/anuj990/Striver/tree/master/0703-kth-largest-element-in-a-stream) |
## Binary Search Tree
|  |
| ------- |
| [0703-kth-largest-element-in-a-stream](https://github.com/anuj990/Striver/tree/master/0703-kth-largest-element-in-a-stream) |
## Binary Tree
|  |
| ------- |
| [0703-kth-largest-element-in-a-stream](https://github.com/anuj990/Striver/tree/master/0703-kth-largest-element-in-a-stream) |
## Quicksort
|  |
| ------- |
| [0455-assign-cookies](https://github.com/anuj990/Striver/tree/master/0455-assign-cookies) |
<!---LeetCode Topics End-->
