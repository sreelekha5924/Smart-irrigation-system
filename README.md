Smart Irrigation System

Automatic irrigation system using Arduino and Soil Moisture Sensor. Motor turns ON when soil is dry and OFF when soil is wet. Saves water, electricity and time for farmers.

Problem
Farmers waste a lot of water because they turn ON the motor manually and forget to turn OFF. Sometimes they give more water, sometimes less water, so crops get damaged.

Solution
This system checks soil moisture automatically and controls motor.

Components Used
- Arduino UNO
- Soil Moisture Sensor
- Relay Module
- Water Pump Motor
- Jumper Wires, Breadboard, Power Supply

Working
Input - Soil Moisture Sensor gives value. Example 800 means Dry, 300 means Wet.
Processing - Arduino checks value. Threshold is 700. If value is greater than 700, soil is Dry. If value is less than 700, soil is Wet.
Output - If Dry, Relay ON, Motor ON. If Wet, Relay OFF, Motor OFF.

Advantages
- Saves Water
- Saves Electricity
- Saves Time for Farmer
- Gives Correct Water to Crops
- Farmer does not need to stay in field
- Low Cost System

Future Scope
In future, add WiFi module and mobile app, so farmer can see soil moisture and control motor from mobile from anywhere. Also add temperature sensor and rain sensor.
