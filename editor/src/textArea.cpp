#include <iostream>
#include <vector>
#include <string>

#include "textArea.hpp"

void TextArea::navigate(char movement)
{
  switch (movement)
  {
    case 'w':
      line--;
      break;
    case 's':
      line++;
      break;
    case 'a':
      pos--;
      break;
    case 'd':
      pos++;
      break;
    case 'n':
      text.push_back(" ");
      break;
    case 'b':
      text.erase(text.begin() + line);
      break;
    case 't':
      line = 0;
      pos = 0;
      break;
    default:
      std::cout << "In Navigation mode you must type, W A S D B N T or CTRL E" << std::endl;
      break;
  }
}

void TextArea::edit(char ch)
{
  if (ch != '\n')
  {
    text[line].insert(pos, 1, ch);
    pos++;
  }
}

void TextArea::print()
{
  for (std::string &str : text)
  {
    std::cout << str << "\n";
  }
}

