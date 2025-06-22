# cppText

## cppText is a...
- text editor

## cppText has ...
- a pakage manager

## how to use
1. goto where you have the text editor and run `make` 
2. run installer.sh and follow the prompts CAREFULLY
3. use it

## how to make pkgs/extensions/plugins or whatever you want to call them
1. fork my repo titled pkgs and create a pull request
2. in the pull request you HAVE to have a folder named after your username, and as many files as you want, each file is a pkg
3. you can have as many pkgs as you want BUT only in your own folder
4. I will not accept pull requests from a folder that doesnt have your username because you may have malicious intent
5. see further in the license

## To use pkgs
1. edit the Makefile so that SRC looks like this `SRC = editor/src/main.cpp $EDITOR/pkgs/pkg.cpp`

2. run `make` agian

