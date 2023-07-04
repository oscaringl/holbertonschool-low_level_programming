<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Novice&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2168,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Singly linked lists&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:1},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<div>
<div>
<div>
<h1>C - Singly linked lists</h1>
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
<li><a href="https://intranet.hbtn.io/concepts/889">Data Structures</a></li>
</ul>
</div>
</div>
<div>
<div>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/229/giphy-3.gif" alt="" /></p>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Linked Lists" href="https://intranet.hbtn.io/rltoken/cg9u72K8oC40BifREzmx0g" target="_blank" rel="noopener">Linked Lists</a></li>
<li><a title="Google" href="https://intranet.hbtn.io/rltoken/cOmrDflypepm1-sgGIXjNA" target="_blank" rel="noopener">Google</a></li>
<li><a title="Youtube" href="https://intranet.hbtn.io/rltoken/6CP1oqEpl5hd1j18fusEEQ" target="_blank" rel="noopener">Youtube</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/QoooFrklQh-pD3PEjxV8cA" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>When and why using linked lists vs arrays</li>
<li>How to build and use linked lists</li>
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
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2>More Info</h2>
<p>Please use this data structure for this project:</p>
<pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
 char *str;
 unsigned int len;
 struct list_s *next;
} list_t;
</code></pre>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task20042" data-position="1">
<div>
<div>
<h3>0. Print list</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints all the elements of a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t print_list(const list_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
<li>If <code>str</code> is <code>NULL</code>, print <code>[0] (nil)</code></li>
<li>You are allowed to use <code>printf</code></li>
</ul>
<pre><code>julien@ubuntu:~/Singly linked lists$ cat 0-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 list_t *head;
 list_t *new;
 list_t hello = {"World", 5, NULL};
 size_t n;
 head = &amp;hello;
 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
 printf("Error\n");
 return (1);
 }
 new-&gt;str = strdup("Hello");
 new-&gt;len = 5;
 new-&gt;next = head;
 head = new;
 n = print_list(head);
 printf("-&gt; %lu elements\n", n);
 printf("\n");
 free(new-&gt;str);
 new-&gt;str = NULL;
 n = print_list(head);
 printf("-&gt; %lu elements\n", n);
 free(new);
 return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/Singly linked lists$ ./a
[5] Hello
[5] World
-&gt; 2 elements
[0] (nil)
[5] World
-&gt; 2 elements
julien@ubuntu:~/Singly linked lists$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>singly_linked_lists</code></li>
<li>File: <code>0-print_list.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20043" data-position="2">
<div>
<div>
<h3>1. List length</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t list_len(const list_t *h);</code></li>
</ul>
<pre><code>julien@ubuntu:~/Singly linked lists$ cat 1-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 list_t *head;
 list_t *new;
 list_t hello = {"World", 5, NULL};
 size_t n;
 head = &amp;hello;
 new = malloc(sizeof(list_t));
 if (new == NULL)
 {
 printf("Error\n");
 return (1);
 }
 new-&gt;str = strdup("Hello");
 new-&gt;len = 5;
 new-&gt;next = head;
 head = new;
 n = list_len(head);
 printf("-&gt; %lu elements\n", n);
 free(new-&gt;str);
 free(new);
 return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/Singly linked lists$ ./b
-&gt; 2 elements
julien@ubuntu:~/Singly linked lists$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>singly_linked_lists</code></li>
<li>File: <code>1-list_len.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20044" data-position="3">
<div>
<div>
<h3>2. Add node</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that adds a new node at the beginning of a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>list_t *add_node(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>
<pre><code>julien@ubuntu:~/Singly linked lists$ cat 2-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 list_t *head;
 head = NULL;
 add_node(&amp;head, "Alexandro");
 add_node(&amp;head, "Asaia");
 add_node(&amp;head, "Augustin");
 add_node(&amp;head, "Bennett");
 add_node(&amp;head, "Bilal");
 add_node(&amp;head, "Chandler");
 add_node(&amp;head, "Damian");
 add_node(&amp;head, "Daniel");
 add_node(&amp;head, "Dora");
 add_node(&amp;head, "Electra");
 add_node(&amp;head, "Gloria");
 add_node(&amp;head, "Joe");
 add_node(&amp;head, "John");
 add_node(&amp;head, "John");
 add_node(&amp;head, "Josquin");
 add_node(&amp;head, "Kris");
 add_node(&amp;head, "Marine");
 add_node(&amp;head, "Mason");
 add_node(&amp;head, "Praylin");
 add_node(&amp;head, "Rick");
 add_node(&amp;head, "Rick");
 add_node(&amp;head, "Rona");
 add_node(&amp;head, "Siphan");
 add_node(&amp;head, "Sravanthi");
 add_node(&amp;head, "Steven");
 add_node(&amp;head, "Tasneem");
 add_node(&amp;head, "William");
 add_node(&amp;head, "Zee");
 print_list(head);
 return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/Singly linked lists$ ./c
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/Singly linked lists$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>singly_linked_lists</code></li>
<li>File: <code>2-add_node.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20045" data-position="4">
<div>
<div>
<h3>3. Add node at the end</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that adds a new node at the end of a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>list_t *add_node_end(list_t **head, const char *str);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>You are allowed to use <code>strdup</code></li>
</ul>
<pre><code>julien@ubuntu:~/Singly linked lists$ cat 3-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 list_t *head;
 head = NULL;
 add_node_end(&amp;head, "Anne");
 add_node_end(&amp;head, "Colton");
 add_node_end(&amp;head, "Corbin");
 add_node_end(&amp;head, "Daniel");
 add_node_end(&amp;head, "Danton");
 add_node_end(&amp;head, "David");
 add_node_end(&amp;head, "Gary");
 add_node_end(&amp;head, "Holden");
 add_node_end(&amp;head, "Ian");
 add_node_end(&amp;head, "Ian");
 add_node_end(&amp;head, "Jay");
 add_node_end(&amp;head, "Jennie");
 add_node_end(&amp;head, "Jimmy");
 add_node_end(&amp;head, "Justin");
 add_node_end(&amp;head, "Kalson");
 add_node_end(&amp;head, "Kina");
 add_node_end(&amp;head, "Matthew");
 add_node_end(&amp;head, "Max");
 add_node_end(&amp;head, "Michael");
 add_node_end(&amp;head, "Ntuj");
 add_node_end(&amp;head, "Philip");
 add_node_end(&amp;head, "Richard");
 add_node_end(&amp;head, "Samantha");
 add_node_end(&amp;head, "Stuart");
 add_node_end(&amp;head, "Swati");
 add_node_end(&amp;head, "Timothy");
 add_node_end(&amp;head, "Victor");
 add_node_end(&amp;head, "Walton");
 print_list(head);
 return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/Singly linked lists$ ./d
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
julien@ubuntu:~/Singly linked lists$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>singly_linked_lists</code></li>
<li>File: <code>3-add_node_end.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20046" data-position="5">
<div>
<div>
<h3>4. Free list</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that frees a <code>list_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_list(list_t *head);</code></li>
</ul>
<pre><code>julien@ubuntu:~/Singly linked lists$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
 list_t *head;
 head = NULL;
 add_node_end(&amp;head, "Bob");
 add_node_end(&amp;head, "&amp;");
 add_node_end(&amp;head, "Kris");
 add_node_end(&amp;head, "love");
 add_node_end(&amp;head, "asm");
 print_list(head);
 free_list(head);
 head = NULL;
 return (0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598==
[6] Bob
[1] &amp;
[3] Kris
[4] love
[3] asm
==3598==
==3598== HEAP SUMMARY:
==3598== in use at exit: 0 bytes in 0 blocks
==3598== total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598==
==3598== All heap blocks were freed -- no leaks are possible
==3598==
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Singly linked lists$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>singly_linked_lists</code></li>
<li>File: <code>4-free_list.c</code></li>
</ul>
</div>
</div>
</div>
</div>