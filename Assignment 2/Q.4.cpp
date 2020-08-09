#include<iostream>
using namespace std;
class rectangle
{
    float width,length;
public:
    rectangle()
    {
        width=1;
        length=1;

    }
    int getwidth()
    {
        return width;
    }
    void setwidth()
    {
        repeat:
            cout<<"Enter width ";
            cin>>width;
            if(width<=0||width>20)
            {
                cout<<"Invalid input width can't be greater 20 and less than 0.\n"<<endl;
                goto repeat;
            }
    }
    int getlength()
    {
        return length;
    }
    void setlength()
    {
        repeat:
            cout<<"Enter length ";
            cin>>length;
            if(length<=0||length>20)
            {
                cout<<"Invalid input length can't be greater 20 and less than 0.\n"<<endl;
                goto repeat;
            }
    }
    void area()
    {
        float area=width*length;
        cout<<"Area of rectangle is "<<area<<endl;

    }
    void perimeter()
    {
        float perimeter=2*(length+width);

    cout<<"Perimeter of rectangle is "<<perimeter<<endl;
    }
};
main()
{
    repeat:
        rectangle rec;
        rec.setwidth();
        rec.setlength();
        rec.area();
        rec.perimeter();

}