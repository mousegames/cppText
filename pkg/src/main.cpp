#include <iostream>
#include <string>

#include <cstdlib>

int main(int argc, char **argv)
{
  std::string confirmation;
  std::cout << "confirm: do you want to install " << argv[1] << " y/n";
  std::cin >> confirmation;

  if ((confirmation == "y") || (confirmation == "Y"))
  {
    std::string cmd = std::string("curl https://jstext.tech/pkgs/") + argv[1] + " -o $EDITOR/pkgs/" + argv[1];
    system(cmd.c_str());
  }
  return 0;
}
