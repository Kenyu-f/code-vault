https://www.youtube.com/watch?v=xND0t1pr3KY&t=10307s bro code clang 3:03:36

Based on the code provided in the file "Screenshot 2026-07-31 at 21.07.53.jpg", the issue is indeed related to variable scope. Here are the points to be careful about, along with the corrected code.

### Points to Note About Variable Scope

* **Local Scope Confinement:** Variables declared inside a function (like `x` and `y` inside `main()`) are "local" to that function. They exist and can only be accessed within the curly braces `{}` of that specific function.
* **Invisible to Other Functions:** The `subtract()` function cannot "see" or access the `x` and `y` variables defined in `main()`. When the compiler reads `int result = x - y;` inside `subtract()`, it throws an error because `x` and `y` are undeclared in that context.
* **Passing Arguments is Required:** To use the values of `x` and `y` from `main()` inside `subtract()`, you must pass them as arguments when calling the function, just like the `add(int x, int y)` function signature implies.
* **Updating the Function Signature:** The `subtract()` function must be updated to accept these arguments by declaring parameters (e.g., `int subtract(int x, int y)`).

---

### Corrected Code

Here is the fixed version of your code. I also added `#include <stdio.h>` at the top, which is necessary for the `printf` function to work correctly in C.

```c
#include <stdio.h>

int add(int x, int y){
    // Assuming you want to return the sum here
    return x + y; 
}

// 1. Add parameters to accept the values
int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main(){

    int x = 5;
    int y = 6;
    
    // 2. Pass x and y as arguments to the function call
    int result = subtract(x, y);
    
    printf("%d", result);
    
    return 0;
}

```
