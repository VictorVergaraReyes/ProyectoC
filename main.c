#include <stdio.h>
#include <curl/curl.h>

int main(void) {
	CURL *curl;
	CURLcode res;
	
	// Inicializar la biblioteca libcurl
	curl = curl_easy_init();
	if (curl) {
		// Establecer la URL de la API
		curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/todos/1");
		
		// Realizar la solicitud HTTP GET
		res = curl_easy_perform(curl);
		
		// Verificar si la solicitud se realizó con éxito
		if (res != CURLE_OK) {
			fprintf(stderr, "Error en la solicitud: %s\n", curl_easy_strerror(res));
		} else {
			// Aquí puedes procesar la respuesta de la API
		}
		
		// Finalizar la sesión de libcurl
		curl_easy_cleanup(curl);
	}
	
	return 0;
}

