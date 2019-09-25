# Monty Bytecodes Interpreter
![Holberton logo](https://www.holbertonschool.com/holberton-logo.png)
> Create a simple Monty Bytecodes Interpreter

## Monty interpreter
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Learning objectives
* What do LIFO and FIFO mean.
* What is a stack, and when to use it.
* What is a queue and when to use it.
* What are the common implementations of stacks and queues.
* What are the most common use cases of stacks and queues.
* What is the proper way to use global variables.
* How to work with git submodules.

## Description of an interpreter
An interpreter is a computer program that directly executes instructions written in a programming or scripting language, without requiring them previously to have been compiled into a machine language program.

## Requirements
Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.

## Example
### Clone repo using HTTPS
```
$ https://github.com/diegozencode/monty.git
```

### Compilation
You can compile the files using this command to check that there are no errors:
```
$ gcc -Wall -pedantic -Werror Wextra *.c -o monty
```

### Usage
monty <file_name>
```bash
$ cat -e bytecodes/000.m
push 1$
push 2$
push 3$
pall$
./monty bytecodes/000.m
3
2
1
$
```

## Contribution
Create a new branch with the name of your feature or fix and do a pull request to develop branch explaining your work.

## Authors
* **Daniel Ramirez** - [gomba66](https://github.com/gomba66)
* **Diego Monroy** - [Diego-Zen](https://github.com/diegozencode)
