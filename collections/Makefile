CXX ?= g++
CXXFLAGS ?= -std=c++20 -O2 -Wall -Wextra

.PHONY: all clean

all: alien-breed/launcher alien-breed-1/launcher banjo-kazooie/launcher geometry-wars/launcher sega/launcher

alien-breed/launcher: collection_launcher.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

alien-breed-1/launcher: collection_launcher.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

banjo-kazooie/launcher: collection_launcher.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

geometry-wars/launcher: collection_launcher.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

sega/launcher: collection_launcher.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f alien-breed/launcher alien-breed-1/launcher banjo-kazooie/launcher geometry-wars/launcher sega/launcher
