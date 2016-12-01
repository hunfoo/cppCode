#include <iostream>

using namespace std;

class CCSprite
{
public:
    CCSprite(int d)
    {
        data = d;

#if 0
        if(head == NULL)
        {
            this->next = NULL;
            head = this;
        }
        else
        {
            this->next = head;
            head = this;
        }

#endif
        this->next = head;
        head = this;
    }

    static void traverseCCSprite()
    {
        CCSprite * ph = head;
        while(ph != NULL)
        {
            cout<<ph->data<<endl;
            ph = ph->next;
        }
    }

private:
    int data;
    CCSprite * next;
    static CCSprite * head;
};

CCSprite * CCSprite::head = NULL;

int main()
{
    for(int i=100; i<106; i++)
        new CCSprite(i);

    CCSprite::traverseCCSprite();

    return 0;
}

