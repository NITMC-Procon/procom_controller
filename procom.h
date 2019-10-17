// C:\Users\Haru\eclipse-workspace\procom_controller\procom.h


char ReportDescriptor[29] = {
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x04,                    // USAGE (Joystick)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x09, 0x01,                    //   USAGE (Pointer)
    0xa1, 0x00,                    //   COLLECTION (Physical)
    0x15, 0x81,                    //     LOGICAL_MINIMUM (-127)
    0x26, 0x80, 0x00,              //     LOGICAL_MAXIMUM (128)
    0x75, 0x08,                    //     REPORT_SIZE (8)
    0x95, 0x03,                    //     REPORT_COUNT (3)
    0x09, 0x30,                    //     USAGE (X)
    0x09, 0x31,                    //     USAGE (Y)
    0x09, 0x32,                    //     USAGE (Z)
    0x81, 0x02,                    //     INPUT (Data,Var,Abs)
    0xc0,                          //     END_COLLECTION
    0xc0                           // END_COLLECTION
};

