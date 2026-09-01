# 100 Days of Code — C

Solutions for the **100 Days of Code (UPES)** challenge hosted at
<https://maitysoumik.github.io/basic-coding-with-c/>.

The challenge runs **two problems a day for the first 50 days**, then one a day
after that. It started on **10 August 2026**, so this repository currently
covers **Day 1 – Day 23 (Q1 – Q46)** — every question released so far.

## Repository layout

```
Day01/
  q01_sum_of_two_numbers.c
  q02_sum_diff_product_quotient.c
Day02/
  ...
Day23/
  q45_series_sum_even_over_four_k_minus_one.c
  q46_square_star_pattern.c
```

One folder per day, one `.c` file per question. Every file opens with a comment
block holding the **question text and its sample test cases**, so each file is
self-contained for review.

## Building and running

```bash
gcc Day01/q01_sum_of_two_numbers.c -o q01
./q01
```

Three programs use `math.h` and need the math library linked:

```bash
gcc Day05/q09_simple_and_compound_interest.c -o q09 -lm
```

All 46 files compile clean with `gcc -Wall -std=c99` (no warnings), and each was
run against its sample inputs.

> **Windows note:** Q23 and Q24 print the `₹` symbol. If it shows as garbage in
> `cmd.exe`, run `chcp 65001` first to switch the console to UTF-8.

## Where this repository differs from the site's sample outputs

Four sample outputs on the site do not match the problem as written. Each of
these programs implements the **stated** problem and carries a comment
explaining the difference:

| Question | Site sample | This repository | Why |
|---|---|---|---|
| **Q4** | `Circumference=43.96` for r=7 | `43.98` | `43.96` comes from PI = 3.14, but the same sample's `Area=153.94` needs accurate PI. The r=3 sample matches accurate PI exactly. |
| **Q9** | `Compound Interest=1125.76` for 5000/7%/3y | `1125.22` | `P(1 + R/100)^T − P` gives 1125.22. |
| **Q44** | `3.3` for n=3 | `2.58` | Summing `1 + 3/4 + 5/6 + …` gives 2.58. The n=5 sample (`4.4`) does match. |
| **Q45** | `1.56` for n=3, `2.22` for n=5 | `1.78`, `2.84` | The k-th term `2k/(4k−1)` sums to these values. |

Every other question matches its sample output exactly.

## Day index

| Day | # | Question | File |
|---|---|---|---|
| Day01 | **Q1** | Input two numbers and display their sum | [`q01_sum_of_two_numbers.c`](Day01/q01_sum_of_two_numbers.c) |
|  | **Q2** | Input two numbers and display their sum, difference, product, and quotient | [`q02_sum_diff_product_quotient.c`](Day01/q02_sum_diff_product_quotient.c) |
| Day02 | **Q3** | Calculate the area and perimeter of a rectangle given its length and breadth | [`q03_rectangle_area_perimeter.c`](Day02/q03_rectangle_area_perimeter.c) |
|  | **Q4** | Calculate the area and circumference of a circle given its radius | [`q04_circle_area_circumference.c`](Day02/q04_circle_area_circumference.c) |
| Day03 | **Q5** | Convert temperature from Celsius to Fahrenheit | [`q05_celsius_to_fahrenheit.c`](Day03/q05_celsius_to_fahrenheit.c) |
|  | **Q6** | Swap two numbers using a third variable | [`q06_swap_using_third_variable.c`](Day03/q06_swap_using_third_variable.c) |
| Day04 | **Q7** | Swap two numbers without using a third variable | [`q07_swap_without_third_variable.c`](Day04/q07_swap_without_third_variable.c) |
|  | **Q8** | Find and display the sum of the first n natural numbers | [`q08_sum_of_first_n_naturals.c`](Day04/q08_sum_of_first_n_naturals.c) |
| Day05 | **Q9** | Calculate simple and compound interest for given principal, rate, and time | [`q09_simple_and_compound_interest.c`](Day05/q09_simple_and_compound_interest.c) |
|  | **Q10** | Input time in seconds and convert it to hours:minutes:seconds format | [`q10_seconds_to_hms.c`](Day05/q10_seconds_to_hms.c) |
| Day06 | **Q11** | Input an integer and check whether it is even or odd using if-else | [`q11_even_or_odd.c`](Day06/q11_even_or_odd.c) |
|  | **Q12** | Input an integer and check whether it is positive, negative or zero using nested if-else | [`q12_positive_negative_zero.c`](Day06/q12_positive_negative_zero.c) |
| Day07 | **Q13** | Input a year and check whether it is a leap year or not using conditional statements | [`q13_leap_year.c`](Day07/q13_leap_year.c) |
|  | **Q14** | Input a character and check whether it is a vowel or consonant using if-else | [`q14_vowel_or_consonant.c`](Day07/q14_vowel_or_consonant.c) |
| Day08 | **Q15** | Input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit,... | [`q15_character_type.c`](Day08/q15_character_type.c) |
|  | **Q16** | Input three numbers and find the largest among them using if-else | [`q16_largest_of_three.c`](Day08/q16_largest_of_three.c) |
| Day09 | **Q17** | Find the roots of a quadratic equation and categorize them | [`q17_quadratic_roots.c`](Day09/q17_quadratic_roots.c) |
|  | **Q18** | Accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Gr... | [`q18_grade_from_percentage.c`](Day09/q18_grade_from_percentage.c) |
| Day10 | **Q19** | Classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths | [`q19_triangle_type.c`](Day10/q19_triangle_type.c) |
|  | **Q20** | Display the day of the week based on a number (1-7) using switch-case | [`q20_day_of_week.c`](Day10/q20_day_of_week.c) |
| Day11 | **Q21** | Display the month name and number of days using switch-case for a given month number | [`q21_month_name_and_days.c`](Day11/q21_month_name_and_days.c) |
|  | **Q22** | Find profit or loss percentage given cost price and selling price | [`q22_profit_or_loss.c`](Day11/q22_profit_or_loss.c) |
| Day12 | **Q23** | Calculate library fine based on late days as follows: First 5 days late : ₹2/day Next 5 days... | [`q23_library_fine.c`](Day12/q23_library_fine.c) |
|  | **Q24** | Calculate electricity bill based on units consumed with these rates: First 100 units at ₹5/u... | [`q24_electricity_bill.c`](Day12/q24_electricity_bill.c) |
| Day13 | **Q25** | Implement a basic calculator using switch-case for +, -, *, /, % | [`q25_basic_calculator.c`](Day13/q25_basic_calculator.c) |
|  | **Q26** | Print numbers from 1 to n | [`q26_print_1_to_n.c`](Day13/q26_print_1_to_n.c) |
| Day14 | **Q27** | Print the sum of the first n odd numbers | [`q27_sum_of_first_n_odd_numbers.c`](Day14/q27_sum_of_first_n_odd_numbers.c) |
|  | **Q28** | Print the product of even numbers from 1 to n | [`q28_product_of_even_numbers.c`](Day14/q28_product_of_even_numbers.c) |
| Day15 | **Q29** | Calculate the factorial of a number | [`q29_factorial.c`](Day15/q29_factorial.c) |
|  | **Q30** | Reverse a given number | [`q30_reverse_a_number.c`](Day15/q30_reverse_a_number.c) |
| Day16 | **Q31** | Take a number as input and print its equivalent binary representation | [`q31_decimal_to_binary.c`](Day16/q31_decimal_to_binary.c) |
|  | **Q32** | Check if a number is a palindrome | [`q32_palindrome_number.c`](Day16/q32_palindrome_number.c) |
| Day17 | **Q33** | Check if a number is an Armstrong number | [`q33_armstrong_number.c`](Day17/q33_armstrong_number.c) |
|  | **Q34** | Check if a number is prime | [`q34_prime_number.c`](Day17/q34_prime_number.c) |
| Day18 | **Q35** | Print all factors of a given number | [`q35_factors_of_a_number.c`](Day18/q35_factors_of_a_number.c) |
|  | **Q36** | Find the HCF (GCD) of two numbers | [`q36_hcf_of_two_numbers.c`](Day18/q36_hcf_of_two_numbers.c) |
| Day19 | **Q37** | Find the LCM of two numbers | [`q37_lcm_of_two_numbers.c`](Day19/q37_lcm_of_two_numbers.c) |
|  | **Q38** | Find the sum of digits of a number | [`q38_sum_of_digits.c`](Day19/q38_sum_of_digits.c) |
| Day20 | **Q39** | Find the product of odd digits of a number | [`q39_product_of_odd_digits.c`](Day20/q39_product_of_odd_digits.c) |
|  | **Q40** | Find the 1's complement of a binary number and print it | [`q40_ones_complement_of_binary.c`](Day20/q40_ones_complement_of_binary.c) |
| Day21 | **Q41** | Swap the first and last digit of a number | [`q41_swap_first_and_last_digit.c`](Day21/q41_swap_first_and_last_digit.c) |
|  | **Q42** | Check if a number is a perfect number | [`q42_perfect_number.c`](Day21/q42_perfect_number.c) |
| Day22 | **Q43** | Check if a number is a strong number | [`q43_strong_number.c`](Day22/q43_strong_number.c) |
|  | **Q44** | Find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms | [`q44_series_sum_odd_over_even.c`](Day22/q44_series_sum_odd_over_even.c) |
| Day23 | **Q45** | Find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms | [`q45_series_sum_even_over_four_k_minus_one.c`](Day23/q45_series_sum_even_over_four_k_minus_one.c) |
|  | **Q46** | Print a 5x5 square star pattern | [`q46_square_star_pattern.c`](Day23/q46_square_star_pattern.c) |

## Pushing this to GitHub

This folder is already a git repository with one commit. To publish it:

1. Create a **new, empty** repository on <https://github.com/new> — no README,
   no `.gitignore`, no licence (leave it completely empty).
2. Then run, from inside this folder:

```bash
git remote add origin https://github.com/<your-username>/<repo-name>.git
git branch -M main
git push -u origin main
```

From then on, after solving each new day:

```bash
git add .
git commit -m "Day 24: Q47, Q48"
git push
```
