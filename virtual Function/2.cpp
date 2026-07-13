#include <iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating=r;
        }
        virtual void display(){ // if we donot write virtual it will gives back material in this dislay
            cout << "Hi \n";
        }  
};

class CWHVIDEO:public CWH{
    float videoLength;
    public:
        CWHVIDEO(string s,float r,float vl):CWH(s,r){
            videoLength=vl;
        }
    void display(){
        cout << "This is amazing video with title " << title  << "\n";
        cout << "rating " << rating  << " out of 5\n";
        cout << "The length of this video is  " << videoLength  << " minutes.\n";
    }
};

class CWHTEXT:public CWH{
    int word;
    public:
        CWHTEXT(string s,float r,int wc):CWH(s,r){
            word=wc;
        }
    void display(){
        cout << "This is amazing video with title " << title  << "\n";
        cout << "rating " << rating  << " out of 5\n";
        cout << "The size of this video is  " << word  << " words.\n";
    }
};

int main()
{
    string title;
    float rating,vlen;
    int words;

    title="Djanjo Video";
    rating=4.8;
    vlen=6.7;
    // for Video
    CWHVIDEO djVideo(title,rating,vlen);
    // djVideo.display();

    // for text
    
    title="Djanjo Video";
    rating=4.8;
    words=150;
    CWHTEXT djText(title,rating,words);
    // djText.display();

    CWH* tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;
    tuts[0]->display();
    tuts[1]->display();


   return 0;

}

/*
Rueles for Virtual Function
==>They cannot be static
==>they can be accessed using object pointer
==>Virtual function can be friend of an another class
==>a function in base class can might not be used
==>If a virtual is defined in the base class there is no necessity of redefining it in the derived class 
*/