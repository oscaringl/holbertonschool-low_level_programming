<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Master&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2166,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Variadic functions&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:1},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - Variadic functions</h1>
</div>
</div>
<div>
<div>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="stdarg.h" href="https://intranet.hbtn.io/rltoken/gyP9q81fzXR7FIeHScaKyw" target="_blank" rel="noopener">stdarg.h</a></li>
<li><a title="Variadic Functions" href="https://intranet.hbtn.io/rltoken/PY9dOZHn7a5M9suR-0j1yQ" target="_blank" rel="noopener">Variadic Functions</a></li>
<li><a title="Const Keyword" href="https://intranet.hbtn.io/rltoken/8IGI7fBTuIOm1T-2BAUDIg" target="_blank" rel="noopener">Const Keyword</a></li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>stdarg</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/_r8i6_hyAB73kOu9A4N0sw" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are variadic functions</li>
<li>How to use <code>va_start</code>, <code>va_arg</code> and <code>va_end</code> macros</li>
<li>Why and how to use the <code>const</code> type qualifier</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use the following macros: <code>va_start</code>, <code>va_arg</code> and <code>va_end</code></li>
<li>You are allowed to use <a title="_putchar" href="https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c" target="_blank" rel="noopener">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code>files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>variadic_functions.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task20020" data-position="1">
<div>
<h3>0. Beauty is variable, ugliness is constant</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the sum of all its parameters.</p>
<ul>
<li>Prototype: <code>int sum_them_all(const unsigned int n, ...);</code></li>
<li>If <code>n == 0</code>, return <code>0</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int sum;
 sum = sum_them_all(2, 98, 1024);
 printf("%d\n", sum);
 sum = sum_them_all(4, 98, 1024, 402, -1024);
 printf("%d\n", sum);
 return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a
1122
500
julien@ubuntu:~/0x0f. variadic functions$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>variadic_functions</code></li>
<li>File: <code>0-sum_them_all.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20021" data-position="2">
<div>
<h3>1. To be is to be the value of a variable</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints numbers, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_numbers(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between numbers</li>
<li>and <code>n</code> is the number of integers passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If <code>separator</code> is <code>NULL</code>, don&rsquo;t print it</li>
<li>Print a new line at the end of your function</li>
</ul>
<pre><code>julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 print_numbers(", ", 4, 0, 98, -1024, 402);
 return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>variadic_functions</code></li>
<li>File: <code>1-print_numbers.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20022" data-position="3">
<div>
<h3>2. One woman's constant is another woman's variable</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints strings, followed by a new line.</p>
<ul>
<li>Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code></li>
<li>where <code>separator</code> is the string to be printed between the strings</li>
<li>and <code>n</code> is the number of strings passed to the function</li>
<li>You are allowed to use <code>printf</code></li>
<li>If separator is NULL, don&rsquo;t print it</li>
<li>If one of the string is NULL, print <code>(nil)</code> instead</li>
<li>Print a new line at the end of your function</li>
</ul>
<pre><code>julien@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c
#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 print_strings(", ", 2, "Jay", "Django");
 return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>variadic_functions</code></li>
<li>File: <code>2-print_strings.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20023" data-position="4">
<div>
<div>
<h3>3. To be is a to be the value of a variable</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints anything.</p>
<ul>
<li>Prototype: <code>void print_all(const char * const format, ...);</code></li>
<li>where <code>format</code> is a list of types of arguments passed to the function
<ul>
<li><code>c</code>: <code>char</code></li>
<li><code>i</code>: <code>integer</code></li>
<li><code>f</code>: <code>float</code></li>
<li><code>s</code>: <code>char *</code> (if the string is NULL, print <code>(nil)</code> instead</li>
<li>any other char should be ignored</li>
<li>see example</li>
</ul>
</li>
<li>You are not allowed to use <code>for</code>, <code>goto</code>, ternary operator, <code>else</code>, <code>do ... while</code></li>
<li>You can use a maximum of
<ul>
<li>2 <code>while</code> loops</li>
<li>2 <code>if</code></li>
</ul>
</li>
<li>You can declare a maximum of <code>9</code> variables</li>
<li>You are allowed to use <code>printf</code></li>
<li>Print a new line at the end of your function</li>
</ul>
<pre><code>julien@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c
#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 print_all("ceis", 'B', 3, "stSchool");
 return (0);
}
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d
B, 3, stSchool
julien@ubuntu:~/0x0f. Variadic functions$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>variadic_functions</code></li>
<li>File: <code>3-print_all.c</code></li>
</ul>
</div>
</div>
</div>
</div>