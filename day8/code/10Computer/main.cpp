#include <iostream>

using namespace std;

class Cpu
{
public:
    virtual void run() = 0;
};

class Mem
{
public:
    virtual void run() = 0;
};

class Disk
{
public:
    virtual void run() = 0;
};


class IntelCpu:public Cpu
{
public:
    virtual void run()
    {
        cout<<"我是intel cpu 我16核，主频 3.0"<<endl;
    }
};

class KingStonMem:public Mem
{
public:
    virtual void run()
    {
        cout<<"我是KingSton  drr3 骇客神条  16g  1666"<<endl;
    }
};

class WdDisk:public Disk
{
public:
    virtual void run()
    {
        cout<<"我是西数硬盘 我是固态的，我有容  100T"<<endl;
    }
};

class Computer
{
public:
    Computer(Cpu * pc,Mem * pm,Disk *pd)
        :_pc(pc),_pm(pm),_pd(pd){}
    void work()
    {
        _pc->run();
        _pm->run();
        _pd->run();
    }

    ~Computer()
    {
        delete _pc;
        delete _pm;
        delete _pd;
    }

private:
    Cpu *_pc;
    Mem *_pm;
    Disk * _pd;
};


int main()
{
    Computer  c(new IntelCpu,new KingStonMem,new WdDisk);
    c.work();

    return 0;
}

