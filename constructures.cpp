#include<iostream>
using namespace std;
class mobile
{
    public:
    int id,price,pieces;
    string type,brand,model,description;
    mobile(int identity,string typem,string brandm,string modelm,string descriptionm,int pricem,int piecesm)
    {
        id=identity;
        type=typem;
        brand=brandm;
        model=modelm;
        description=descriptionm;
        price=pricem;
        pieces=piecesm;
    }
};
int main()
{
    mobile obj(1,"Glass","Vivo","Y20","9d glass=true,blue=true",150,10);
    cout<<"Id : "<<obj.id<<endl<<"Type : "<<obj.type<<endl<<"Brand : "<<obj.brand<<endl<<"Description : "<<obj.description<<endl<<"Price : "<<obj.price<<endl<<"Pieces : "<<obj.pieces;
}