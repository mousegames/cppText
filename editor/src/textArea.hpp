#ifndef TEXT_AREA
#define TEXT_AREA

class TextArea
{
public:
  unsigned int line, pos = 0;
  std::vector<std::string> text;

  void navigate(char movement);
  void edit(char ch);
  void print();
};
#endif
