# Carlos A. Perez-Guzman
## 09/12/2023
## VIP NYU PROCESSOR DESIGN
## Lab: 1

cmake version 3.27.4

Valid Targets: all (the default if no target is provided), clean, depend, edit_cache, rebuild_cache, hello_world, hello.o, hello.i, hello.s

hello.o: the compiler translates the source code file into an object file
hello.i: stores the output of preprocessing the c++ source file
hello.s: produces the assembly language code

all: the first valid target
clean: removes the object files

* target_resources and target_include_directories are relative to the folder that the CMakeLists.txt that they're in exists in: the Lab_1 folder

* Cmake is a meta-build system meaning it produces build systems - which create executable programs - such as ninja.

* Since running cmake generates multiple files, allocating a directory just for cmake allows the source code folder to stay organized and readable.
