<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Amateur&quot;,&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;task_level_review_type&quot;:&quot;Your score will be updated as you progress.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:false}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2181,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - Hash tables&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:1},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<div>
<div>
<div>
<h1>C - Hash tables</h1>
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
<li><a title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" href="https://intranet.hbtn.io/rltoken/hUqezg6bjjjJJStOluPSIw" target="_blank" rel="noopener">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a></li>
<li><a title="Hash function" href="https://intranet.hbtn.io/rltoken/dH6ANz5XtVNVhbEwvzDPGA" target="_blank" rel="noopener">Hash function</a></li>
<li><a title="Hash table" href="https://intranet.hbtn.io/rltoken/X-LAuhHv9e21-388SUsqWw" target="_blank" rel="noopener">Hash table</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/TYd0rtgWdnYZVZYW0z73pg" target="_blank" rel="noopener">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2>More Info</h2>
<h3>Data Structures</h3>
<p>Please use these data structures for this project:</p>
<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
 char *key;
 char *value;
 struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
 unsigned long int size;
 hash_node_t **array;
} hash_table_t;
</code></pre>
<h3>Tests</h3>
<p>We strongly encourage you to work all together on a set of tests</p>
<h3>Python Dictionaries</h3>
<p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {'a': 1, 'b': 2}</code>, but everything looks so simple for the user. Python doesn&rsquo;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a title="how dictionaries are implemented in Python 2.7" href="https://intranet.hbtn.io/rltoken/XFzuh88rCD5uHeJ6wAjRBA" target="_blank" rel="noopener">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>
<p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a title="Read more here" href="https://intranet.hbtn.io/rltoken/jyBuNL75AlTZwJLGcsv2qQ" target="_blank" rel="noopener">Read more here</a> (not mandatory).</p>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task20225" data-position="1">
<div>
<div>
<h3>0. &gt;&gt;&gt; ht = {}</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that creates a hash table.</p>
<ul>
<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>
<ul>
<li>where <code>size</code> is the size of the array</li>
</ul>
</li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return <code>NULL</code></li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 0-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 hash_table_t *ht;
 ht = hash_table_create(1024);
 printf("%p\n", (void *)ht);
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
julien@ubuntu:~/Hash tables$ ./a
0x238a010
julien@ubuntu:~/Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602==
0x51fc040
==7602==
==7602== HEAP SUMMARY:
==7602== in use at exit: 8,208 bytes in 2 blocks
==7602== total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602==
==7602== LEAK SUMMARY:
==7602== definitely lost: 16 bytes in 1 blocks
==7602== indirectly lost: 8,192 bytes in 1 blocks
==7602== possibly lost: 0 bytes in 0 blocks
==7602== still reachable: 0 bytes in 0 blocks
==7602== suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602==
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Hash tables$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>0-hash_table_create.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20226" data-position="2">
<div>
<div>
<h3>1. djb2</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a hash function implementing the djb2 algorithm.</p>
<ul>
<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
<li>You are allowed to copy and paste the function from <a title="this page" href="https://intranet.hbtn.io/rltoken/jkD3ABHG1UbmsimRicXazA" target="_blank" rel="noopener">this page</a></li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 1-djb2.c
unsigned long int hash_djb2(const unsigned char *str)
{
 unsigned long int hash;
 int c;
 hash = 5381;
 while ((c = *str++))
 {
 hash = ((hash &lt;&lt; 5) + hash) + c; /* hash * 33 + c */
 }
 return (hash);
}
julien@ubuntu:~/Hash tables$
julien@ubuntu:~/Hash tables$ cat 1-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 char *s;
 s = "cisfun";
 printf("%lu\n", hash_djb2((unsigned char *)s));
 s = "Don't forget to tweet today";
 printf("%lu\n", hash_djb2((unsigned char *)s));
 s = "98";
 printf("%lu\n", hash_djb2((unsigned char *)s));
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
julien@ubuntu:~/Hash tables$ ./b
6953392314605
3749890792216096085
5861846
julien@ubuntu:~/Hash tables$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>1-djb2.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20227" data-position="3">
<div>
<div>
<h3>2. key -&gt; index</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that gives you the index of a key.</p>
<ul>
<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>
<ul>
<li>where <code>key</code> is the key</li>
<li>and <code>size</code> is the size of the array of the hash table</li>
</ul>
</li>
<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 2-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 char *s;
 unsigned long int hash_table_array_size;
 hash_table_array_size = 1024;
 s = "cisfun";
 printf("%lu\n", hash_djb2((unsigned char *)s));
 printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
 s = "Don't forget to tweet today";
 printf("%lu\n", hash_djb2((unsigned char *)s));
 printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
 s = "98";
 printf("%lu\n", hash_djb2((unsigned char *)s));
 printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
julien@ubuntu:~/Hash tables$ ./c
6953392314605
237
3749890792216096085
341
5861846
470
julien@ubuntu:~/Hash tables$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>2-key_index.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20228" data-position="4">
<div>
<div>
<h3>3. &gt;&gt;&gt; ht['betty'] = 'cool'</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that adds an element to the hash table.</p>
<ul>
<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>
<ul>
<li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
<li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
<li>and <code>value</code> is the value associated with the key. <code>value</code> must be duplicated. <code>value</code> can be an empty string</li>
</ul>
</li>
<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
<li>In case of collision, add the new node at the beginning of the list</li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 3-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 hash_table_t *ht;
 ht = hash_table_create(1024);
 hash_table_set(ht, "betty", "cool");
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
julien@ubuntu:~/Hash tables$
</code></pre>
<p>If you want to test for collisions, here are some strings that collide using the djb2 algorithm:</p>
<ul>
<li><strong>hetairas</strong> collides with <strong>mentioner</strong></li>
<li><strong>heliotropes</strong> collides with <strong>neurospora</strong></li>
<li><strong>depravement</strong> collides with <strong>serafins</strong></li>
<li><strong>stylist</strong> collides with <strong>subgenera</strong></li>
<li><strong>joyful</strong> collides with <strong>synaphea</strong></li>
<li><strong>redescribed</strong> collides with <strong>urites</strong></li>
<li><strong>dram</strong> collides with <strong>vivency</strong></li>
</ul>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>3-hash_table_set.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20229" data-position="5">
<div>
<div>
<h3>4. &gt;&gt;&gt; ht['betty']</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that retrieves a value associated with a key.</p>
<ul>
<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>
<ul>
<li>where <code>ht</code> is the hash table you want to look into</li>
<li>and <code>key</code> is the key you are looking for</li>
</ul>
</li>
<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&rsquo;t be found</li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 4-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 hash_table_t *ht;
 char *value;
 ht = hash_table_create(1024);
 hash_table_set(ht, "c", "fun");
 hash_table_set(ht, "python", "awesome");
 hash_table_set(ht, "Bob", "and Kris love asm");
 hash_table_set(ht, "N", "queens");
 hash_table_set(ht, "Asterix", "Obelix");
 hash_table_set(ht, "Betty", "Cool");
 hash_table_set(ht, "98", "Battery Street");
 hash_table_set(ht, "c", "isfun");
 value = hash_table_get(ht, "python");
 printf("%s:%s\n", "python", value);
 value = hash_table_get(ht, "Bob");
 printf("%s:%s\n", "Bob", value);
 value = hash_table_get(ht, "N");
 printf("%s:%s\n", "N", value);
 value = hash_table_get(ht, "Asterix");
 printf("%s:%s\n", "Asterix", value);
 value = hash_table_get(ht, "Betty");
 printf("%s:%s\n", "Betty", value);
 value = hash_table_get(ht, "98");
 printf("%s:%s\n", "98", value);
 value = hash_table_get(ht, "c");
 printf("%s:%s\n", "c", value);
 value = hash_table_get(ht, "javascript");
 printf("%s:%s\n", "javascript", value);
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
julien@ubuntu:~/Hash tables$ ./e
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
julien@ubuntu:~/Hash tables$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>4-hash_table_get.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20230" data-position="6">
<div>
<div>
<h3>5. &gt;&gt;&gt; print(ht)</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that prints a hash table.</p>
<ul>
<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>
<ul>
<li>where <code>ht</code> is the hash table</li>
</ul>
</li>
<li>You should print the key/value in the order that they appear in the array of hash table
<ul>
<li>Order: array, list</li>
</ul>
</li>
<li>Format: see example</li>
<li>If <code>ht</code> is NULL, don&rsquo;t print anything</li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 5-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 hash_table_t *ht;
 ht = hash_table_create(1024);
 hash_table_print(ht);
 hash_table_set(ht, "c", "fun");
 hash_table_set(ht, "python", "awesome");
 hash_table_set(ht, "Bob", "and Kris love asm");
 hash_table_set(ht, "N", "queens");
 hash_table_set(ht, "Asterix", "Obelix");
 hash_table_set(ht, "Betty", "Cool");
 hash_table_set(ht, "98", "Battery Street");
 hash_table_print(ht);
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
julien@ubuntu:~/Hash tables$ ./f
{}
{'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'}
julien@ubuntu:~/Hash tables$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>5-hash_table_print.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20232" data-position="7">
<div>
<div>
<h3>6. &gt;&gt;&gt; del ht</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that deletes a hash table.</p>
<ul>
<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>
<ul>
<li>where <code>ht</code> is the hash table</li>
</ul>
</li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 6-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 hash_table_t *ht;
 char *key;
 char *value;
 ht = hash_table_create(1024);
 hash_table_set(ht, "c", "fun");
 hash_table_set(ht, "python", "awesome");
 hash_table_set(ht, "Bob", "and Kris love asm");
 hash_table_set(ht, "N", "queens");
 hash_table_set(ht, "Asterix", "Obelix");
 hash_table_set(ht, "Betty", "Cool");
 hash_table_set(ht, "98", "Battery Streetz");
 key = strdup("Tim");
 value = strdup("Britton");
 hash_table_set(ht, key, value);
 key[0] = '\0';
 value[0] = '\0';
 free(key);
 free(value);
 hash_table_set(ht, "98", "Battery Street");
 hash_table_set(ht, "hetairas", "Bob");
 hash_table_set(ht, "hetairas", "Bob Z");
 hash_table_set(ht, "mentioner", "Bob");
 hash_table_set(ht, "hetairas", "Bob Z Chu");
 hash_table_print(ht);
 hash_table_delete(ht);
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
julien@ubuntu:~/Hash tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621==
{'Betty': 'Cool', 'mentioner': 'Bob', 'hetairas': 'Bob Z Chu', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621==
==6621== HEAP SUMMARY:
==6621== in use at exit: 0 bytes in 0 blocks
==6621== total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621==
==6621== All heap blocks were freed -- no leaks are possible
==6621==
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Hash tables$
</code></pre>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>6-hash_table_delete.c</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20231" data-position="8">
<div>
<div>
<h3>7. $ht['Betty'] = 'Cool'</h3>
<div>#advanced</div>
</div>
<div>
<p>In <a title="PHP" href="https://intranet.hbtn.io/rltoken/G3Ywkd7tb-_Faa05l7k91A" target="_blank" rel="noopener">PHP</a>, hash tables are <strong>ordered</strong>. Wait&hellip; WAT? How is this even possible?</p>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230705%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230705T074009Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=089ef74da089d38ea3596e4409e2750b37f88d703f8ee8b7174ad5083e80273e" alt="" /> </p>
<p><strong>Before you continue</strong>, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?</p>
<p>For this task, please:</p>
<ul>
<li>Read <a title="PHP Internals Book: HashTable" href="https://intranet.hbtn.io/rltoken/ALaLfnkJWOYix80r8sJ2rw" target="_blank" rel="noopener">PHP Internals Book: HashTable</a></li>
<li>Use the same hash function</li>
<li>Use these data structures:</li>
</ul>
<pre><code>/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
 char *key;
 char *value;
 struct shash_node_s *next;
 struct shash_node_s *sprev;
 struct shash_node_s *snext;
} shash_node_t;
/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
 unsigned long int size;
 shash_node_t **array;
 shash_node_t *shead;
 shash_node_t *stail;
} shash_table_t;
</code></pre>
<p>Rewrite the previous functions using these data structures:</p>
<ul>
<li><code>shash_table_t *shash_table_create(unsigned long int size);</code></li>
<li><code>int shash_table_set(shash_table_t *ht, const char *key, const char *value);</code>
<ul>
<li>The key/value pair should be inserted in the sorted list at the right place</li>
<li>Note that here we do not want to do exactly like <code>PHP</code>: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.</li>
</ul>
</li>
<li><code>char *shash_table_get(const shash_table_t *ht, const char *key);</code></li>
<li><code>void shash_table_print(const shash_table_t *ht);</code>
<ul>
<li>Should print the hash table using the sorted linked list</li>
</ul>
</li>
<li><code>void shash_table_print_rev(const shash_table_t *ht);</code>
<ul>
<li>Should print the hash tables key/value pairs in reverse order using the sorted linked list</li>
</ul>
</li>
<li><code>void shash_table_delete(shash_table_t *ht);</code></li>
<li>You are allowed to have more than 5 functions in your file</li>
</ul>
<pre><code>julien@ubuntu:~/Hash tables$ cat 100-main.c
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include "hash_tables.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
 shash_table_t *ht;
 ht = shash_table_create(1024);
 shash_table_set(ht, "y", "0");
 shash_table_print(ht);
 shash_table_set(ht, "j", "1");
 shash_table_print(ht);
 shash_table_set(ht, "c", "2");
 shash_table_print(ht);
 shash_table_set(ht, "b", "3");
 shash_table_print(ht);
 shash_table_set(ht, "z", "4");
 shash_table_print(ht);
 shash_table_set(ht, "n", "5");
 shash_table_print(ht);
 shash_table_set(ht, "a", "6");
 shash_table_print(ht);
 shash_table_set(ht, "m", "7");
 shash_table_print(ht);
 shash_table_print_rev(ht);
 shash_table_delete(ht);
 return (EXIT_SUCCESS);
}
julien@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht
julien@ubuntu:~/Hash tables$ ./sht
{'y': '0'}
{'j': '1', 'y': '0'}
{'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
{'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
julien@ubuntu:~/Hash tables$
</code></pre>
<p><br /><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/253/php.png" width="50%" /></p>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
<li>Directory: <code>hash_tables</code></li>
<li>File: <code>100-sorted_hash_table.c</code></li>
</ul>
</div>
</div>
</div>
</div>