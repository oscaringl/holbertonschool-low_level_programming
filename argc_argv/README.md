<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Amateur&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2160,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - argc, argv&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:1},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<div>
<div>
<div>
<h1>C - argc, argv</h1>
</div>
</div>
</div>
</div>
</div>
<div>
<div>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Arguments to main" href="https://intranet.hbtn.io/rltoken/ro9HSskzyAhNpzdcVhdVWw" target="_blank" rel="noopener">Arguments to main</a></li>
<li><a title="argc and argv" href="https://intranet.hbtn.io/rltoken/zjdRHZTL-ImDCnGuMfHYfA" target="_blank" rel="noopener">argc and argv</a></li>
<li><a title="What does argc and argv mean?" href="https://intranet.hbtn.io/rltoken/RT0y1HPM-AChT_JQedpdaA" target="_blank" rel="noopener">What does argc and argv mean?</a></li>
<li><a title="how to compile with unused variables" href="https://intranet.hbtn.io/rltoken/GvQNF9qKoUuY1t0U1AsetA" target="_blank" rel="noopener">how to compile with unused variables</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/mixi0RLDGmKIaS1nqcn0xg" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>How to use arguments passed to your program</li>
<li>What are two prototypes of <code>main</code> that you know of, and in which case do you use one or the other</li>
<li>How to use <code>__attribute__((unused))</code> or <code>(void)</code> to compile functions with unused variables or parameters</li>
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
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>You are allowed to use the standard library</li>
</ul>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task19983" data-position="1">
<div>
<div>
<h3>0. It ain't what they call you, it's what you answer to</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a program that prints its name, followed by a new line.</p>
<ul>
<li>If you rename the program, it will print the new name, without having to compile it again</li>
<li>You should not remove the path before the name of the program</li>
</ul>
<pre><code>julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/argc, argv$ ./mynameis
./mynameis
julien@ubuntu:~/argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/argc, argv$ ./mynewnameis
./mynewnameis
julien@ubuntu:~/argc, argv$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>argc_argv</code></li>
<li>File: <code>0-whatsmyname.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task19984" data-position="2">
<div>
<div>
<h3>1. Silence is argument carried out by other means</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a program that prints the number of arguments passed into it.</p>
<ul>
<li>Your program should print a number, followed by a new line</li>
</ul>
<pre><code>julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/argc, argv$ ./nargs
0
julien@ubuntu:~/argc, argv$ ./nargs hello
1
julien@ubuntu:~/argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/argc, argv$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>argc_argv</code></li>
<li>File: <code>1-args.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task19985" data-position="3">
<div>
<div>
<h3>2. The best argument against democracy is a five-minute conversation with the average voter</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a program that prints all arguments it receives.</p>
<ul>
<li>All arguments should be printed, including the first one</li>
<li>Only print one argument per line, ending with a new line</li>
</ul>
<pre><code>julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/argc, argv$ ./args
./args
julien@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/argc, argv$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>argc_argv</code></li>
<li>File: <code>2-args.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task19986" data-position="4">
<div>
<div>
<h3>3. Neither irony nor sarcasm is argument</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a program that multiplies two numbers.</p>
<ul>
<li>Your program should print the result of the multiplication, followed by a new line</li>
<li>You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
<li>If the program does not receive two arguments, your program should print <code>Error</code>, followed by a new line, and return <code>1</code></li>
</ul>
<pre><code>julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/argc, argv$ ./mul 2 3
6
julien@ubuntu:~/argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/argc, argv$ ./mul 2 0
0
julien@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/argc, argv$ ./mul
Error
julien@ubuntu:~/argc, argv$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>argc_argv</code></li>
<li>File: <code>3-mul.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task19987" data-position="5">
<div>
<div>
<h3>4. To infinity and beyond</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a program that adds positive numbers.</p>
<ul>
<li>Print the result, followed by a new line</li>
<li>If no number is passed to the program, print <code>0</code>, followed by a new line</li>
<li>If one of the number contains symbols that are not digits, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>You can assume that numbers and the addition of all the numbers can be stored in an <code>int</code></li>
</ul>
<pre><code>julien@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/argc, argv$ ./add 1 1
2
julien@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/argc, argv$ ./add
0
julien@ubuntu:~/argc, argv$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>argc_argv</code></li>
<li>File: <code>4-add.c</code></li>
</ul>
</div>
</div>
</div>
</div>