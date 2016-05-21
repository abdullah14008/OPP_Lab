#include<iostream>
using namespace std;

class band{
		protected:
		char band_name[20];
		int count;
		virtual int getcount()=0;
};

class metalband:protected band{
	public:
		int members;
		int pyrotechnisians;
		metalband(int pyro,int member);
		void addmember();
		void removemember();
		void addpyro();
		void removepyro();
		int getcount();
		int getpyro();
		int getmembers();
};

int metalband::getpyro()
{
	return this->pyrotechnisians;
}
int metalband::getmembers()
{
	return this->members;
}
int metalband::getcount()
{
	return this->count;
}

void metalband::addmember()
{
	this->members++;
	this->count++;
}
void metalband::removemember()
{
	this->members--;
	this->count--;
}
void metalband::addpyro()
{
	this->pyrotechnisians++;
	this->count++;
}
void metalband::removepyro()
{
	this->pyrotechnisians--;
	this->count--;
}
metalband::metalband(int pyro,int member)
{
	this->count=pyro+member;
	this->pyrotechnisians=pyro;
	this->members=member;
}



class symphony: protected band{
	public:
		int members;
		int conductor;
		symphony(int cond,int member);
		void addmember();
		void removemember();
		void addpyro();
		void removepyro();
		int getcount();
		int getpyro();
		int getmembers();

};

int symphony::getpyro()
{
	return this->conductor;
}
int symphony::getmembers()
{
	return this->members;
}
int symphony::getcount()
{
	return this->count;
}

void symphony::addmember()
{
	this->members++;
	this->count++;
}
void symphony::removemember()
{
	this->members--;
	this->count--;
}
void symphony::addpyro()
{
	this->conductor++;
	this->count++;
}
void symphony::removepyro()
{
	this->conductor--;
	this->count--;
}
symphony::symphony(int cond,int member)
{
	this->count=cond+member;
	this->conductor=cond;
	this->members=member;
}

class march: protected band{
	public:
		void addmember();
		void removemember();
		int getmembers();
};
int march::getmembers()
{
	return this->count;
}
void march::addmember()
{
	this->count++;
}
void march::removemember()
{
	this->count--;
}

class jazz: protected band{
	public:
		void addmember();
		void removemember();
		int getmembers();
};
int jazz::getmembers()
{
	return this->count;
}
void jazz::addmember()
{
	this->count++;
}
void jazz::removemember()
{
	this->count--;
}
int main(void)
{
	class metalband m(2,4);
	cout<<"\nThis Class has pyrotechnision : "<<m.pyrotechnisians<<" and members "<<m.members;
	m.addpyro();
	m.addmember();
	cout<<"\nNow this Class has pyrotechnision : "<<m.pyrotechnisians<<" and members "<<m.members;

	class symphony s(5,2);
	cout<<"\nThis Class has conductor : "<<s.conductor<<" and members "<<s.members;
	m.addpyro();
	m.addmember();
	cout<<"\nNow this Class has conductor : "<<s.conductor<<" and members "<<s.members;

}
