### Headers files
#### exemple: `#include <stdio.h>`

* **stdio.h** : input-output, types, macro
* **ctype.h** : symbols functions
* **string.h** : strings functions
* **math.h** : math functions
* **stdib.h** : helper functions for int conversion, memory alloc etc.
* **assert.h** : diagnostic functions
* **astarg.h** : arguments conversion
* **setjmp.h** : changing program flow, like *goto*
* **signal.h** : exeption handling
* **time.h** : date-time functions
* **limits.h** : sizing const for predef types
* **float.h** : floating const

### Typing
* __char__ : ASCII char (1 byte), only **single quotes**
* __int__ : integer (not predef)
 * __short__ : 32.768 (2 bytes)
 * __long__ : 2.147.483.467 (4 bytes)
 * __unsigned__ : can by only positive  65.535
* __float__ : 6 chars after coma (4 bytes)
* __double__ : 10 chars after coma (8 bytes)



### Constants
+ Const can't be changed
+ Must be initialized on declaration

`conts int MILLION = 1000000`

+ integer constants list: all vals will increase by 1 - `enum {SOME0, SOME1, SOME2}`

`enum SNOOKER {RED=1, YELLOW, GREEN, BROWN}`

Create var type BOOLEAN `enum BOOLEAN {FALSE, TRUE} flag`;


### String constants (macro)
+ must be in top of file
+ `#define` : define conts
+ `#ifdef` : check if conts defined
+ `#endif` : definition end
+ `#if`, `#else`, `#elif`, `#undef`, `#ifundef`

preproc constants -
``` c
#define conts name "text string"
```



### Custom Typing
Define shortcut for date type -
```c
typedef unsigned short int USINT
```



### Access modificators
Vars in functions local, outside are global for all funcs and files;

* __auto__: local var - assigned by default
* __extern__: accessing external var
* __static__: make global var accessible only in this file,
if defined inside function acts like clojure - saving value after function execution
* __register__: put var in register
* __volatile__: not put var in register :smile:



### Type conversion
Compiler perform auto-conversion;

clear conversion - `(int) some_float`



### Arrays
Arr declaration - `type name [elem count]`;

Arr initialization  - `type name {val0, val1, val2}`

Elem access - `name[index]`

String arr - `char str[4] = {'C', 'a', 't', '\0'}`

Arr name is a pointer to the 1st elem;



### Arithmetic Operators
+ `+`
+ `-`
+ `*`
+ `/`
+ `%` : partial division
+ `++` : prefix, and postfix
+ `--` : prefix, and postfix


### Assignation Operators
+ `=`
+ `+=`
+ `-=`
+ `*=`
+ `/=`
+ `%=`



### Comparison Operators
Return 1(true) or 0(false);
Chars compared by ASCII codes;
+ `==`
+ `!=`
+ `>`
+ `<`
+ `>=`
+ `<=`



### Logical Operators
+ `&&`
+ `||`
+ `!`
+ `(exp) ? (exp true) : (exp false)`


### Pointers
+ Pointer is a variable storing RAM cells addresses of other variable, size of pointer is based on pointer type.
+ Pointer can point on function;

```c
int i = 10;
//pointer int type
int *pt = &i;
// get pointer value(10)
int val = *pt
//get cell number
pt
```



### Structures
+ structures members can't be initialized on declaration
+ structure tag will be initialized as a var with structure type
```c
struct structName
{
  int x;
  int y;
} structTag;
```


### Strings
+ strings is an arrays with '\0' in last elem
+ string can be applied to any arr or char pointer - `char *pt = "some string"`

### Functions
`printf(format, var)`: printing a var to io;

format:

|spec|desc|
|-
|%d|int
|%ld|long int -2x31, +2x31
|%f|float
|%c|char
|%s|string
|%p|pointer

`scanf(format, var)` get a char from io, exiting when inputing a *space*;

`sizeof(var)` - get system size of var in bytes;

`gets(char *string)` - (deprecated) get a string from io;

`puts(string)` - input string to io, and add '/n'
