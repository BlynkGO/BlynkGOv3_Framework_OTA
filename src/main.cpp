/* ตัวอย่าง OTA ให้กำหนดเลือกบอร์ดที่ platformio.ini */

#include <BlynkGOv3.h>
#include "project.h"

void setup() {
  Serial.begin(9600); Serial.println();
  BlynkGO.begin();

  // ออกแบบ กราฟิกตามต้องการ
  GRAPHIC::design();
}

void loop() {
  BlynkGO.update();
  BasicOTA::handle();
  // WebServerOTA::handle();
}

WIFI_CONNECTED(){
  BasicOTA::begin(); 
  //  WebServerOTA::begin();
}
