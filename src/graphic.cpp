#include "project.h"

GWiFiManager wifi_manager;
GLabel       label;

// ออกแบบกราฟิก
void GRAPHIC::design(){
  wifi_manager.align(ALIGN_TOP_RIGHT,-10);

#if UPLOAD_USB==1
  label = "ทดสอบ Upload ทางสาย USB";  // รอบแรกให้ใช้บรรทัดนี้ และเลือก Port แบบ Serail ports ที่เสียบ
#else
  label = "ทดสอบ Upload ทาง OTA";   // รอบถัดๆไปให้สลับมาใช้บรรทัดนี้ แล้ว Upload แบบ OTA ด้วยการเลือก Port แบบ Network ports
#endif

}

