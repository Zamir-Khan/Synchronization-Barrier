# Process Synchronization Barrier Project

Welcome to the Process Synchronization Barrier project developed for the Operating System Concepts course in Summer 2023. This project revolves around the implementation of a process synchronization barrier using the power of Semaphores. The goal is to orchestrate a seamless synchronization mechanism that enhances coordination among processes. The barrier is carefully designed to ensure compatibility across diverse platforms while optimizing its performance.

## Features

- Synchronization Barrier: The core feature of this project is the process synchronization barrier. It effectively ensures that multiple processes reach a designated point together before proceeding, improving overall synchronization and coordination.

- Utilization of Semaphores: Semaphores, a key synchronization primitive, are utilized to implement the synchronization barrier. This demonstrates an understanding of advanced synchronization mechanisms.

- Cross-Platform Compatibility: The barrier is tailored to work consistently across diverse platforms, showcasing the ability to design robust and adaptable solutions.

## Project Details

### Integration of Process Synchronization Barrier

The project involves the integration of a process synchronization barrier using Semaphores. This barrier ensures that multiple processes pause and wait until all processes have reached the barrier before any of them proceed. This mechanism is particularly useful in scenarios where inter-process coordination is crucial.

### Optimization for Compatibility

One of the significant achievements of the project is optimizing the synchronization barrier for compatibility across various platforms. This ensures that the barrier functions reliably and consistently regardless of the underlying operating system or environment.

### Expertise in C++ Programming and UNIX Environments

The project underscores the developer's expertise in C++ programming and their adeptness in navigating UNIX environments. This includes knowledge of system calls, process management, and utilizing synchronization primitives.

## Usage

1. **Compilation**: Compile the source code files using a C++ compiler compatible with UNIX environments. There is a Makefile available as well in the src folder.

2. **Execution**: Run the compiled executable. The program will demonstrate the functionality of the process synchronization barrier by calculating Prefix-sum. 

## Files

- `barrier.cpp`: This is the main source code file that contains the implementation of the process synchronization barrier using Semaphores.

## Getting Started

1. Clone or download the repository to your local machine.

2. Open a terminal or command prompt and navigate to the project directory.

3. Compile the `prefix-sum.cpp` file using a UNIX terminal make command. For example: `make`.

4. To run, use command "./prefix-sum <ARRAY_SIZE> <TOTAL_THREADS> <OUTPUT_FILENAME>".
     4a. ARRAY_SIZE - takes an integer, creates that many elements in the array
		 4b. TOTAL_THREADS - takes an integer, creates that many worker threads
		 4c. OUTPUT_FILENAME - takes a string, creates output file of that name to store results
		 4d. Example Command: ":/prefix-sum 1000000 20 output.txt"
		 
5. After execution, the last line of the output file is considered final result.
	 	 5a. Example Output for command above: "1000000"


## Acknowledgments

This project was developed as part of the Operating System Concepts course in Summer 2023. It showcases the integration of a process synchronization barrier using Semaphores and highlights the developer's expertise in C++ programming and UNIX environments.

---
