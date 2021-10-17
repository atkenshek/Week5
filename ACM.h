#ifndef WEEK5_ACM_H
#define WEEK5_ACM_H
#include "string"
#include "map"
using namespace std;
class ACM {
private:
    string topicOfTheDay;
    map<string,string> location;
    int numberOfPresentations;
public:
    const string &getTopicOfTheDay() const;

    void setTopicOfTheDay(const string &topicOfTheDay);

    const map<string, string> &getLocation() const;

    void setLocation(const map<string, string> &location);

    int getNumberOfPresentations() const;

    void setNumberOfPresentations(int numberOfPresentations);


};


#endif //WEEK5_ACM_H
