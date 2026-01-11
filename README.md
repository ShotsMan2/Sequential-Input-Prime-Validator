# Sequential Input Prime Validator

This project implements a dynamic input processing algorithm in C that monitors a stream of user-entered integers. It functions as an **Event-Triggered System**, where the termination condition is mathematically defined by the property of Primality.

## ⚙️ Algorithm Logic

The system operates on an infinite polling loop that performs the following steps for each input:

1.  **Input Acquisition:** Captures an integer from the standard input stream.
2.  **Counter Increment:** Tracks the total volume of data entries.
3.  **Primality Test:** validaties if the input $n$ is a prime number using trial division logic ($O(\sqrt{n})$ complexity).
    * If $n < 2$: Not Prime.
    * If $n$ has divisors in range $[2, n/2]$: Not Prime.
    * Else: **Prime Detected**.
4.  **Termination:** If a prime is detected, the loop breaks (`break` statement) and reports the total input count.

## 🚀 Usage Scenario

This logic is commonly used in systems requiring specific "Sentinel Values" to stop data entry, where the sentinel is not a fixed number but a number satisfying a specific mathematical condition.

1.  Compile the code:
    ```bash
    gcc main.c -o prime_validator
    ```
2.  Run the executable:
    ```bash
    ./prime_validator
    ```
3.  Enter non-prime numbers to continue the stream, or enter a prime number to terminate.

---
*This repository demonstrates while-loop control structures and boolean flag logic in C.*
