//
// Created by Professional on 15.10.2021.
//

#include "IEEE.h"

const string &IEEE::getConferenceName() const {
    return conferenceName;
}

void IEEE::setConferenceName(const string &conferenceName) {
    IEEE::conferenceName = conferenceName;
}

const string &IEEE::getConferenceLocation() const {
    return conferenceLocation;
}

void IEEE::setConferenceLocation(const string &conferenceLocation) {
    IEEE::conferenceLocation = conferenceLocation;
}

const set<string> &IEEE::getTopicsOfPresentations() const {
    return topicsOfPresentations;
}

void IEEE::setTopicsOfPresentations(const set<string> &topicsOfPresentations) {
    IEEE::topicsOfPresentations = topicsOfPresentations;
}
