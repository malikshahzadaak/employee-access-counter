#include <Wire.h>
// ... [The full code you provided goes here] ...
void resetAllHistory() {
  initDailyRecords();
  saveToStorage();
  updateDisplay("History Reset", "All data cleared");
  delay(1000);
}
