<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Master&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2162,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - More malloc, free&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:2},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - More malloc, free</h1>
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
<li><a title="Do I cast the result of malloc?" href="https://intranet.hbtn.io/rltoken/OxKPD8wrcqqWw-FfmoHM0g" target="_blank" rel="noopener">Do I cast the result of malloc?</a></li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>exit (3)</code></li>
<li><code>calloc</code></li>
<li><code>realloc</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/Wn5FOz3Mf-jY_4oha3_wTQ" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>How to use the <code>exit</code> function</li>
<li>What are the functions <code>calloc</code> and <code>realloc</code> from the standard library and how to use them</li>
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
<li>You are allowed to use <a title="_putchar" href="https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c" target="_blank" rel="noopener">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task19996" data-position="1">
<div>
<h3>0. Trust no one</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that allocates memory using <code>malloc</code>.</p>
<ul>
<li>Prototype: <code>void *malloc_checked(unsigned int b);</code></li>
<li>Returns a pointer to the allocated memory</li>
<li>if <code>malloc</code> fails, the <code>malloc_checked</code> function should cause normal process termination with a status value of <code>98</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;limits.h&gt;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 char *c;
 int *i;
 float *f;
 double *d;
 c = malloc_checked(sizeof(char) * 1024);
 printf("%p\n", (void *)c);
 i = malloc_checked(sizeof(int) * 402);
 printf("%p\n", (void *)i);
 f = malloc_checked(sizeof(float) * 100000000);
 printf("%p\n", (void *)f);
 d = malloc_checked(INT_MAX);
 printf("%p\n", (void *)d);
 free(c);
 free(i);
 free(f);
 free(d);
 return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
julien@ubuntu:~/0x0b. more malloc, free$ ./a
0x1e39010
0x1e39830
0x7f31f6c19010
0x6f55f6c19011
julien@ubuntu:~/0x0b. more malloc, free$ echo $?
0
julien@ubuntu:~/0x0b. more malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>more_malloc_free</code></li>
<li>File: <code>0-malloc_checked.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19997" data-position="2">
<div>
<h3>1. string_nconcat</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that concatenates two strings.</p>
<ul>
<li>Prototype: <code>char *string_nconcat(char *s1, char *s2, unsigned int n);</code></li>
<li>The returned pointer shall point to a newly allocated space in memory, which contains <code>s1</code>, followed by the first <code>n</code> bytes of <code>s2</code>, and null terminated</li>
<li>If the function fails, it should return <code>NULL</code></li>
<li>If <code>n</code> is greater or equal to the length of <code>s2</code> then use the entire string <code>s2</code></li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
</ul>
<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 1-main.c
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
 char *concat;
 concat = string_nconcat("Best ", "School !!!", 6);
 printf("%s\n", concat);
 free(concat);
 return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
julien@ubuntu:~/0x0b. more malloc, free$ ./1-string_nconcat
Best School
julien@ubuntu:~/0x0b. more malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>more_malloc_free</code></li>
<li>File: <code>1-string_nconcat.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19998" data-position="3">
<div>
<h3>2. _calloc</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that allocates memory for an array, using <code>malloc</code>.</p>
<ul>
<li>Prototype: <code>void *_calloc(unsigned int nmemb, unsigned int size);</code></li>
<li>The <code>_calloc</code> function allocates memory for an array of <code>nmemb</code> elements of <code>size</code> bytes each and returns a pointer to the allocated memory.</li>
<li>The memory is set to zero</li>
<li>If <code>nmemb</code> or <code>size</code> is <code>0</code>, then <code>_calloc</code> returns <code>NULL</code></li>
<li>If <code>malloc</code> fails, then <code>_calloc</code> returns <code>NULL</code></li>
</ul>
<p>FYI: The standard library provides a different function: <code>calloc</code>. Run <code>man calloc</code> to learn more.</p>
<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 2-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
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
 char *a;
 a = _calloc(98, sizeof(char));
 strcpy(a, "Best");
 strcpy(a + 4, " School! :)\n");
 a[97] = '!';
 simple_print_buffer(a, 98);
 free(a);
 return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
julien@ubuntu:~/0x0b. more malloc, free$ ./2-calloc
0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
julien@ubuntu:~/0x0b. more malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>more_malloc_free</code></li>
<li>File: <code>2-calloc.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19999" data-position="4">
<div>
<div>
<h3>3. array_range</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that creates an array of integers.</p>
<ul>
<li>Prototype: <code>int *array_range(int min, int max);</code></li>
<li>The array created should contain all the values from <code>min</code> (included) to <code>max</code> (included), ordered from <code>min</code> to <code>max</code></li>
<li>Return: the pointer to the newly created array</li>
<li>If <code>min</code> &gt; <code>max</code>, return <code>NULL</code></li>
<li>If <code>malloc</code> fails, return <code>NULL</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 3-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
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
 int *a;
 a = array_range(0, 10);
 simple_print_buffer(a, 11);
 free(a);
 return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o 3-array_range
julien@ubuntu:~/0x0b. more malloc, free$ ./3-array_range
0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
0x0a
julien@ubuntu:~/0x0b. more malloc, free$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>more_malloc_free</code></li>
<li>File: <code>3-array_range.c</code></li>
</ul>
</div>
</div>
</div>
</div>