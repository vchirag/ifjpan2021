defaultclass.exe: defaultclass.C defaultclass.h
	g++ defaultclass.C -o defaultclass.exe `root-config --cflags --glibs`

run: defaultclass.exe mc_big.root
	./defaultclass.exe mc_big.root

plot: out.root
	root -l -b -q plot.C