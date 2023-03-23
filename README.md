# cli_arth
A project written in c++ for using arithmetic commands in your command line
# Installation
to install clone the repo & set your path environment variable to `<clone_dir>/bin` path
## Addition 
Using the command `add`
```ps
cmd > add <val1> <val2> ... <valN>
```
Example:
```ps
cmd > $v = 100
cmd > add @v 100
200
```
## Subtraction
Using the Command `sub`
```ps
cmd > sub <val1> <val2> ... <valN>
```
Example:
```ps
cmd > $v = 100
cmd > sub @v -100
200
```
## Ranging
Using the Command `range` or `trange`
### Range
```ps
cmd > range <from> <to> [step=1]
```
Example:
```
cmd > range 1 100 1
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
```
### Template Range
A range command which used to print something before every iteration number
```ps
cmd > trange <from> <to> <step> <template>
```
Example:
```ps
cmd > trange 1 100 1 r-
 r-1 r-2 r-3 r-4 r-5 r-6 r-7 r-8 r-9 r-10 r-11 r-12 r-13 r-14 r-15 r-16 r-17 r-18 r-19 r-20 r-21 r-22 r-23 r-24 r-25 r-26 r-27 r-28 r-29 r-30 r-31 r-32 r-33 r-34 r-35 r-36 r-37 r-38 r-39 r-40 r-41 r-42 r-43 r-44 r-45 r-46 r-47 r-48 r-49 r-50 r-51 r-52 r-53 r-54 r-55 r-56 r-57 r-58 r-59 r-60 r-61 r-62 r-63 r-64 r-65 r-66 r-67 r-68 r-69 r-70 r-71 r-72 r-73 r-74 r-75 r-76 r-77 r-78 r-79 r-80 r-81 r-82 r-83 r-84 r-85 r-86 r-87 r-88 r-89 r-90 r-91 r-92 r-93 r-94 r-95 r-96 r-97 r-98 r-99 r-100
```
## Convert to integer
Using Command `int`
It Converts Characters into ASCII value & integers into integers
```ps
cmd > int <string_of_characters>
```
Example:
```ps
cmd > int abc
a=>97
b=>98
c=>99

```
## Average
Using command `avg`
```ps
cmd > avg <val1> <val2> ... <valN>
```
Example:
```ps
cmd > avg 12 34 56 78
45
```
## Maximum & Minimum
Using Commands `maxof` or `minof`
```ps
cmd > [maxof/minof] <val1> <val2> ... <valN>
```
Example:
```ps
cmd > maxof 1 2 3 4 5 
5
cmd > minof 1 2 3 4 5
1
```

<p align="right">ShGI</p>