#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include <cstdlib>

#include "textArea.hpp"

std::vector<std::string> split(std::string str)
{
  std::vector<std::string> lines;
  std::string line;

  for (char ch : str)
  {
    if (ch == '\n')
    {
      lines.push_back(line);
      line.clear();
    } else
    {
      line += ch;
    }
  }

  return lines;
}

int main(int argc, char **argv)
{
  std::ifstream inFile(argv[1]);
  std::string lines;
  std::stringstream buf;
  buf << inFile.rdbuf();
  lines = buf.str();
  inFile.close();

  TextArea text;
  text.text = split(lines);

  char ch;

  std::cout  << "CTRL N for navigation mode" << std::endl << "CTRL E for edit mode" << std::endl << "Navigation Mode:\nCTRL E goes to edit mode\nN creates a new line\nW A S D navigate\nB deletes\nT goes to top of file" << std::endl;

   
  while ((ch = getchar()) != EOF)
  {
    system("clear");
    text.print();

    if (ch == 14)
    {
      while ((ch = getchar()) != 5)
      {
        system("clear");
        text.print();
        text.navigate(ch);
        std::cout << "line:" << text.line << " " << "pos:" << text.pos << std::endl;
      }
    } else
    {
      text.edit(ch);
    }
    std::cout << "line:" << text.line << " " << "pos:" << text.pos << std::endl;
  }

  std::ofstream outFile(argv[1]);

  for (std::string &line : text.text)
  {
    outFile << line << '\n';
  }
  outFile.close();

  return 0;
}

