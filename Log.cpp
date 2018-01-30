//umi suhana bt abdul rahman
//a17dw2041

#include<iostream>
using namespace std;

class Log
{
public:
	enum level {error=0, warning=1, info=2};
	
private:
	int m_LogLevel=info;
	
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	
	void Error(const char* message)
	{
		if(m_LogLevel>=error)
		cout<<"[ERROR]"<<message<<endl;
	}
	
	void Warn(const char* message)
	{
		if(m_LogLevel>=warning)
		cout<<"[WARNING]"<<message<<endl;
	}
	
	void Info(const char* message)
	{
		if(m_LogLevel>=info)
		cout<<"[INFO]"<<message<<endl;
	}
};

int main ()
{
	
	Log oLog;
	oLog.warning;
	oLog.Warn("Hello!!");
	
	std::cin.get();
	
}
