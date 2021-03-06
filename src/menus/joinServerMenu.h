#ifndef JOIN_SERVER_MENU_H
#define JOIN_SERVER_MENU_H

#include "gui/gui2.h"

class JoinServerScreen : public GuiCanvas, public Updatable
{
    sf::IpAddress ip;
    GuiLabel* status_label;
    GuiPanel* password_entry_box;
    GuiTextEntry* password_entry;
public:
    JoinServerScreen(sf::IpAddress ip);

    virtual void update(float delta);
};

#endif//JOIN_SERVER_MENU_H
