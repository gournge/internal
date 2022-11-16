PROJ_NAME = internal2

MAIN = main.cpp # imguitest.cpp

FLAGS = -Wall

LIBS  = -Lsrc/lib 
LIBS += -lmingw32 
LIBS += -lSDL2main 
LIBS += -lSDL2
LIBS += -lopengl32

INCLUDE  = -Isrc
INCLUDE += -Isrc/include
INCLUDE += -Isrc/include/imgui
INCLUDE += -Isrc/include/SDL2

all:
	g++ $(FLAGS) $(INCLUDE) src/include/imgui/*.cpp -o $(PROJ_NAME) $(MAIN) src/*.cpp $(LIBS)