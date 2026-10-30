#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantityInStock;
public:
    Product();
    void setProduct(string nm, double prc, int qty);
    string getProducts();
    double getPrices();
    int getQuantity();
};

Product::Product()
{
    productName = "";
    price = 0.0;
    quantityInStock =0;


}




void Product::setProduct(string nm, double prc, int qty)
{


    if (nm != " ")
        productName = nm;
    else
        productName = "XXXXXX";

         price = prc;
    quantityInStock = qty;


}

string Product::getProducts()
{
    return productName;
}

double Product::getPrices()
{
    return price;
}

int Product::getQuantity()
{
    return quantityInStock;
}

int main()
{

    Product ps;
    ps.setProduct("Bread", 1.5, 10);


    cout<<"Product:"<<ps.getProducts()<<endl;
    cout<<"Price:"<<ps.getPrices()<<endl;
    cout<<"Quantity:"<<ps.getQuantity()<<endl;


    _getch();
    return 0;


}


