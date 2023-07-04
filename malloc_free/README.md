<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Master&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2161,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - malloc, free&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:2},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - malloc, free</h1>
</div>
</div>
<div>
<div>
<h3>Concepts</h3>
</div>
<div>
<p><em>For this project, we expect you to look at this concept:</em></p>
<ul>
<li><a href="https://intranet.hbtn.io/concepts/891">Automatic and dynamic allocation, malloc and free</a></li>
</ul>
</div>
</div>
<div>
<div>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="0x0a - malloc &amp; free - quick overview.pdf" href="https://intranet.hbtn.io/rltoken/jLHiF8lDWmdjL7HMjrsyKQ" target="_blank" rel="noopener">0x0a - malloc &amp; free - quick overview.pdf</a></li>
<li><a title="Dynamic memory allocation in C - malloc calloc realloc free" href="https://intranet.hbtn.io/rltoken/q_SFo9w6mIBGMJk_1nzbVQ" target="_blank" rel="noopener">Dynamic memory allocation in C - malloc calloc realloc free</a> (<em>stop at 6:50</em>)</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>malloc</code></li>
<li><code>free</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/GSBkjrDuNeB9hcLbz3RAjg" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is the difference between automatic and dynamic allocation</li>
<li>What is <code>malloc</code> and <code>free</code> and how to use them</li>
<li>Why and when use <code>malloc</code></li>
<li>How to use <code>valgrind</code> to check for memory leak</li>
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
<li>The only C standard library functions allowed are <code>malloc</code> and <code>free</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a title="_putchar" href="https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c" target="_blank" rel="noopener">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>
<h2>More Info</h2>
<p>You do not have to learn about <code>calloc</code> and <code>realloc</code>.</p>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task19989" data-position="1">
<div>
<h3>0. Float like a butterfly, sting like a bee</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that creates an array of chars, and initializes it with a specific char.</p>
<ul>
<li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
<li>Returns <code>NULL</code> if size = <code>0</code></li>
<li>Returns a pointer to the array, or <code>NULL</code> if it fails</li>
</ul>
<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
 unsigned int i;
 i = 0;
 while (i &lt; size)
 {
 if (i % 10)
 {
 printf(" ");
 }
 if (!(i % 10) &amp;&amp; i)
 {
 printf("\n");
 }
 printf("0x%02x", buffer[i]);
 i++;
 }
 printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 char *buffer;
 buffer = create_array(98, 'H');
 if (buffer == NULL)
 {
 printf("failed to allocate memory\n");
 return (1);
 }
 simple_print_buffer(buffer, 98);
 free(buffer);
 return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>malloc_free</code></li>
<li>File: <code>0-create_array.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19990" data-position="2">
<div>
<h3>1. The woman who has no imagination has no wings</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>
<ul>
<li>Prototype: <code>char *_strdup(char *str);</code></li>
<li>The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>. Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.</li>
<li>Returns <code>NULL</code> if str = NULL</li>
<li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string. It returns <code>NULL</code> if insufficient memory was available</li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>
<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 char *s;
 s = _strdup("Duplicated");
 if (s == NULL)
 {
 printf("failed to allocate memory\n");
 return (1);
 }
 printf("%s\n", s);
 free(s);
 return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
julien@ubuntu:~/0x0a. malloc, free$ ./s
Duplicated
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>malloc_free</code></li>
<li>File: <code>1-strdup.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19991" data-position="3">
<div>
<h3>2. He who is not courageous enough to take risks will accomplish nothing in life</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that concatenates two strings.</p>
<ul>
<li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated</li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
<li>The function should return <code>NULL</code> on failure</li>
</ul>
<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 char *s;
 s = str_concat("Best ", "School");
 if (s == NULL)
 {
 printf("failed\n");
 return (1);
 }
 printf("%s\n", s);
 free(s);
 return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat
julien@ubuntu:~/0x0a. malloc, free$ ./2-str_concat | cat -e
Best School$
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>malloc_free</code></li>
<li>File: <code>2-str_concat.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19992" data-position="4">
<div>
<h3>3. If you even dream of beating me you'd better wake up and apologize</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns a pointer to a 2 dimensional array of integers.</p>
<ul>
<li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
<li>Each element of the grid should be initialized to <code>0</code></li>
<li>The function should return <code>NULL</code> on failure</li>
<li>If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 3-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
 int w;
 int h;
 h = 0;
 while (h &lt; height)
 {
 w = 0;
 while (w &lt; width)
 {
 printf("%d ", grid[h][w]);
 w++;
 }
 printf("\n");
 h++;
 }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int **grid;
 grid = alloc_grid(6, 4);
 if (grid == NULL)
 {
 return (1);
 }
 print_grid(grid, 6, 4);
 printf("\n");
 grid[0][3] = 98;
 grid[3][4] = 402;
 print_grid(grid, 6, 4);
 return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o 3-alloc_grid
julien@ubuntu:~/0x0a. malloc, free$ ./3-alloc_grid
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 98 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 402 0
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>malloc_free</code></li>
<li>File: <code>3-alloc_grid.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19993" data-position="5">
<div>
<div>
<h3>4. It's not bragging if you can back it up</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p>
<ul>
<li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
<li>Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.</li>
</ul>
<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 4-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
 int w;
 int h;
 h = 0;
 while (h &lt; height)
 {
 w = 0;
 while (w &lt; width)
 {
 printf("%d ", grid[h][w]);
 w++;
 }
 printf("\n");
 h++;
 }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int **grid;
 grid = alloc_grid(6, 4);
 if (grid == NULL)
 {
 return (1);
 }
 print_grid(grid, 6, 4);
 printf("\n");
 grid[0][3] = 98;
 grid[3][4] = 402;
 print_grid(grid, 6, 4);
 free_grid(grid, 4);
 return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o 4-free_grid
julien@ubuntu:~/0x0a. malloc, free$ valgrind ./4-free_grid
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013==
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 98 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 402 0
==5013==
==5013== HEAP SUMMARY:
==5013== in use at exit: 0 bytes in 0 blocks
==5013== total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013==
==5013== All heap blocks were freed -- no leaks are possible
==5013==
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>malloc_free</code></li>
<li>File: <code>4-free_grid.c</code></li>
</ul>
</div>
</div>
</div>
</div>