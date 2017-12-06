#include <gtk/gtk.h>
#include <cairo.h>

#include <gtk/gtk.h>
#include <cv.h>
#include <highgui.h>


#define MAXFFBUFFER 1000
typedef struct {
  int count;
  double x[MAXFFBUFFER];
  double y[MAXFFBUFFER];
} free_form;

#ifdef _MAIN_C_



	GtkBuilder *builderG; // precisa para a aula10
	double xoffG= 100;
	double yoffG= 150;
	free_form ffG={0};   //init count to zero. Do not affect x and y.
	double fontSizeFactor = 20;
	GtkBuilder *builderG;
        IplImage *dst_imageG , *src_imageG;
        CvCapture *captureG;


#else
	extern GtkBuilder *builderG;
	extern double xoffG;
	extern double yoffG;
	extern free_form ffG;
	extern double fontSizeFactor;
	extern GtkBuilder *builderG;
        extern IplImage *dst_imageG , *src_imageG;
        extern CvCapture *captureG;

#endif

#include "prototypes.h"	
