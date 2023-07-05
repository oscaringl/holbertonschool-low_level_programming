<div class="sm-gap">
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Amateur&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2176,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Doubly linked lists&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:3},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<div class="panel panel-tile project-header">
<div class="panel-body">
<div class="project-info">
<h1>C - Doubly linked lists</h1>
</div>
</div>
</div>
</div>
</div>
<div id="project-description" class="panel panel-default">
<div class="panel-body">
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="What is a Doubly Linked List" href="https://intranet.hbtn.io/rltoken/4k13B5KYF6vxzGZpOn4lXQ" target="_blank" rel="noopener">What is a Doubly Linked List</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/e8Zsk4cGDpToUN3-Sp9n1Q" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is a doubly linked list</li>
<li>How to use doubly linked lists</li>
<li>Start to look for the right source of information without too much help</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code>, <code>printf</code> and <code>exit</code></li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>lists.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2>More Info</h2>
<p>Please use this data structure for this project:</p>
<pre><code>/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
</code></pre>
</div>
</div>
<div id="project-quiz-questions-title" class="panel panel-default">&nbsp;</div>
<h2 class="gap">Tasks</h2>
<div id="task-num-0" data-role="task20150" data-position="1">
<div id="task-20150" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">0. Print list</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that prints all the elements of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t print_dlistint(const dlistint_t *h);</code></li>
<li>Return: the number of nodes</li>
<li>Format: see example</li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new-&gt;n = 9;
    head-&gt;prev = new;
    new-&gt;next = head;
    new-&gt;prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-&gt; %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/Doubly linked lists$ ./a 
9
8
-&gt; 2 elements
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>0-print_dlistint.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-1" data-role="task20151" data-position="2">
<div id="task-20151" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">1. List length</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that returns the number of elements in a linked <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>size_t dlistint_len(const dlistint_t *h);</code></li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &amp;hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new-&gt;n = 9;
    head-&gt;prev = new;
    new-&gt;next = head;
    new-&gt;prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-&gt; %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/Doubly linked lists$ ./b 
-&gt; 2 elements
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>1-dlistint_len.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-2" data-role="task20152" data-position="3">
<div id="task-20152" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">2. Add node</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that adds a new node at the beginning of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&amp;head, 0);
    add_dnodeint(&amp;head, 1);
    add_dnodeint(&amp;head, 2);
    add_dnodeint(&amp;head, 3);
    add_dnodeint(&amp;head, 4);
    add_dnodeint(&amp;head, 98);
    add_dnodeint(&amp;head, 402);
    add_dnodeint(&amp;head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>2-add_dnodeint.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-3" data-role="task20153" data-position="4">
<div id="task-20153" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">3. Add node at the end</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that adds a new node at the end of a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code></li>
<li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>3-add_dnodeint_end.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-4" data-role="task20154" data-position="5">
<div id="task-20154" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">4. Free list</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that frees a <code>dlistint_t</code> list.</p>
<ul>
<li>Prototype: <code>void free_dlistint(dlistint_t *head);</code></li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>4-free_dlistint.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-5" data-role="task20155" data-position="6">
<div id="task-20155" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">5. Get node at index</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that returns the nth node of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node, starting from <code>0</code></li>
<li>if the node does not exist, return <code>NULL</code></li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 5-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node-&gt;n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>5-get_dnodeint.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-6" data-role="task20156" data-position="7">
<div id="task-20156" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">6. Sum list</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int sum_dlistint(dlistint_t *head);</code></li>
<li>if the list is empty, return <code>0</code></li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/Doubly linked lists$ 

</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>6-sum_dlistint.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">&nbsp;</div>
</div>
</div>
</div>
<div id="task-num-7" data-role="task20157" data-position="8">
<div id="task-20157" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">7. Insert at index</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that inserts a new node at a given position.</p>
<ul>
<li>Prototype: <code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code></li>
<li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at <code>0</code></li>
<li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
<li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
</ul>
<p>Your files <code>2-add_dnodeint.c</code> and <code>3-add_dnodeint_end.c</code> will be compiled during the correction</p>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 7-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&amp;head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/Doubly linked lists$
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-8" data-role="task20158" data-position="9">
<div id="task-20158" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">8. Delete at index</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</p>
<ul>
<li>Prototype: <code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code></li>
<li>where <code>index</code> is the index of the node that should be deleted. Index starts at <code>0</code></li>
<li>Returns: <code>1</code> if it succeeded, <code>-1</code> if it failed</li>
</ul>
<pre><code>julien@ubuntu:~/Doubly linked lists$ cat 8-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&amp;head, 0);
    add_dnodeint_end(&amp;head, 1);
    add_dnodeint_end(&amp;head, 2);
    add_dnodeint_end(&amp;head, 3);
    add_dnodeint_end(&amp;head, 4);
    add_dnodeint_end(&amp;head, 98);
    add_dnodeint_end(&amp;head, 402);
    add_dnodeint_end(&amp;head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&amp;head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/Doubly linked lists$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>8-delete_dnodeint.c</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div>9. Crackme4</div>
</div>
</div>
</div>
</div>
<div id="task-num-9" data-role="task20159" data-position="100">
<div id="task-20159" class="panel panel-default task-card ">
<div class="panel-heading panel-heading-actions">
<div><span class="label label-info">#advanced</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Find the password for <a title="crackme4" href="https://github.com/hs-hq/0x17.c" target="_blank" rel="noopener">crackme4</a>.</p>
<ul>
<li>Save the password in the file <code>100-password</code></li>
<li>Your file should contain the exact password, no new line, no extra space</li>
<li>Hint: The program prints &ldquo;OK&rdquo; when the password is correct</li>
</ul>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>100-password</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div>&nbsp;</div>
<div class="fs-4">&nbsp;</div>
</div>
</div>
</div>
</div>
<div id="task-num-10" data-role="task20161" data-position="102">
<div id="task-20161" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">10. Palindromes</h3>
<div><span class="label label-info">#advanced</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is <code>9009</code> = <code>91</code> &times; <code>99</code>.</p>
<p>Find the largest palindrome made from the product of two 3-digit numbers.</p>
<ul>
<li>Save the result in the file <code>102-result</code></li>
<li>Your file should contain the exact result, no new line, no extra space</li>
</ul>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>102-result</code></li>
</ul>
</div>
</div>
<div class="panel-footer">&nbsp;</div>
</div>
</div>
<div id="task-num-11" data-role="task20162" data-position="103">
<div id="task-20162" class="panel panel-default task-card "><span id="user_id" data-id="5810"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">11. crackme5</h3>
<div><span class="label label-info">#advanced</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="5810"></span>
<p>Write a keygen for <a title="crackme5" href="https://github.com/hs-hq/0x17.c" target="_blank" rel="noopener">crackme5</a>.</p>
<ul>
<li>Usage of the crackme: <code>./crackme5 username key</code></li>
<li>The crackme will segfault if you do not enter the correct key for the user</li>
<li>Usage for your keygen: <code>./keygen5 username</code></li>
<li>Your keygen should print a valid key for the <code>username</code></li>
</ul>
<pre><code>julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
julien@ubuntu:~/$ ./crackme5 julien javascript
Segmentation fault (core dumped)
julien@ubuntu:~/$ ./crackme5 julien `./keygen5 julien`
Congrats!
julien@ubuntu:~/$ 
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>doubly_linked_lists</code></li>
<li>File: <code>103-keygen.c</code></li>
</ul>
</div>
</div>
</div>
</div>