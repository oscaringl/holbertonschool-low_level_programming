<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Amateur&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2171,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Bit manipulation&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:3},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - Bit manipulation</h1>
</div>
</div>
<div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/232/bitwise.PNG" /></p>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Google" href="https://intranet.hbtn.io/rltoken/K6QcR1Dp4e5u67E586ooiA" target="_blank" rel="noopener">Google</a></li>
<li><a title="Youtube" href="https://intranet.hbtn.io/rltoken/cdSMJd0abHiCWCYwt6_Dmw" target="_blank" rel="noopener">Youtube</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/z2OqrNaTG0PowJH0H92Nqg" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>Look for the right source of information without too much help</li>
<li>How to manipulate bits and use bitwise operators</li>
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
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code>files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
</div>
</div>
<div>
<div>
<h3>Quiz questions</h3>
</div>
<div>
<div><strong>Great!</strong> You've completed the quiz successfully! Keep going! (Show quiz)</div>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task20079" data-position="1">
<div>
<div>mandatory</div>
</div>
<div>
<p>Write a function that converts a binary number to an <code>unsigned int</code>.</p>
<ul>
<li>Prototype: <code>unsigned int binary_to_uint(const char *b);</code></li>
<li>where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars</li>
<li>Return: the converted number, or 0 if
<ul>
<li>there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code></li>
<li><code>b</code> is <code>NULL</code></li>
</ul>
</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 unsigned int n;
 n = binary_to_uint("1");
 printf("%u\n", n);
 n = binary_to_uint("101");
 printf("%u\n", n);
 n = binary_to_uint("1e01");
 printf("%u\n", n);
 n = binary_to_uint("1100010");
 printf("%u\n", n);
 n = binary_to_uint("0000000000000000000110010010");
 printf("%u\n", n);
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/Binary$ ./a
1
5
0
98
402
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>0-binary_to_uint.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20080" data-position="2">
<div>
<h3>1. 1</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints the binary representation of a number.</p>
<ul>
<li>Prototype: <code>void print_binary(unsigned long int n);</code></li>
<li>Format: see example</li>
<li>You are not allowed to use arrays</li>
<li>You are not allowed to use <code>malloc</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 1-main.c
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 print_binary(0);
 printf("\n");
 print_binary(1);
 printf("\n");
 print_binary(98);
 printf("\n");
 print_binary(1024);
 printf("\n");
 print_binary((1 &lt;&lt; 10) + 1);
 printf("\n");
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/Binary$ ./b
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>1-print_binary.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20081" data-position="3">
<div>
<h3>2. 10</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the value of a bit at a given index.</p>
<ul>
<li>Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get</li>
<li>Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 int n;
 n = get_bit(1024, 10);
 printf("%d\n", n);
 n = get_bit(98, 1);
 printf("%d\n", n);
 n = get_bit(1024, 0);
 printf("%d\n", n);
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
julien@ubuntu:~/Binary$ ./c
1
1
0
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>2-get_bit.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20082" data-position="4">
<div>
<h3>3. 11</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that sets the value of a bit to <code>1</code> at a given index.</p>
<ul>
<li>Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 unsigned long int n;
 n = 1024;
 set_bit(&amp;n, 5);
 printf("%lu\n", n);
 n = 0;
 set_bit(&amp;n, 10);
 printf("%lu\n", n);
 n = 98;
 set_bit(&amp;n, 0);
 printf("%lu\n", n);
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/Binary$ ./d
1056
1024
99
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>3-set_bit.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20083" data-position="5">
<div>
<h3>4. 100</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that sets the value of a bit to <code>0</code> at a given index.</p>
<ul>
<li>Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 unsigned long int n;
 n = 1024;
 clear_bit(&amp;n, 10);
 printf("%lu\n", n);
 n = 0;
 clear_bit(&amp;n, 10);
 printf("%lu\n", n);
 n = 98;
 clear_bit(&amp;n, 1);
 printf("%lu\n", n);
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/Binary$ ./e
0
0
96
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>4-clear_bit.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20084" data-position="6">
<div>
<h3>5. 101</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p>
<ul>
<li>Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 5-main.c
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 unsigned int n;
 n = flip_bits(1024, 1);
 printf("%u\n", n);
 n = flip_bits(402, 98);
 printf("%u\n", n);
 n = flip_bits(1024, 3);
 printf("%u\n", n);
 n = flip_bits(1024, 1025);
 printf("%u\n", n);
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/Binary$ ./f
2
5
3
1
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>5-flip_bits.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20085" data-position="100">
<div>
<h3>6. Endianness</h3>
<div>#advanced</div>
</div>
<div>
<p>Write a function that checks the endianness.</p>
<ul>
<li>Prototype: <code>int get_endianness(void);</code></li>
<li>Returns: <code>0</code> if big endian, <code>1</code> if little endian</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ cat 100-main.c
#include &lt;stdio.h&gt;
#include "main.h"
int main(void)
{
 int n;
 n = get_endianness();
 if (n != 0)
 {
 printf("Little Endian\n");
 }
 else
 {
 printf("Big Endian\n");
 }
 return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
julien@ubuntu:~/Binary$ ./h
Little Endian
julien@ubuntu:~/Binary$ lscpu | head
Architecture: x86_64
CPU op-mode(s): 32-bit, 64-bit
Byte Order: Little Endian
CPU(s): 1
On-line CPU(s) list: 0
Thread(s) per core: 1
Core(s) per socket: 1
Socket(s): 1
NUMA node(s): 1
Vendor ID: GenuineIntel
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>100-get_endianness.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20086" data-position="101">
<div>
<h3>7. Crackme3</h3>
<div>#advanced</div>
</div>
<div>
<p>Find the password for <a title="this program" href="https://github.com/hs-hq/0x13.c" target="_blank" rel="noopener">this program</a>.</p>
<ul>
<li>Save the password in the file <code>101-password</code></li>
<li>Your file should contain the exact password, no new line, no extra space</li>
</ul>
<pre><code>julien@ubuntu:~/Binary$ ./crackme3 `cat 101-password`
Congratulations!
julien@ubuntu:~/Binary$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>bit_manipulation</code></li>
<li>File: <code>101-password</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task20087" data-position="102">
<div>
<div>
<h3>8. Two's complement and negative numbers</h3>
<div>#advanced</div>
</div>
<div>
<p>Write a blog post on how integers are stored in memory using two&rsquo;s complement.</p>
<ul>
<li>Have at least one picture, at the top of the blog post</li>
<li>Have a few examples covering positive and negative numbers</li>
<li>Publish your blog post on Medium or LinkedIn</li>
<li>Share your blog post at least on LinkedIn</li>
</ul>
<p>When done, please add all urls below (blog post, LinkedIn post, etc.)</p>
<p>Please, remember that these blogs must be written in English to further your technical ability in a variety of settings</p>
<p><strong>It is your responsibility to request a review for your blog from a peer before the project&rsquo;s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.</strong></p>
</div>
</div>
</div>