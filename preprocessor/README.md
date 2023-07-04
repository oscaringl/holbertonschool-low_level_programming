<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Master&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2163,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Preprocessor&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:0},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - Preprocessor</h1>
</div>
</div>
<div>
<div>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Understanding C program Compilation Process" href="https://intranet.hbtn.io/rltoken/YExZqwaYLppKtBK4Hr8Iyw" target="_blank" rel="noopener">Understanding C program Compilation Process</a></li>
<li><a title="Object-like Macros" href="https://intranet.hbtn.io/rltoken/YNfygjrLQsvIHp6fKY1CjA" target="_blank" rel="noopener">Object-like Macros</a></li>
<li><a title="Macro Arguments" href="https://intranet.hbtn.io/rltoken/UwGCIuJ59QfBvL1qceYLwQ" target="_blank" rel="noopener">Macro Arguments</a></li>
<li><a title="Pre Processor Directives in C" href="https://intranet.hbtn.io/rltoken/AshKZEhWCXUi7gHtOweOwQ" target="_blank" rel="noopener">Pre Processor Directives in C</a></li>
<li><a title="The C Preprocessor" href="https://intranet.hbtn.io/rltoken/efZkS0ixSSw5sKvEoBPlFA" target="_blank" rel="noopener">The C Preprocessor</a></li>
<li><a title="Standard Predefined Macros" href="https://intranet.hbtn.io/rltoken/X5wONSZbaYNg_7KTIRarFA" target="_blank" rel="noopener">Standard Predefined Macros</a></li>
<li><a title="include guard" href="https://intranet.hbtn.io/rltoken/aQn4KZhfyYWO0htFvsS9dg" target="_blank" rel="noopener">include guard</a></li>
<li><a title="Common Predefined Macros" href="https://intranet.hbtn.io/rltoken/RTJL9iYjkXCAX1czVTthKw" target="_blank" rel="noopener">Common Predefined Macros</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/BUSnuoj0tPYR45ydu8qrmA" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are macros and how to use them</li>
<li>What are the most common predefined macros</li>
<li>How to include guard your header files</li>
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
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task20002" data-position="1">
<div>
<h3>0. Object-like Macro</h3>
<div>mandatory</div>
</div>
<div>
<p>Create a header file that defines a macro named <code>SIZE</code> as an abbreviation for the token <code>1024</code>.</p>
<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include &lt;stdio.h&gt;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int s;
 s = 98 + SIZE;
 printf("%d\n", s);
 return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a
1122
julien@ubuntu:~/0x0c. macro, structures$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>preprocessor</code></li>
<li>File: <code>0-object_like_macro.h</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20003" data-position="2">
<div>
<h3>1. Pi</h3>
<div>mandatory</div>
</div>
<div>
<p>Create a header file that defines a macro named <code>PI</code> as an abbreviation for the token <code>3.14159265359</code>.</p>
<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include &lt;stdio.h&gt;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 float a;
 float r;
 r = 98;
 a = PI * r * r;
 printf("%.3f\n", a);
 return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>preprocessor</code></li>
<li>File: <code>1-pi.h</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20004" data-position="3">
<div>
<h3>2. File name</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a program that prints the name of the file it was compiled from, followed by a new line.</p>
<ul>
<li>You are allowed to use the standard library</li>
</ul>
<pre><code>julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>preprocessor</code></li>
<li>File: <code>2-main.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20005" data-position="4">
<div>
<h3>3. Function-like macro</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function-like macro <code>ABS(x)</code> that computes the absolute value of a number <code>x</code>.</p>
<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int i;
 int j;
 i = ABS(-98) * 10;
 j = ABS(98) * 10;
 printf("%d, %d\n", i, j);
 return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d
980, 980
julien@ubuntu:~/0x0c. macro, structures$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>preprocessor</code></li>
<li>File: <code>3-function_like_macro.h</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20006" data-position="5">
<div>
<div>
<h3>4. SUM</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function-like macro <code>SUM(x, y)</code> that computes the sum of the numbers <code>x</code> and <code>y</code>.</p>
<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "4-sum.h"
#include "4-sum.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int s;
 s = SUM(98, 1024);
 printf("%d\n", s);
 return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e
1122
julien@ubuntu:~/0x0c. macro, structures$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>preprocessor</code></li>
<li>File: <code>4-sum.h</code></li>
</ul>
</div>
</div>
</div>
</div>