#include <iostream>
#include "concrete_abstraction.hxx"
#include "concrete_hierarchy.hxx"

int main() {
    EMailSender mail;
    SMSSender sms;
    AlertNotification alert(&mail);
    alert.notify("Server Down");

    ReminderNotification sendSms(&sms);
    sendSms.notify("Meeting @11::00AM");
}