/* ตัวอย่าง OTA ให้กำหนดเลือกบอร์ดที่ platformio.ini */
/* ดูคำอธิบาย วิธี upload ทาง USB และ ทาง OTA ใน platformio.ini */


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
  BasicOTA::handle();           // OTA แบบ Basic
  // WebServerOTA::handle();    // OTA แบบ WebServer
}

WIFI_CONNECTED(){
  BasicOTA::begin();            // OTA แบบ Basic
  //  WebServerOTA::begin();    // OTA แบบ WebServer
}

