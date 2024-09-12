#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Read images
    ifstream image;
    ofstream newimage;

    image.open("apollo.ppm");
    newimage.open("newimage01.ppm");

    // Copy over Header Information
    string type, width, height, RGB;

    image >> type;
    image >> width;
    image >> height;
    image >> RGB;

    // Copy Header to new Images
    newimage << type << endl;
    newimage << width << " " << height<<endl;

    newimage << RGB<< endl;

    int red, green, blue;
    red = green = blue =0;

    while(!image.eof()){
        image >> red;
        image >> green;
        image >> blue;

        newimage << red << " " << green << " "<<blue << " \n";

    }
    return 0;
}