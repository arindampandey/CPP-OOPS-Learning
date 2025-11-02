// Pure Virtual Function
#include <iostream>
using namespace std;
class MyChannel
{
protected:
    string title;
    float rating;

public:
    MyChannel(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do nothing function (Pure Virtual Function)
};

class MyVideo : public MyChannel
{
    float videoLength;

public:
    MyVideo(string s, float r, float vl) : MyChannel(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class MyText : public MyChannel
{
    int words;

public:
    MyText(string s, float r, int wc) : MyChannel(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for My Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    MyVideo djVideo(title, rating, vlen);

    // for My Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    MyText djText(title, rating, words);

    MyChannel *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
