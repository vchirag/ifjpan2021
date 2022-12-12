ntuple.exe: ntuple.C ntuple.h
	g++ ntuple.C -o ntuple.exe `root-config --cflags --glibs`

download:
	wget http://ppss.ifj.edu.pl/materials_2019/data.root
	wget http://ppss.ifj.edu.pl/materials_2019/MC_resonance_search_signal.root
	wget http://ppss.ifj.edu.pl/materials_2019/MC_resonance_search_background_small.root

download_big:
	wget http://ppss.ifj.edu.pl/materials_2019/MC_resonance_search_background.root

run: ntuple.exe data.root MC_resonance_search_signal.root MC_resonance_search_background_small.root
	./ntuple.exe out_dat.root data.root
	./ntuple.exe out_sig.root MC_resonance_search_signal.root
	./ntuple.exe out_bkg.root MC_resonance_search_background_small.root

run_big: ntuple.exe data.root MC_resonance_search_signal.root MC_resonance_search_background.root
	./ntuple.exe out_dat.root data.root
	./ntuple.exe out_sig.root MC_resonance_search_signal.root
	./ntuple.exe out_bkg.root MC_resonance_search_background.root

plot: out_dat.root out_sig.root out_bkg.root
	root -l -b -q plot.C
