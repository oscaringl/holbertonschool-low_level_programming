<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Amateur&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2158,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Recursion&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:2},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - Recursion</h1>
</div>
</div>
<div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/219/a88.jpg" /></p>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Recursion, introduction" href="https://intranet.hbtn.io/rltoken/RZZmKmQJAnyqS_Ci1fFy2A" target="_blank" rel="noopener">Recursion, introduction</a></li>
<li><a title="What on Earth is Recursion?" href="https://intranet.hbtn.io/rltoken/2W6GbB5XNktHDrjqoRPy2g" target="_blank" rel="noopener">What on Earth is Recursion?</a></li>
<li><a title="C - Recursion" href="https://intranet.hbtn.io/rltoken/DC8k2o4fIaE379ozY_Gl1A" target="_blank" rel="noopener">C - Recursion</a></li>
<li><a title="C Programming Tutorial 85, Recursion pt.1" href="https://intranet.hbtn.io/rltoken/z4N9mWZKHoonkjFmeA2moA" target="_blank" rel="noopener">C Programming Tutorial 85, Recursion pt.1</a></li>
<li><a title="C Programming Tutorial 86, Recursion pt.2" href="https://intranet.hbtn.io/rltoken/IOJxRGq3Ts8lNhR2IWwCnA" target="_blank" rel="noopener">C Programming Tutorial 86, Recursion pt.2</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/bqw8EDfaKm0M065Lw3ia5w" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn&rsquo;t implement recursion</li>
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
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a title="_putchar" href="https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c" target="_blank" rel="noopener">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li><strong>You are not allowed to use any kind of loops</strong></li>
<li>You are not allowed to use <code>static</code> variables</li>
</ul>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task19971" data-position="1">
<div>
<h3>0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints a string, followed by a new line.</p>
<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>
<p><code></code></p>
<p><code>
</code></p>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>0-puts_recursion.c</code><code></code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19972" data-position="2">
<div>
<h3>1. Why is it so important to dream? Because, in my dreams we are together</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints a string in reverse.</p>
<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>
<pre><code>
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>1-print_rev_recursion.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19973" data-position="3">
<div>
<h3>2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the length of a string.</p>
<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>
<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>2-strlen_recursion.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19974" data-position="4">
<div>
<div>
<h3>3. You mustn't be afraid to dream a little bigger, darling</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the factorial of a given number.</p>
<ul>
<li>Prototype: <code>int factorial(int n);</code></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error</li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>
<pre><code>
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>3-factorial.c</code></li>
</ul>
</div>
</div>
</div>
</div>
<div data-role="task19975" data-position="5">
<div>
<h3>4. Once an idea has taken hold of the brain it's almost impossible to eradicate</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p>
<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>
<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>
<pre><code>
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>4-pow_recursion.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19976" data-position="6">
<div>
<h3>5. Your subconscious is looking for the dreamer</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the natural square root of a number.</p>
<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>
<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>
<pre><code>
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>5-sqrt_recursion.c</code></li>
</ul>
</div>
</div>
</div>
<div data-role="task19977" data-position="7">
<div>
<div>
<h3>6. Inception. Is it possible?</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns <code>1</code> if the input integer is a <a title="prime number" href="https://intranet.hbtn.io/rltoken/hlTQsmjMQmfHqTYQct3-uA" target="_blank" rel="noopener">prime number</a>, otherwise return <code>0</code>.</p>
<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>
<pre><code>
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>recursion</code></li>
<li>File: <code>6-is_prime_number.c</code></li>
</ul>
</div>
</div>
</div>
</div>