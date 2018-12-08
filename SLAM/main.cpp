#include<cstdio>

using namespace std

int main(int argc, char *argv[]){
	
	bool scanCheck=true;
	bool odometryOnly=false;
	char *filename;
	int startN=0;

	if(argc<2){
		printf("Error! too few arguments.\n");
		return 0;
	}

	int  idx=1;
	if(argv[1][0]=='-'){
		for (int i=1;;i++){
			char option=argv[1][1];
			switch (option){
				case s:
					scanCheck=true;
				case o:
					odometryOnly=true:
				case NULL:
					break;
			}
		}

	if(argc==2){
		printf("Error: no file name.\n");
		return 1;
		}
		++idx;
	}

	if(argc>=idx+1) filename=argv[idx];
	
	if(argc>=idx+2) startN=atoi(argv[idx+1]);
	
	else if(argc>=idx+2){
		printf("Error: no file name.\n");
		return 1;
	}

	SlamLauncher s1;

	bool flag=s1.setFilename(filename);

	if(!flag) return 1;

	s1.setStartN(startN);

	if(scanCheck) s1.showScans;
	else{
		s1.setOdometryOnly;
		s1.customizeFranmework();
		s1.run();
	}

return 0;
}
