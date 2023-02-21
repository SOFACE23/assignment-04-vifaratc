#include "subject.hpp"

void Subject::attach(Observer *subscriber)
{
    subscribers.push_back(subscriber);
}
void Subject::detach(Observer *subscriber)
{
    subscribers.erase(std::find(subscribers.begin(),subscribers.end(),subscriber));
}

void Subject::notify(AnimalEvent event)
{
    for (auto i : subscribers) {
        i->update(event);
    }
}