# 1 June 2021

<details>
<summary> charges.java</summary>
<br>

## Question statment

There are N subatomic particles lined up in a row. There are two types: protons and electrons. Protons have a positive charge and are represented by 1, while electrons have a negative charge and are represented by 0.

Our current understanding of physics gives us a way to predict how the particles will be spaced out, if we know their charges. Two adjacent particles will be separated by 1 unit if they have opposite charges, and 2 units if they have the same charge.

When Chef is not in the kitchen, he is doing physics experiments on subatomic particles. He is testing the hypothesis by having N particles in a row, and he will change the charge of a particle K times. In the i-th update, he will change the charge of the Qi-th particle. After each update, find the distance between the first and last particle.

Note: Each update is persistent for further updates.

## Input

- The first line contains an integer T, the number of test cases. Then the test cases follow.
- Each test case contains three lines of input.
- The first line contains two integers N, K.
- The second line contains a string S of length N, where Si represents the initial charge on i-th particle.
- The third line contains K integers Q1,Q2,…,QK, the positions of the changed particles.

## Output

- For each test case, output K lines, where the i-th line contains the answer after the updates Q1,…,Qi have been made.

## Constraints

- 1≤T≤5
- 1≤N,K≤105
- S contains only 0 and 1 characters.
- 1≤Qi≤N
- The sum of K over all testcases is at most 2⋅105

## Subtasks

- Subtask #1 (100 points): original constraints

## Sample Input

```
1
3 3
010
2 1 3
```

## Sample Output

```
4
3
2
```

## Explanation

- Update 1: After reversing the parity of particle 2, the new configuration is 000. Since all the particles have a similar charge, each is separated from the previous by a distance of 2 units. So the location of particle 3 is 2+2=4 units from the first particle.

- Update 2: After reversing the parity of particle 1, the new configuration is 100. Here, the charges of particles 1 and 2 differ, so they are separated by 1 unit. The charges of particles 2 and 3 agree, so they are separated by 2 units. So, the location of particle 3 is 1+2=3 units from the first particle.

- Update 3: After reversing the charge of particle 3, the new configuration is 101. Here, particles 1 and 2 are separated by 1 unit and particles 2 and 3 are separated by 1 unit. So the location of particle 3 is 1+1=2 units from the first particle.

### Note:

- Calculating length after each try leads to TLE
- Calculate base length one and the change with each changes

</details>

<details>
<summary> life_uni_evrytk.cpp</summary>
<br>

## Question statment

Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

## Example

### Input:

- 1
- 2
- 88
- 42
- 99

### Output:

- 1
- 2
- 88
</details>
<details>
<summary> total_component.cpp</summary>
<br>

## Question statment

You are given all N−1 integers in the range [2,N]. In each step, you choose 2 distinct integers and if they share a common factor greater than 1, you combine them into the same group. You keep doing it until no further merging is possible.

Belonging to a group is an equivalence relation. So if integers a and b are in the same group and integers b and c are in the same group, then integers a and c are also said to be in the same group.

Find the total number of groups formed in the end.

## Input

- First line will contain T, number of test cases. Then the test cases follow.
- Each test case contains a single line of input, a single integer N.

## Output

- For each test case, output in a single line the answer to the problem.

## Constraints

- 1≤T≤2⋅105
- 2≤N≤107

## Subtasks

- Subtask #1 (30 points):
  - 1≤T≤200
  - 2≤N≤1000
- Subtask #2 (70 points): original constraints

## Sample Input

```
3
2
4
8
```

## Sample Output

```
1
2
3
```

## Explanation

- Test Case 1: The final group is {2}.

- Test Case 2: The final groups are {2,4}, and {3}.

- Test Case 3: The final groups are {2,3,4,6,8}, {5}, and {7}

### Note:

- Sieve of Eratosthenes used(Check HELP for doc)
- Precalculation reguired otherwise TLE
- 1e7=10<sup>7</sup> not 10e7
</details>
<details>
<summary>Sieve of Eratosthenes </summary>
Sieve of Eratosthenes applied in java
</details>
