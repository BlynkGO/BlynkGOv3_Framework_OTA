#include "project.h"

GWiFiManager wifi_manager;
GLabel       label;

// ออกแบบกราฟิก
void GRAPHIC::design(){
  wifi_manager.align(ALIGN_TOP_RIGHT,-10);

#if UPLOAD_USB==1
  label = "ทดสอบ Upload ทางสาย USB";  // รอบแรก เลือกอัพโหลดแบบ USB โดยเลือก Port แบบ Serial ports ที่เสียบ ข้อความจะแสดงบรรทัดนี้
#else
  label = "ทดสอบ Upload ทาง OTA";     // รอบถัดๆไปให้สลับมา อัพโหลดแบบ OTA โดยเลือก Port แบบ Network ports (IP Address)  ข้อความจะแสดงบรรทัดนี้
#endif

}

