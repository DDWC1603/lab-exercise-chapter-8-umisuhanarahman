#include<iostream>
using namespace std;

class Log
{
public:
	enum level (Error=0, Warning=1, Info=2);

private:
	int m_LogLevel=Info;

public:
	void SetLevel(int level)
	{
		m_LogLevel=level;
	}
	void Error(const char* message)
	{
		if(m_LogLevel>=Error)
			cout<<"[ERROR]: "<<message <<endl;
			
	}
	void Warn(const char* message)
	{
		if(m_LogLevel>=Warning)
			cout<<"[WARNING]: "<<message <<endl;
	}
	void Info(const char* message)
	{
		if(m_LogLevel>=Info)
			cout<<"[INFO]: "<<message <<endl;
	}
	
};

int main()

{
Log oLog;
oLog.Warning;
oLog.Warn("HELLO!!!");
	
std::cin.get();
	
}
