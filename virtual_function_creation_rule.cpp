#include <iostream>
using namespace std;

class CWD
{
    protected:
        string title;
        float rating;

    public:
        CWD(string s, float r)
        {
            title = s;
            rating = r;
        }

        virtual void display() {}
};

class CWDVideo : public CWD
{
    float videoLength;

    public:
        CWDVideo(string s, float r, float vl) : CWD(s, r)
        {
            videoLength = vl;
        }

        void display()
        {
            cout <<endl<< "Title of this video: " << title << endl;
            cout << "Rating: " << rating << " out of 5 stars" << endl;
            cout << "Length of video: " << videoLength << " minutes" << endl;
        }
};

class CWDText : public CWD
{
    int wordCount;

    public:
        CWDText(string s, float r, int wc) : CWD(s, r)
        {
            wordCount = wc;
        }

        void display()
        {
            cout<<endl<<"For the text tutorial  "<<endl;
            cout << "Title of this text tutorial: " << title << endl;
            cout << "Rating: " << rating << " out of 5 stars" << endl;
            cout << "Word count: " << wordCount << " words" << endl;
        }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    cout << "Enter the title of the video tutorial: ";
    cin >> title;

    cout << "Enter the rating of the video tutorial: ";
    cin >> rating;

    cout << "Enter the video length of the video tutorial: ";
    cin >> vlen;

    CWDVideo video(title, rating, vlen);
   // video.display();

    //for CWD Text
    title = "sdda";
    words = 400;
    rating = 4.9;

   CWDText Text(title , rating ,words);
    //Text.display();

    CWD *tuts[2];
    tuts[0] = &video;
    tuts[1] = &Text;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


/*
    Rules for virtual function
    1. They cannot be static
    2. They are accessed by object pointers
    3. Virtual function can be a friend of another class
    4. A virtual function in base class might not be used,
    5. If a virtual function is defined in a base class , there is no necessity of redefining it in the derived class


*/
