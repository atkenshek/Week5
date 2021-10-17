#ifndef WEEK5_IEEE_H
#define WEEK5_IEEE_H
#include "bits/stdc++.h"
using namespace std;


class IEEE {
private:
    string conferenceName;
    string conferenceLocation;
    set <string> topicsOfPresentations;
public:
    const string &getConferenceName() const;

    void setConferenceName(const string &conferenceName);

    const string &getConferenceLocation() const;

    void setConferenceLocation(const string &conferenceLocation);

    const set<string> &getTopicsOfPresentations() const;

    void setTopicsOfPresentations(const set<string> &topicsOfPresentations);

};


#endif //WEEK5_IEEE_H
