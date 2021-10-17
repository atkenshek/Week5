#include "ACM.h"

const string &ACM::getTopicOfTheDay() const {
    return topicOfTheDay;
}

void ACM::setTopicOfTheDay(const string &topicOfTheDay) {
    ACM::topicOfTheDay = topicOfTheDay;
}

const map<string, string> &ACM::getLocation() const {
    return location;
}

void ACM::setLocation(const map<string, string> &location) {
    ACM::location = location;
}

int ACM::getNumberOfPresentations() const {
    return numberOfPresentations;
}

void ACM::setNumberOfPresentations(int numberOfPresentations) {
    ACM::numberOfPresentations = numberOfPresentations;
}
