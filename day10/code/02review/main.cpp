#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>  vi;
    vi.reserve(100);
    for(int i=0; i<100; i++)
    {
        vi.push_back(i);
        cout<<"size: "<<vi.size()<<'\t'<<"capcity: "<<vi.capacity()<<endl;
    }
    vi.push_back(101);
    cout<<"size: "<<vi.size()<<'\t'<<"capcity: "<<vi.capacity()<<endl;



    return 0;
}

