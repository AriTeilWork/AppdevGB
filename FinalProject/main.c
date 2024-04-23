
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>
#include "appdev.h"

int main(void)
{
    CURL* curl;
    CURLcode res;
    char poststring[200];

    combo c = minmax();

    sprintf(poststring, "min=%d&max=%d", c.min, c.max);




   
/* http://www.cc.puv.fi/~e2301503/echo.php 1000/4 250/5  50/5 10/5  2/2 /1   */
/*http://www.cc.puv.fi/~e2301499/echo.php  1000/4 250/5  50/5 10/5  2             */
   
    curl = curl_easy_init();
    if (curl) {
       
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2301503/echo.php ");
       
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststring);

       
        res = curl_easy_perform(curl);
       
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

       
        curl_easy_cleanup(curl);
    }
    return 0;
}

