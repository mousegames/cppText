#!/bin/bash

echo "name of text editor CMD:"
read editor

echo "name of pkg maneger:"
read pkg

echo "path to the text editor:"
read pkgs

echo "export EDITOR=$pkgs" >> ~/.bashrc
echo "alias $editor='$pkgs/bin/editor.out'" >> ~/.bashrc
echo "alias $pkg='$pkgs/bin/pkg.out'" >> ~/.bashrc

source ~/.bashrc
