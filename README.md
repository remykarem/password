# Password

Show all possible passwords by permuting the shape of the letters of the input.

For example, `Sam`'s password can be written as `$am` or `5@m`.

Use this repo responsibly.

## Building

```bash
gcc -std=c99 -Wall -Werror -pedantic main.c -o showpasswords
```

## Usage

```bash
./showpasswords john
```

Output:

```txt
john
John
jOhn
JOhn
j0hn
J0hn
joHn
JoHn
jOHn
JOHn
j0Hn
J0Hn
jo4n
Jo4n
jO4n
JO4n
j04n
J04n
johN
JohN
jOhN
JOhN
j0hN
J0hN
joHN
JoHN
jOHN
JOHN
j0HN
J0HN
jo4N
Jo4N
jO4N
JO4N
j04N
J04N
Total no. of permutations: 36
```
