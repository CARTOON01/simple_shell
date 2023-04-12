# **0x16. c - simple shell**
This project is an implementation of the shell as final project for c code at ALX Africa

## Description
This is a shell written in `c`.
## Environment
The shell will be built and tested on Ubuntu 14.04 LTS.
## Author
<a href="https://github.com/CARTOON01" style="font-size: 11px;" target="_blank">Brian Ngugi</a>

## What is shell
A shell is a program that executes other programs in response to text commands. A sophisticated shell can also change the environment in which other programs execute by passing named variables, a parameter list, or an input source.
> A shell is a command-line interpreter and typcial operations performed by shell scripts including manipulation, program exectution, and printing text.
## Shell script
A shell script is a computer program designed to be run by the UNIX/Linux shell.
## Concepts
## PID & PPID
A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process ID, the system call `getpid` (man 2 `getpid`) is used.
## Exercise
- 0.getpid
0. Write a program that prints the PID of the parent process. Run the program several times within the same shell. It should be the same.
- 1./proc/sys/kernel/pid_max
1. Write a shell script that prints the maximum value a process ID can be.
## Arguments
The command line arguments are passed through the `main` function: `int main(int ac, char **av)`
- `av` is a NULL terminated array of strings
- `ac` is the number of items in av

## Exercise
### 0.av
Write a program that prints all the arguments without using `ac`.
### 1.Read line
Write a program that prints "$", wait for the user to enter command, prints it on the next line.
man3 `getline`
### 2.command line to av
Write a function that splits a string and returns an array of each word of the string.
man `strtok`

## Executing a program
The system call `execve` allows a process to execute another program (man 2 `execve`).
## Creating processes
The system `fork` (man 2 `fork`) creates a new child process, almost identical to the parent . Once `fork` successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.
## Wait
The `wait` system call (man 2 `wait`) suspends execution of the calling process until one of its children terminates.
## Exercise: fork + wait + execve
Write a program that executes the command `ls -l /tmp` in 5 different child processes. Each child should be created by the same process.

## Exercise: super simple shell
Write a first version of simple shell that can run commnads with their full path, without any argument.

## Exercises
Write a command line interpreter
The shell should: • Display a prompt and wait for the user to type a command. A command line always ends with a new line. • The prompt is displayed again each time a command has been executed. • The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features. • The command lines are made only of one word. No arguments will be passed to programs. • If an executable cannot be found, print an error message and display the prompt again. • Handle errors. • You have to handle the “end of file” condition (Ctrl+D).
