# Chuck Norris Unary Coding

### Coding a message using only 0's and spaces

This problem was copied from [Codingame](https://www.codingame.com/ide/puzzle/chuck-norris). All credits of the problem/coding design go to them or whoever originally thought about this encoding and the name for it.

---

## Chuck Norris Coding

## The Goal

Binary with 0 and 1 is good, but binary with only 0, or almost, is even better! Originally, this is a concept designed by Chuck Norris to send so called unary messages.

Write a program that takes an incoming message as input and displays as output the message encoded using Chuck Norris’ method.

## Rules

Here is the encoding principle:

* The input message consists of ASCII characters (7-bit)
* The encoded output message consists of blocks of 0
* A block is separated from another block by a space
* Two consecutive blocks are used to produce a series of same value bits (only 1 or 0 values):
  * First block: it is always 0 or 00. If it is 0, then the series contains 1, if not, it contains 0
  * Second block: the number of 0 in this block is the number of bits in the series

## Example

Let’s take a simple example with a message which consists of only one character: Capital C. C in binary is represented as 1000011, so with Chuck Norris’ technique this gives:

* 0 0 (the first series consists of only a single 1)
* 00 0000 (the second series consists of four 0)
* 0 00 (the third consists of two 1)

So C is coded as: 0 0 00 0000 0 00

Second example, we want to encode the message CC (i.e. the 14 bits 10000111000011) :

* 0 0 (one single 1)
* 00 0000 (four 0)
* 0 000 (three 1)
* 00 0000 (four 0)
* 0 00 (two 1)

So CC is coded as: 0 0 00 0000 0 000 00 0000 0 00

---

## Log:

While making the program, I ran into two new problems I had not run into before.

First of all, originally I tried to use array for storing the ASCII version of the message. I declared this array using a variable dependent on the length of the message. This caused an error. This was stupid of me, and I should have realised to use vector instead of array for this purpose straight away. Well, lesson learned, hopefully.

Secondly, I ran into to a problem with error message: "Vector subscript out of range". I was not sure what caused the error, but then I localised the most likely place and corrected this. But this didn't solve the problem. After looking around the code for other possibilities, I ended up using Visual Studios debuggin tool (, which is amazing btw), and localised the problem at the place I thought I already fixed. After some intense looking and thinking, I realised that I had not properly fixed the problem. Small new if statement was finally able to solve the problem properly.

## What now?

Next thing to continue with this problem would be to add a decoding functionality. But this is a problem for another day, as it is late and I want to go to sleep now.
