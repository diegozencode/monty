# Monty Bytecodes Interpreter
![Holberton logo](https://www.holbertonschool.com/holberton-logo.png)
> Create a simple Monty Bytecodes Interpreter

## Description:bulb:

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files. An interpreter is a computer program that directly executes instructions written in a programming or scripting language, without requiring them previously to have been compiled into a machine language program.

* What do LIFO and FIFO mean.
* What is a stack, and when to use it.
* What is a queue and when to use it.
* What are the common implementations of stacks and queues.
* What are the most common use cases of stacks and queues.
* What is the proper way to use global variables.
* How to work with git submodules.

## Technologies & Tools:computer:

![Ubuntu](https://img.shields.io/badge/≡-Ubuntu-E95420?&style=flat-square&logo=Ubuntu&labelColor=282828)
![Git](https://img.shields.io/badge/≡-Git-F05032?logo=git&style=flat-square&labelColor=282828)
![GNU_Bash](https://img.shields.io/badge/≡-GNU_Bash-4EAA25?logo=GNU-Bash&style=flat-square&labelColor=282828)
![Vim](https://img.shields.io/badge/≡-Vim-019733?logo=Vim&style=flat-square&logoColor=019733&labelColor=282828)
![Vagrant](https://img.shields.io/badge/≡-Vagrant-1563FF?logo=Vagrant&style=flat-square&logoColor=1563FF&labelColor=282828)
![C](https://img.shields.io/badge/≡-C-A8B9CC?logo=C&style=flat-square&labelColor=282828)
![GNU_Emacs](https://img.shields.io/badge/≡-GNU_Emacs-7F5AB6?logo=GNU-Emacs&style=flat-square&labelColor=282828)
![GitHub](https://img.shields.io/badge/≡-GitHub-181717?logo=GitHub&style=flat-square&labelColor=282828)

---

## Requirements:exclamation:
Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.

---

## Example:hammer_and_wrench:
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
---

## Contribution:heavy_check_mark:
Create a new branch with the name of your feature or fix and do a pull request to develop branch explaining your work.

---

## Authors
* **Daniel Ramirez** - [gomba66](https://github.com/gomba66)
* **Diego Monroy** (@diegozencode) - [<img src="https://img.shields.io/badge/Portfolio-20d6fe.svg?&style=plastic"/>](https://diegozencode.github.io/)
[<img src="https://img.shields.io/badge/Twitter-1DA1F2.svg?&style=plastic&logo=twitter&logoColor=white"/>](https://twitter.com/diegozencode)
[<img src="https://img.shields.io/badge/Linkedin-0A66C2.svg?&style=plastic&logo=linkedin&logoColor=white"/>](https://www.linkedin.com/in/diegozencode)
[<img src="https://img.shields.io/badge/GitHub-181717.svg?&style=plastic&logo=github&logoColor=white"/>](https://github.com/diegozencode)
