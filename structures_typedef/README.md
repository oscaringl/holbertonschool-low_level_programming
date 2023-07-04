<div data-role="task20006" data-position="5">
<ul>
<li><code><code></code></code>
<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Master&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2164,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Structures, typedef&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:0},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<h1>C - Structures, typedef</h1>
</div>
</div>
<code><code></code></code>
<div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/3/50af78a28a081e809856d4cdbde2d7ca9d4aa93d.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230704%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230704T174343Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=ef0ab59da6426ed33feef1285bf24b245c3d551a5ae8e64d10322ccaf25f088f" alt="" /></p>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="0x0d. Structures.pdf" href="https://intranet.hbtn.io/rltoken/8TS6dWhiTS4-qstKmfl_Rw" target="_blank" rel="noopener">0x0d. Structures.pdf</a></li>
<li><a title="struct (C programming language)" href="https://intranet.hbtn.io/rltoken/VujS8Eo0cgoOhd1wpZCSwg" target="_blank" rel="noopener">struct (C programming language)</a></li>
<li><a title="Documentation: structures" href="https://intranet.hbtn.io/rltoken/d2uohXRWLbqykxIrbJawpg" target="_blank" rel="noopener">Documentation: structures</a></li>
<li><a title="0x0d. Typedef and structures.pdf" href="https://intranet.hbtn.io/rltoken/haWQ15L2jOBBhM_AK97kww" target="_blank" rel="noopener">0x0d. Typedef and structures.pdf</a></li>
<li><a title="typedef" href="https://intranet.hbtn.io/rltoken/6TX-aFGQs5sAtdtyXBnjyQ" target="_blank" rel="noopener">typedef</a></li>
<li><strong>Programming in C</strong> by Stephen Kochan - <em>Chapter 8, Working with Structures p163-189</em></li>
<li><a title="The Lost Art of C Structure Packing" href="https://intranet.hbtn.io/rltoken/qxIHARCFIPU4IGX12WVa0g" target="_blank" rel="noopener">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/jwBnpES7B-FM71phhXfT2Q" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are structures, when, why and how to use them</li>
<li>How to use <code>typedef</code></li>
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
<li>The only C standard library functions allowed are <code>printf</code>, <code>malloc</code>, <code>free</code> and <code>exit</code>.</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code>files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
</div>
</div>
<code><code></code></code>
<code><code></code></code>
<h2>Tasks</h2>
<code><code></code></code>
<div data-role="task20009" data-position="1">
<div>
<h3>0. Poppy</h3>
<div>mandatory</div>
</div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230704%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230704T174343Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=1de7c7aa71e17fac5d53e96055bf7a1720be79ed4013547b2b2746a4912002a2" alt="" /></p>
<p>Define a new type <code>struct dog</code> with the following elements:</p>
<ul>
<li><code>name</code>, type = <code>char *</code></li>
<li><code>age</code>, type = <code>float</code></li>
<li><code>owner</code>, type = <code>char *</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 struct dog my_dog;
 my_dog.name = "Poppy";
 my_dog.age = 3.5;
 my_dog.owner = "Bob";
 printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
 return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>structures_typedef</code></li>
<li>File: <code>dog.h</code></li>
</ul>
</div>
</div>
</div>
<code><code></code></code>
<div data-role="task20010" data-position="2">
<div>
<h3>1. A dog is the only thing on earth that loves you more than you love yourself</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that initialize a variable of type <code>struct dog</code></p>
<ul>
<li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include &lt;stdio.h&gt;
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 struct dog my_dog;
 init_dog(&amp;my_dog, "Poppy", 3.5, "Bob");
 printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
 return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>structures_typedef</code></li>
<li>File: <code>1-init_dog.c</code></li>
</ul>
</div>
</div>
</div>
<code><code></code></code>
<div data-role="task20011" data-position="3">
<div>
<div>
<h3>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad</h3>
<div>mandatory</div>
</div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230704%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230704T174343Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=0e9feb4c660c396c6da54498fd5eadef1248ba1e0fd6fd622049e6142b0b80a4" alt="" /></p>
<p>Write a function that prints a <code>struct dog</code></p>
<ul>
<li>Prototype: <code>void print_dog(struct dog *d);</code></li>
<li>Format: see example bellow</li>
<li>You are allowed to use the standard library</li>
<li>If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)</li>
<li>If <code>d</code> is <code>NULL</code> print nothing.</li>
</ul>
<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 struct dog my_dog;
 my_dog.name = "Poppy";
 my_dog.age = 3.5;
 my_dog.owner = "Bob";
 print_dog(&amp;my_dog);
 return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>structures_typedef</code></li>
<li>File: <code>2-print_dog.c</code></li>
</ul>
</div>
</div>
</div>
</div>
<div data-role="task20012" data-position="4">
<div>
<h3>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read</h3>
<div>mandatory</div>
</div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230704%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230704T174343Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=cd8a650d578347539253cc81f039324687e03328d715fb996e38caeeba326548" alt="" /></p>
<p>Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.</p>
<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 dog_t my_dog;
 my_dog.name = "Poppy";
 my_dog.age = 3.5;
 my_dog.owner = "Bob";
 printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
 return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>structures_typedef</code></li>
<li>File: <code>dog.h</code></li>
</ul>
</div>
</div>
</div>
<code><code></code></code>
<div data-role="task20013" data-position="5">
<div>
<h3>4. A door is what a dog is perpetually on the wrong side of</h3>
<div>mandatory</div>
</div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230704%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230704T174343Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=42176562f7978eff97b36c1556428210807874a7affc11f16c1d85b68b3a08c8" alt="" /></p>
<p>Write a function that creates a new dog.</p>
<ul>
<li>Prototype: <code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
<li>You have to store a copy of <code>name</code> and <code>owner</code></li>
<li>Return <code>NULL</code> if the function fails</li>
</ul>
<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 dog_t *my_dog;
 my_dog = new_dog("Poppy", 3.5, "Bob");
 printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog-&gt;name, my_dog-&gt;age);
 return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>structures_typedef</code></li>
<li>File: <code>4-new_dog.c</code></li>
</ul>
</div>
</div>
</div>
<code><code></code></code>
<div data-role="task20014" data-position="6">
<div>
<div>
<h3>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg</h3>
<div>mandatory</div>
</div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230704%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230704T174343Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=1923ddc807aafd88ba6db3bf30cd14c19aa6d664b01a4ed8974bd311a8632c7c" alt="" /></p>
<p>Write a function that frees dogs.</p>
<ul>
<li>Prototype: <code>void free_dog(dog_t *d);</code></li>
</ul>
<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include &lt;stdio.h&gt;
#include "dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 dog_t *my_dog;
 my_dog = new_dog("Poppy", 3.5, "Bob");
 printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog-&gt;name, my_dog-&gt;age);
 free_dog(my_dog);
 return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840==
My name is Poppy, and I am 3.5 :) - Woof!
==22840==
==22840== HEAP SUMMARY:
==22840== in use at exit: 0 bytes in 0 blocks
==22840== total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840==
==22840== All heap blocks were freed -- no leaks are possible
==22840==
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>structures_typedef</code></li>
<li>File: <code>5-free_dog.c</code></li>
</ul>
</div>
</div>
</div>
</div>
<code>4-sum.h</code></li>
</ul>
</div>