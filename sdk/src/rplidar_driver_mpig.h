
#pragma once

namespace rp { namespace standalone{ namespace rplidar {

class RPlidarDriverMpig : public RPlidarDriverSerialImpl
{
public:
		string fileName;
		string fileAddr;
		
		string renameFileName(const fileAddr = NULL);//�Ե�ǰʱ��+.dat�����ļ�����,����"2015420104403.dat
		bool saveScanData(const fileName = "000.dat"); //��fileName�ļ�����д�����ݡ�
}

}}}