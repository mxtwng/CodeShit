# learningCPP

##This project/repo is for mxtw to learn and document their C++ studying journey, from 26/07/26, this is now for every language not just C++

Instruction on how to make new function: <br>
    1. Make .h with #pragma once + functionName();  <br>
    2. Make .cpp, include the .h previously created, write function <br>
    3. Go to tasks.json in project folder, in args: add "path/to/your/newCPPfile.cpp" (local, i.e. no need for ~/ or @/) <br>
    4. build/run main.cpp <br>
<hr>

Here is your complete Git cheat sheet, compressed into one single reference block for fast viewing:

GIT CHEAT SHEET
===================================================================================================
1. CORE WORKFLOW:   git pull                             (Download team's latest code)
                    git status                           (Check which files you edited)
                    git add .                            (Stage all your file changes)
                    git commit -m "your description"     (Save local snapshot)
                    git push                             (Upload changes to GitHub)

2. BRANCHES:        git checkout -b feature/my-code      (Create & jump to a new branch)
                    git push -u origin feature/my-code   (Upload new branch to GitHub)
                    git checkout main                    (Switch back to main branch)

3. EMERGENCY FIXES: git restore file.py                  (Discard edits on a file since last commit)
                    git restore --staged file.py         (Unstage a file added with 'git add')
                    git reset --soft HEAD~1              (Undo last commit, KEEP your file edits)
                    git reset --hard HEAD                (Nuke ALL uncommitted local changes)
                    Exit Vim screen: Type  :q!  + Enter  (Escape stuck editor screen in terminal)
===================================================================================================

.md methods
# HEADINGS
===================================================================
# Heading Level 1
## Heading Level 2
### Heading Level 3
#### Heading Level 4


# TEXT STYLING
===================================================================
*Italic Text*          or  _Italic Text_
**Bold Text**          or  __Bold Text__
***Bold & Italic***    or  ___Bold & Italic___
~~Strikethrough~~
`Inline code`          (monospaced font for variables or commands)


# LISTS & TASKS
===================================================================
* Bullet item 1
* Bullet item 2
  * Sub-bullet item
  * Another sub-bullet

1. First numbered item
2. Second numbered item
3. Third numbered item

- [x] Completed task item
- [ ] Uncompleted task item


# LINKS & IMAGES
===================================================================
[Clickable Link Text](https://github.com)
![Image Alt Text](https://via.placeholder.com/150)


# BLOCKQUOTES & SEPARATORS
===================================================================
> This is a blockquote callout.
> It can span multiple lines.

---
(The three dashes above create a horizontal dividing line)


# CODE BLOCKS
===================================================================
```cpp
// Fenced code block with syntax highlighting
#include <iostream>

int main() {
    std::cout << "Hello World!\n";
    return 0;
}

===================================================================================================

Mainly follows the progression of Algorithm book (python).<br>
Chapter 1: Algorithm.<br>
Chapter 2: Searching and Sorting algorithms, Brute force. <br>
Chapter 3: Recursion. <br>
Chapter 4: Divide and conquer. <br>
Chapter 5: Greedy. <br>
Chapter 6: Dynamic programming. <br>
Chapter 7: Basic data structures, Tree. <br>
Chapter 8: Graph's algorithms. <br>
Chapter 9: Brute force + Backtracking.

!!This also includes studying from USACO and VNOI roadmap (reminder to checkout codedream)
!!bro we can code together on ide.usaco.guide
!!exercises: hackerank, leetcode, codeforces, cses,...
!!TryHackMe, GeeksforGeeks

Log:
1. Monday, May 12nd 2025: Created repo/project, finished Chapter 1.

2. Monday, May 19th 2025: Added some more sort algorithms, to be continue.

3. Tuesday, May 20th 2025: Finished merge, quick, heap, shell sort, learned a little bit more about cross-file usage of function + added alot of graph methods files

4. Wednesday, May 21st 2025: finished allPairs(floydWarshall & johnson) & weighted (dijkstra & bellmanFord)

5. Thursday, May 22nd 2025: finished MST(prim and kruskal), shortestPath. starting on solving problems

6. Friday, May 30th 2025: added some .vscode configuration files, did some usaco basic stuff on onlinegdb

7. Monday, June 2nd 2025 (early morning):
    - to compile, build and run: g++ name.cpp -o name && ./name
    - to input and output for a program: ./name < inp.txt > out.txt
        #include <freopen>
        freopen("input.txt", "r", stdin); (or problem.inp, problem.out)
        freopen("output.txt", "w", stdout);
    - checkout fastestINOUT.
    - instead of using cout to debug, use cerr instead (output in error stream instead of standard output stream -> online judge wont care) ! use too much = tle
    - #define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl; (use for debug)
    - https://gist.github.com/SansPapyrus683/61b65d4d7ec223b48ebf5c3bb382ba8d (debug data structure)
    - cin.tie(NULL); ios::sync_with_stdio(0);
    - using ll = long long <=> #define ll long long
    - using str = std::string (this is creating alias)
    - namespace (like iosbase::, etc..) is similar to a class/struct; inline namespace <=> free access without using name::
    - lambda func: [captureList](parameters) -> trailingReturnType {functionBody}
    - []: no capture, [&]: capture everything by reference, [=]: capture everything by copy
    - Finished USACO general! (left some practiced note for rechecking)

8. Monday, June 2nd 2025 (evening): 
    - std::fill_n(arr, 25, 0) or std::fill(arr, arr+25, 0) instead of memset(arr, 0, sizeof arr) because memset treats the value that is passed to it an unsigned char; so for 32BitsInt arr: memset(, 1,) -> set each BYTE to 1 -> each spot is now some hexadecimal shit; memset(, -1,) -> set each BYTE to 0xFF -> same
    - use contexpr to decrease compile time, reducing runtime computations (e.g: contexpr )
    - keyword: static
        + function: the space for the var is allocated ONCE throughout the PROGRAM's lifetime
        + Static data member in a class: similar to function + the var created can be used by ALL objects in the class (shared), there cannot be multiple copies of the same static vars for different objects, static cant be used in constructors.
        + Static member functions in a class: they are allowed to access only the static data members or other static member functions
        + global: vars that are ONLY accessible in the FILE it is defined in
    - vectors: to find buffer overflow, use .at() instead of vector::operator[], it raises an error, easy debugging
    - still vectors: 2 version of the same for loop iteration: 
        + (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        + (auto it = begin(v); it != end(v); it = next(it))
    - std::string: std::cin breaks on a whitespace || operator>> ignore leading whitespace -> use std::getline()
        std::getline(std::cin >> std::ws, str);

9. Sunday, July 26th 2026 (night)
    - New language: Python
    OK back to Cpp (well this is like a bit of work to kick start my brain again)
    `cout << "\033[F";  // Move cursor UP 1 line`
    `cout << "\033[2K"; // CLEAR entire current line`