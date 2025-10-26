# Exception Handling in C++

## Title: Understanding Exception Handling in C++

-----

## Aim

*To study and apply the concept of Exception Handling in C++ programming.*

---

## Theory: Exception Handling

### What is Exception Handling?
Exception handling in C++ is a mechanism to handle runtime errors (exceptions) gracefully without abruptly terminating the program.  

**Key Points:**
- Helps write robust, fault-tolerant programs.
- Centralized error management.
- Separates normal logic from error-handling logic.
- Supports error propagation across functions.
- Makes debugging and maintenance easier.

---

### Keywords

| Keyword | Description |
|---------|-------------|
| **try** | Monitors code for exceptions. Contains statements that may throw errors. |
| **throw** | Signals an exception has occurred. Can throw values of any type. |
| **catch** | Handles exceptions thrown by `try`. Can be overloaded for different data types. |

---

###  Significance
- Avoids abrupt program termination.
- Clean separation of logic and error handling.
- More powerful than simple error messages.
- Ensures program stability.
- Reduces complex nested checks.
- Useful in large-scale and safety-critical systems.

---

###  Difference Between Traditional Error Handling and Exception Handling

| Aspect | Traditional Error Handling | Exception Handling |
|--------|-----------------------------|--------------------|
| Mechanism | Uses if-else, return codes | Uses `try`, `throw`, `catch` |
| Logic Separation | Mixed with normal code | Clearly separated |
| Termination | May terminate abruptly | Graceful recovery |
| Readability | Less readable in big programs | Cleaner and modular |
| Propagation | Must pass manually | Automatic propagation |
| Resource Mgmt | Manual cleanup | Can integrate with RAII |
| Scalability | Hard in large apps | Easier with centralized handling |
| Error Types | Predictable only | Predictable + runtime |

---

### Differences Between `try`, `throw`, and `catch`

| Keyword | Purpose | When Used | Example |
|---------|---------|-----------|---------|
| **try** | Monitor code for exceptions | Around risky code | `try { cin >> age; }` |
| **throw** | Signal an error | Inside `try` when error occurs | `throw age;` |
| **catch** | Handle the exception | After `try` block | `catch(int e) { cout << "Error"; }` |

---


##  Algorithms & Flowcharts

### Voting Eligibility Program

**Algorithm:**
1. Start.  
2. Input user age.  
3. Try block:  
   - If `age < 0`, throw `-1`.  
   - Else if `age < 18`, throw `age`.  
   - Else, print *Eligible to vote*.  
4. Catch block:  
   - If `-1`, print *Age cannot be negative*.  
   - Else, print *Not eligible. Minimum age 18*.  
5. End.


---

###  Division by Zero Program

**Algorithm:**
1. Start.  
2. Input numerator and denominator.  
3. Try block:  
   - If denominator == 0, throw denominator.  
   - Else, perform division and print result.  
4. Catch block:  
   - Print *ERROR! Division by zero not allowed*.  
5. End.

---

##  Conclusion

This experiment demonstrated how C++ exception handling with `try`, `throw`, and `catch` provides a structured way to detect and handle runtime errors like invalid age inputs and division by zero. Exception handling ensures program robustness, fault tolerance, and cleaner separation of normal and error-handling logic. It is a vital feature in industries ranging from finance to embedded systems, where reliability and safety are critical.

