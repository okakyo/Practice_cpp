class SlamLauncher{
private:
	int startN;
	int deawSkip;
	bool odometryOnly;

	Pose2D lidaeOffset;

	SensorDataReader sreader;
	PointCloudMap *pcamp;
	MapDrawer mdrawer;
	Frameworkcustmizer fcustom;

public:
	SlamLauncher() :startN(0),drawskip(10), odometryOnly(false),pcmap(nullptr){}

	~SlamLauncher(){}

	void  setStartN(int n){startN=n;}
	void setOdometryOnly(bool p){odometryOnly=p;}

};

void SlamLauncher::run(){
	mdrawer.initGunplot();
	mdrawer.setAspectRatio(-0.9);

	size_t cnt=0;
	if(startN>0) skipData(startN);

	Scan2D scan;

	bool eof=sreader.loadScan(cnt,scan);
	while (!eof){
		if(odomtryOnly) mapByOdometry(&scan);
		else efront.process(scan);
			if(cnt%drawSkip==0) mdrawer.drawMapGp(*pcamp);
		++cnt;
		eof=sreader.loadScan(cnt,scan);
	}
	sreader.closeScanFile();

	while (true){
		Sleep(1000);
	}
}

void SlamLauncher::skipData(int num){
	Scan2D scan;

	bool eof=sreader.loadScan(0,scan);

}
