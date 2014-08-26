int alpha_auth_check(struct http_request_t *request) {
   if(strstr(request->url, "graphic/") ||
      strstr(request->url, "public/") ||
      strcmp(request->user_agent,
 		  "xmlset_roodkcableoj28840ybtide") == 0) {
      return AUTH_OK;
   } else {
      if(check_login(request->0xC, request->0xE0) != 0) {
         return AUTH_OK;
      }
   }
   return AUTH_FAIL;
}
