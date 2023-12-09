#ifndef __PROJECT_H___
#define __PROJECT_H___

#include <BlynkGOv3.h>

namespace GRAPHIC {
  void design();
}

namespace BasicOTA {
  void begin();
  void handle();
}

namespace WebServerOTA { 
  void begin(); 
  void handle();
}



#endif

