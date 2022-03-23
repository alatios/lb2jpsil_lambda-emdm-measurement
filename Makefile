link: AngularDistribution.o G__AngularDistribution.o
	g++ -shared `root-config --libs` -lRooFit -lRooFitCore `root-config --cflags` AngularDistribution.o G__AngularDistribution.o -o libAngularDistribution.so

AngularDistribution.o: AngularDistribution.cxx
	g++ `root-config --cflags` -fPIC -c AngularDistribution.cxx -o AngularDistribution.o

G__AngularDistribution.o: G__AngularDistribution.cxx
	g++ `root-config --cflags` -fPIC -c G__AngularDistribution.cxx -o G__AngularDistribution.o

G__AngularDistribution.cxx: AngularDistribution.h AngularDistribution_LinkDef.h
	rootcling -v2 -f G__AngularDistribution.cxx -rmf G__AngularDistribution.rootmap AngularDistribution.h AngularDistribution_LinkDef.h