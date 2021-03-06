#include <iostream>
#include "link.h"
#include "passage.h"
using namespace std;

Link::Link(string inputText)
{
    type = "link";
    //remove outside brackets
    inputText = inputText.substr(2, inputText.length()-4);
    int d1 = inputText.find("-&gt;");

    //check if link has different display name
    if (d1 == -1)
    {
        display = inputText;
        target = inputText;
    }
    else 
    {
        display = inputText.substr(0, d1);
        target = inputText.substr(d1+5);
    }
}

void Link::print()
{
    cout << "Link: display=" << display << ", target=" << target << endl;
}

//adds link to passage and prints the display name
string Link::play(Story* storyRef, Passage* passageRef)
{
    passageRef->addLinkPointer(this);
    cout << display;
    return "";
}
