# Get Next Line

This is the second project in the 42 Cadet Curriculum.
Overall, it is an easy project once you comprehend what is being asked from you.
It gets complicated by the fact that you are only allowed to use the following functions: **`read, malloc and free`**.

### What to go over?

* **File Manipulations**  - make sure you are comfortable with file manipulation functions such as **`open, read and close`**. You have to understand the meaning of RETURN values for each function.
* **Linked Lists**  - you are not required to use Linked Lists to complete this project but it was a personal challenge and I enjoyed resolving all the issues I had with memory management and finding leaks.
* **LLDB** - or any other debugger. Learning how to debug your code is a valuable skill. If you haven't learned debugging during your LIBFT, I recommend getting familiar with LLDB (or any other debugger).
* **Memory Management** - it is important to find where the memory is being leaked. Therefore, it's important to become comfortable with using **`fsanitize, leaks or valgrind`**.

Most of the problem comes down to solving three requirements:

* Working with a really small BUFF_SIZE
* Working with a really big BUFF_SIZE
* Learning how to use `static` variables

### Bonus Part

You get the bonus if you implement the ability to handle `multiple file descriptors` and if you use only `one static variable`.
