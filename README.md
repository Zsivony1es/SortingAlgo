# SortingAlgo
Visual representation of different sorting algorithms using SFML and C++


### Building the program:

1. Clone the repository to your computer using the shell command:
```
git clone https://github.com/Zsivony1es/SortingAlgo.git
```
2. In the folder `SortingAlgo/lib/` clone the SFML libraries with:
```
git clone https://github.com/SFML/SFML.git
```
3. You can build the project by running the shell script `run.sh` included in the base project folder.
This script by default tries to build the project for ARM64 architecture, so if your device is running a different
one, please change that in the file accordingly.

4. After building the project, an executable file can be found in `SortingAlgo/build/app/SortingAlgo`.

### Using the program:

In the current version of the program, you can try out the different functions by pressing the assigned keys.
Here are the key bindings:

+ S - Sort the columns using Selection Sort
+ B - Sort the columns using Bubble Sort
+ R - Reset the columns to their original position before sorting
+ M - Shuffle the order of columns

In the future, I am planning to give the program an UI instead of having keyboard bindings,
but for the first version I just wanted to test if the algorithms worked well enough.
