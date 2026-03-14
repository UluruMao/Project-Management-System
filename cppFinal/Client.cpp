
#include "Client.hpp"
#include <iostream>

using namespace std;

Client::Client() {}

Client::Client(const string& companyName, const string& industry, const string& contactPerson)
        : companyName(companyName), industry(industry), contactPerson(contactPerson) {}

void Client::setCompanyName(const string& name) { companyName = name; }
void Client::setIndustry(const string& industry) { this->industry = industry; }
void Client::setContactPerson(const string& contact) { contactPerson = contact; }

string Client::getCompanyName() const { return companyName; }
string Client::getIndustry() const { return industry; }
string Client::getContactPerson() const { return contactPerson; }

void Client::display() const {
    cout << "Client: " << companyName << " (" << industry << ")\n"
         << "  Contact: " << contactPerson << "\n";
}
