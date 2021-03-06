#pragma once

#include <QObject>

#include "robomongo/core/EventBusDispatcher.h"

namespace Robomongo
{
    class EventBusSubscriber
    {
    public:
        explicit EventBusSubscriber(EventBusDispatcher *dispatcher, QObject *receiver, QObject *sender = NULL) :
            receiver(receiver),
            dispatcher(dispatcher),
            sender(sender) {}

        EventBusDispatcher *dispatcher;
        QObject *receiver;
        QObject *sender;
    };
}
