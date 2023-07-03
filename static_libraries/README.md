<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Amateur&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2159,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Static libraries&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:0},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<div>
<div>
<div>
<h1>C - Static libraries</h1>
</div>
</div>
</div>
</div>
</div>
<div>
<div>
<h3>Concepts</h3>
</div>
<div>
<p><em>For this project, we expect you to look at this concept:</em></p>
<ul>
<li><a href="https://intranet.hbtn.io/concepts/890">C static libraries</a></li>
</ul>
</div>
</div>
<div>
<div>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="What Is A &quot;C&quot; Library? What Is It Good For?" href="https://intranet.hbtn.io/rltoken/ybnw3yGP38RCfO4a2u8AoQ" target="_blank" rel="noopener">What Is A &ldquo;C&rdquo; Library? What Is It Good For?</a></li>
<li><a title="Creating A Static &quot;C&quot; Library Using &quot;ar&quot; and &quot;ranlib&quot;" href="https://intranet.hbtn.io/rltoken/ybnw3yGP38RCfO4a2u8AoQ" target="_blank" rel="noopener">Creating A Static &ldquo;C&rdquo; Library Using &ldquo;ar&rdquo; and &ldquo;ranlib&rdquo;</a></li>
<li><a title="Using A &quot;C&quot; Library In A Program" href="https://intranet.hbtn.io/rltoken/ybnw3yGP38RCfO4a2u8AoQ" target="_blank" rel="noopener">Using A &ldquo;C&rdquo; Library In A Program</a></li>
<li><a title="What is difference between Dynamic and Static library(Static and Dynamic linking)" href="https://intranet.hbtn.io/rltoken/TAba2ij0SD-D1b_R_hYlOw" target="_blank" rel="noopener">What is difference between Dynamic and Static library(Static and Dynamic linking)</a> (<em>stop at 4:44</em>)</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>ar</code></li>
<li><code>ranlib</code></li>
<li><code>nm</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/jPNxpUHig5tVHkHqfNKHfw" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is a static library, how does it work, how to create one, and how to use it</li>
<li>Basic usage of <code>ar</code>, <code>ranlib</code>, <code>nm</code></li>
</ul>
<h2>Requirements</h2>
<h3>C</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a title="_putchar" href="https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c" target="_blank" rel="noopener">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>
<h3>Bash</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing</li>
<li>All your files must be executable</li>
</ul>
<h2>More Info</h2>
<p>You do not need to learn about dynamic libraries, yet.</p>
<h3>Manual QA Review</h3>
<p><strong>It is your responsibility to request a review for your blog from a peer before the project&rsquo;s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.</strong></p>
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
<div data-role="task19980" data-position="1">
<div>
<div>
<h3>0. A library is not a luxury but one of the necessities of life</h3>
<div>mandatory</div>
</div>
<div>
<p>Create the static library <code>libmy.a</code> containing all the functions listed below:</p>
<pre><code>int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
</code></pre>
<p>If you haven&rsquo;t coded all of the above functions create empty ones with the right prototype.<br />Don&rsquo;t forget to push your <code>main.h</code> file to your repository. It should at least contain all the prototypes of the above functions.</p>
<pre><code>julien@ubuntu:~/Static Librairies$ ar -t libmy.a
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/Static Librairies$ nm libmy.a
0-isupper.o:
0000000000000000 T _isupper
0-memset.o:
0000000000000000 T _memset
0-strcat.o:
0000000000000000 T _strcat
1-isdigit.o:
0000000000000000 T _isdigit
1-memcpy.o:
0000000000000000 T _memcpy
1-strncat.o:
0000000000000000 T _strncat
100-atoi.o:
0000000000000000 T _atoi
2-strchr.o:
0000000000000000 T _strchr
2-strlen.o:
0000000000000000 T _strlen
2-strncpy.o:
0000000000000000 T _strncpy
3-islower.o:
0000000000000000 T _islower
3-puts.o:
 U _putchar
0000000000000000 T _puts
3-strcmp.o:
0000000000000000 T _strcmp
3-strspn.o:
0000000000000000 T _strspn
4-isalpha.o:
0000000000000000 T _isalpha
4-strpbrk.o:
0000000000000000 T _strpbrk
5-strstr.o:
0000000000000000 T _strstr
6-abs.o:
0000000000000000 T _abs
9-strcpy.o:
0000000000000000 T _strcpy
_putchar.o:
0000000000000000 T _putchar
 U write
julien@ubuntu:~/Static Librairies$ cat main.c
#include "main.h"
int main(void)
{
 _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
 return (0);
}
julien@ubuntu:~/Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
julien@ubuntu:~/Static Librairies$ ./quote
"At the end of the day, my goal was to be the best hacker"
 - Kevin Mitnick
julien@ubuntu:~/Static Librairies$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>static_libraries</code></li>
<li>File: <code>libmy.a, main.h</code></li>
</ul>
</div>
</div>
<div>
<div>
<div><strong>0/22 </strong>pts</div>
</div>
</div>
</div>
</div>
<div data-role="task19982" data-position="3">
<div>
<div>
<h3>1. Without libraries what have we? We have no past and no future</h3>
<div>mandatory</div>
</div>
<div>
<p>Create a script called <code>create_static_lib.sh</code> that creates a static library called <code>liball.a</code> from all the <code>.c</code> files that are in the current directory.</p>
<pre><code>julien@ubuntu:~/Static Librairies$ ls *.c
0-isupper.c 0-strcat.c 1-isdigit.c 1-strncat.c 2-strlen.c 3-islower.c 3-strcmp.c 4-isalpha.c 5-strstr.c 9-strcpy.c _putchar.c
0-memset.c 100-atoi.c 1-memcpy.c 2-strchr.c 2-strncpy.c 3-puts.c 3-strspn.c 4-strpbrk.c 6-abs.c
julien@ubuntu:~/Static Librairies$ ./create_static_lib.sh
julien@ubuntu:~/Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/Static Librairies$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>static_libraries</code></li>
<li>File: <code>create_static_lib.sh</code></li>
</ul>
</div>
</div>
</div>
</div>