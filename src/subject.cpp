#include "subject.hpp"


//Push_Back is used to add dynamically to vector.
void Subject::attach(Observer *subscriber)
{
    subscribers.push_back(subscriber);
}

//erase function removes element at index of vector. The index is found using the find function. Works because because pointers are unique.
void Subject::detach(Observer *subscriber)
{
    subscribers.erase(std::find(subscribers.begin(),subscribers.end(),subscriber));
}

//Calls function for all subscribed members (All elements in subscribers vector)
void Subject::notify(AnimalEvent event)
{
    for (auto i : subscribers) {
        i->update(event);
    }
}