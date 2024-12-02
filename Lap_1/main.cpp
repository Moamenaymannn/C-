/*#include <iostream>
using namespace std;

class Complex{ 
    int real;
    int img;
    public:

    void setReal(int realdata){ 
        real = realdata;
    }
    int getReal(){ 
        return real;
    }
    void setImg(int imgdata){ 
        img = imgdata;
    }
    int getImg(){ 
        return img;
    }

    void display(){ 
        if(real == 0){ 
            if (img != 0){ 
                cout<<img<<"j"<<endl;
            }else{ 
                cout<<"no data"<<endl;
            }
        }else{ 
            if(img > 0){ 
                cout<<real<<"+"<<img<<"j"<<endl;
            }else if (img == 0){ 
                cout<<real<<endl;
            }else{ 
                cout<<real<<img<<endl;
            }
        }
    }



};

int main(){
    Complex c;
    c.setReal(10);
    c.setImg(20);
      c.display();

    c.setReal(-10);
    c.setImg(20);
      c.display();

    c.setReal(0);
    c.setImg(20);
       c.display();

    c.setReal(0);
    c.setImg(0);
       c.display();

    c.setReal(10);
    c.setImg(0);
       c.display();

    c.setReal(10);
    c.setImg(-10);
      c.display();
}*/



/*#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    // Constructor with default values
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // Setters
    void setReal(int r) { real = r; }
    void setImg(int i) { img = i; }

    // Getters
    int getReal() const { return real; }
    int getImg() const { return img; }

    // Display method
    void display() const {
        if (real == 0 && img == 0) {
            cout << "no data";
        } else if (real == 0) {
            cout << img << "j";
        } else if (img == 0) {
            cout << real;
        } else {
            cout << real << (img > 0 ? " + " : " - ") << (img > 0 ? img : -img) << "j";
        }
        cout << endl;
    }

    // Overload << operator
    friend ostream &operator<<(ostream &out, const Complex &c) {
        if (c.real == 0 && c.img == 0) {
            out << "no data";
        } else if (c.real == 0) {
            out << c.img << "j";
        } else if (c.img == 0) {
            out << c.real;
        } else {
            out << c.real << (c.img > 0 ? " + " : " - ") << (c.img > 0 ? c.img : -c.img) << "j";
        }
        return out;
    }
};

int main() {
    // Initializing complex numbers using the constructor
    Complex c1(10, 20);
    Complex c2(-10, 20);
    Complex c3(0, 20);
    Complex c4(0, 0);
    Complex c5(10, 0);
    Complex c6(10, -10);

    // Displaying results using both display() and operator<<
    c1.display();
    cout << c2 << endl;
    c3.display();
    cout << c4 << endl;
    c5.display();
    cout << c6 << endl;

    return 0;
}*/


#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    
    void setReal(int realdata) { real = realdata; }
    void setImg(int imgdata) { img = imgdata; }

    
    int getReal() const { return real; }
    int getImg() const { return img; }

    
    void display() const {
        if (real == 0 && img == 0) {
            cout << "no data" << endl;
        } else if (real == 0) {
            cout << img << "j" << endl;
        } else if (img == 0) {
            cout << real << endl;
        } else {
            cout << real << (img > 0 ? "+" : "") << img << "j" << endl;
        }
    }
};

int main() {
    
    Complex c1(10, 20), c2(-10, 20), c3(0, 20), c4(0, 0), c5(10, 0), c6(10, -10);

    
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    return 0;
}

