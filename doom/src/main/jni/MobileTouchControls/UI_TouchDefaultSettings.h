
#include "UI_Controls.h"
#include "TouchControlsContainer.h"

#ifndef _UI_TouchDefaultSettings_H_
#define _UI_TouchDefaultSettings_H_

namespace touchcontrols
{

    typedef struct
    {
        float alpha;
        float lookSensitivity;
        float moveSensitivity;

        bool  invertLook;

        bool showLoadSave;
        bool showJoysticks;

    } tTouchSettings;


    UI_Controls *createDefaultSettingsUI( TouchControlsContainer *con, std::string settingsFile );
    sigc::signal<void, tTouchSettings> *getSettingsSignal();

}

#endif