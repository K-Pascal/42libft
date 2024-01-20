# Introduction

C programming can be very tedious when one doesn’t have access to the highly useful standard functions.\
This project is about understanding the way these functions work, implementing and learning to use them.\
This library will be helpful since it will be used in next C school assignments.

# To build the library

Git clone the repository go to its directory then execute the command

```Makefile
make
```

# To include the library

First, include the libft.h in your source code
```c
#include "libft.h"
```
Then link your project with the library with those options
```shell
-L [Path to the libft] -l ft
```

### Note :

When you link, you have to first put your source code THEN put the options\
Exemple :
```
cc main.c -L . -l ft
```
