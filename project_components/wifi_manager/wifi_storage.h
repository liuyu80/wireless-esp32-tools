#ifndef WIFI_STORAGE_H_GUARD
#define WIFI_STORAGE_H_GUARD

#include <stdint-gcc.h>

typedef struct nvs_wifi_credential_t {
	char ssid[32];
	char password[64];
} wifi_credential_t;

int wifi_data_get_last_conn_cred(wifi_credential_t *ap_credential);

int wifi_save_ap_credential(wifi_credential_t *ap_credential);

#endif //WIFI_STORAGE_H_GUARD