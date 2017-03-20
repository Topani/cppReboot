# cppReboot
Attempt to get back into C/C++ programming

Growing up I started programming with C/C++ language. Across the last decade I've only been a Java programmer. Recently I came across my old copy of Ivor Horton's Beginning C++. Now I'm starting this repo as I go through Ivor's textbook once more. :)

# Getting Started
## Install g++ compiler and make
I'm using Linux Mint for this project. When trying to install g++ compiler there were some errors. Found the following link that showed how to install g++. [http://superuser.com/questions/772954/install-gcc-g-version-4-9-in-linux-mint](http://superuser.com/questions/772954/install-gcc-g-version-4-9-in-linux-mint).
Here are the commands I used based on that link, but I did not use the `-4.9` portion:
```shell
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install g++
sudo apt-get install make
```
## How To Build
All example applications and code are contained within their own separate directories. Each directory contains a makefile used to build all code contained in the directory. In order to build and compile the code navigate to any directory containing a 'makefile' and run the 'make' command as such:
```shell
make
```
In order to use this command you must have the GNU make utility. I have Xubuntu and Linux Mint installed on 2 different systems and they both had GNU make already installed. Otherwise GNU make should be easily installed on an Ubuntu system. For more information on makefiles check out Mrbook's makefile tutorial at [http://mrbook.org/blog/tutorials/make/](http://mrbook.org/blog/tutorials/make/).
