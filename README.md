# Password

Show all possible passwords by permuting the each of the input letter.

For example, `Sam`'s password can be written as `$am` or `5@m`.

Use this repo responsibly.

## Setting up

Make sure you have [make](https://www.gnu.org/software/make/) installed first.
Once make is installed pull this repository and `cd` into it.

- To build the project: `make`
- To clean the project: `make clean`

Take note that the [Makefile](Makefile) will need to be modified if you are not using Windows.


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
