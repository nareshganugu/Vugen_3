Action()
	
{
	

//	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
//	web_add_header("Authorization", "Basic c2pvc2UzMDpwYXNz");
	
	
/****** Purposefully showing mock password for Varonis file Scan Testing ******/
	
	web_set_user("nganugu1", "1qazxsw2", "lpolwhppc001e6.gsm1900.org:1503");
	

/*	web_custom_request("web_custom_request",
		"URL=https://ppolwhppc001e7.gsm1900.org:1503/api/",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={Body}",
		LAST);
*/	

	web_custom_request("web_custom_request",
		"URL=https://lpolwhppc001e6.gsm1900.org:1503/api/",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=request={Body}",
		LAST);
		
		
		
		web_custom_request("web_custom_request",
		"URL=http://lpolwhppc001e6.gsm1900.org:1503/api/",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=request={Body}",
		LAST);
	
	
	return 0;
}
