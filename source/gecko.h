

#ifndef _GECKO_H_
#define _GECKO_H_

#ifdef __cplusplus
extern "C" {
#endif

void gcprintf(const char *fmt, ...);

#define NO_DEBUG

#ifndef NO_DEBUG
	//use this just like printf();
	void gprintf(const char *fmt, ...);
	bool InitGecko();
#else
	#define gprintf(...)
	#define InitGecko()      false
#endif /* NO_DEBUG */



#ifdef __cplusplus
}
#endif

#endif

