PROJ_NAME = internal2

FLAGS = -Wall

LIBS  = -Lsrc/lib 
LIBS += -lmingw32 
LIBS += -lSDL2main 
LIBS += -lSDL2

INCLUDE  = src/include
INCLUDE += src/include/imgui 
INCLUDE += src/include/SDL2

all:
	g++ $(FLAGS) -I $(INCLUDE) $(LIBS) src/include/imgui/*.cpp -o $(PROJ_NAME) imguitest.cpp src/*.cpp