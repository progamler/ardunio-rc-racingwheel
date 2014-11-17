#if !defined(__HIDJOYSTICKRPTPARSER_H__)
#define __HIDJOYSTICKRPTPARSER_H__

#include <hid.h>

struct GamePadEventData {
        uint8_t X, Y, Z1, Z2, Rz, X2 ,X3, X4, X5 ;
};

        
class JoystickEvents {
public:
        virtual void OnGamePadChanged(const GamePadEventData *evt);

        uint16_t X1;
        uint8_t Y1;
        uint8_t Y2;

};

#define RPT_GEMEPAD_LEN		8

class JoystickReportParser : public HIDReportParser {
        JoystickEvents *joyEvents;

        uint8_t oldPad[RPT_GEMEPAD_LEN];
        uint8_t oldHat;
        uint16_t oldButtons;

public:
        JoystickReportParser(JoystickEvents *evt);

        virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};

#endif // __HIDJOYSTICKRPTPARSER_H__
