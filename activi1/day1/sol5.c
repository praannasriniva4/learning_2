#include <stdio.h>
#include <string.h>
 typedef struct {
char sensor_id[3];
 float temperature;
 int humidity;
int light_intensity; 
} SensorInfo;
void parseData(const char* data, SensorInfo* sensor) {
char temp_str[10], hum_str[10], light_str[10];
int temp_val, hum_val, light_val;
sscanf(data, "%*[^S]S%s-T:%f-H:%d-L:%d", sensor->sensor_id, &sensor->temperature, &sensor->humidity,&sensor->light_intensity);
}
int main() {
char data[] = "S1-T:36.5-H:100-L:50"; SensorInfo sensor;
 
parseData(data, &sensor);
printf("Sensor Info:\n"); printf("	\n");
printf("Sensor ID: %s\n", sensor.sensor_id); printf("Temperature: %.1f C\n", sensor.temperature); printf("Humidity: %d\n", sensor.humidity);
printf("Light Intensity: %d%%\n", sensor.light_intensity); return 0;
}
