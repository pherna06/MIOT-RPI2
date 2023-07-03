#include <stdio.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <esp_log.h>

const static char *TAG = "idle";

void app_main(void)
{
    ESP_LOGI(TAG, "Hello World!");

    // Sleep indefinitely
    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}