SRC = editor/src/main.cpp editor/src/textArea.cpp
CXX = g++
EDITOR = bin/editor.out
PKGSRC = pkg/src/main.cpp
PKG = bin/pkg.out

all: $(PKG) $(EDITOR)

$(EDITOR): $(SRC)
	$(CXX) $(SRC) -o $(EDITOR)

$(PKG): $(PKGSRC)
	$(CXX) $(PKGSRC) -o $(PKG)
