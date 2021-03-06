#ifndef SCREEN_HELP_H
#define SCREEN_HELP_H

#include "comm.h"
#include "canvas.h"

void  exit_with_usage (char *, char *, char *);
void  display_help (char *, struct action *);
void  display_copyright (void);
void  display_displays (void);
void  display_bindkey (char *, struct action *);
int   InWList (void);
void  WListUpdatecv (Canvas *, Window *);
void  WListLinkChanged (void);
void  ZmodemPage (void);

/* global variables */

extern char version[];

#endif /* SCREEN_HELP_H */
