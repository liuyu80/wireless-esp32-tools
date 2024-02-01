#ifndef WIFI_API_JSON_H_GUARD
#define WIFI_API_JSON_H_GUARD

typedef enum wifi_api_json_cmd_t {
	UNKNOWN = 0,
	WIFI_API_JSON_GET_AP_INFO,
	WIFI_API_JSON_CONNECT,
	WIFI_API_JSON_GET_SCAN,

} wifi_api_json_cmd_t;

#endif //WIFI_API_JSON_H_GUARD