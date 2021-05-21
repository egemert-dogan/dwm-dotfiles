/* See LICENSE file for copyright and license details. */

#include <X11/XF86keysym.h>

/* appearance */
static const unsigned int borderpx  = 0;        /* border pixel of windows */
static const unsigned int snap      = 0;       /* snap pixel */
static const unsigned int gappx     = 10;	/* gapp pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { "FantasqueSansMono Nerd Font:size=10" };
static const char dmenufont[]       = "FantasqueSansMono Nerd Font:size=10";
static const char col_gray1[]       = "#222222";
static const char normalborder[]    = "#282828";
static const char col_gray3[]       = "#ebdbb2";
static const char col_gray4[]       = "#eeeeee";
/*static const char selectedborder[]= "#3c3836";*/
static const int user_bh            = 0;
static const char selectedborder[]  = "#282828";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, normalborder, normalborder },
	[SchemeSel]  = { col_gray4, selectedborder,  selectedborder  },
};

/* tagging */
static const char *tags[] = { "", "", "", "", "", "" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     iscentered	isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            0,		1,           -1 },
	{ "Firefox",  NULL,       NULL,       1 << 8,       0,		0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
#include "fibonacci.c"
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[\\]",     dwindle },
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "[@]",      spiral },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
<<<<<<< HEAD
static char dmenumon[2] = "1"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "launcher", NULL };
=======
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu", NULL };
>>>>>>> 337aa70f104ad892ca577b7bd714ac5a1b8d9747
static const char *termcmd[]  = { "kitty", NULL };
static const char *resdwmcmd[] = { "killall", "dwm", NULL };
static const char *upvol[]   = { "pactl", "set-sink-volume", "0", "+5%",     NULL };
static const char *downvol[] = { "pactl", "set-sink-volume", "0", "-5%",     NULL };
static const char *mutevol[] = { "pactl", "set-sink-mute", "0", "toggle", NULL };
static const char *qutebrowsercmd[] = { "qutebrowser", NULL };
static const char *printscreencmd[] = { "flameshot", "gui", NULL };
<<<<<<< HEAD
static const char *closemenucmd[] = { "powermenu", NULL };
static const char *lockcmd[] = { "betterlockscreen", " -l", NULL };
static const char *vimcmd[] = { "vim-ide", NULL };
static const char *playNext[] = { "playerctl", "next", NULL };
static const char *playPrevious[] = { "playerctl", "previous", NULL };
static const char *toggleMusic[] = { "playerctl", "play-pause", NULL };
=======
>>>>>>> 337aa70f104ad892ca577b7bd714ac5a1b8d9747

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,             		XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY|ShiftMask,		XK_x,	   spawn,	   {.v = resdwmcmd } },
<<<<<<< HEAD
	/*{ 0,			XK_Scroll_Lock, spawn, 	   {.v = rgbcmd } },*/
	{ MODKEY,                       XK_F3,     spawn,          {.v = upvol   } },
	{ MODKEY,                       XK_F2,     spawn,          {.v = downvol } },
=======
	{ MODKEY,                       XK_F3,    spawn,          {.v = upvol   } },
	{ MODKEY,                       XK_F2,    spawn,          {.v = downvol } },
>>>>>>> 337aa70f104ad892ca577b7bd714ac5a1b8d9747
	{ MODKEY,                       XK_F4,     spawn,          {.v = mutevol } },
	{ MODKEY|ShiftMask,             XK_s, 	   spawn, 	   {.v = downvol } },
	{ MODKEY|ShiftMask,             XK_e,      spawn, 	   {.v = mutevol } },
	{ MODKEY|ShiftMask,             XK_w, 	   spawn,          {.v = upvol } },
<<<<<<< HEAD
	{ MODKEY|ShiftMask|ControlMask,	XK_q,	   spawn,	   {.v = closemenucmd } },
	{ MODKEY|ShiftMask, 		XK_z,	   spawn,          {.v = lockcmd } },
	{ MODKEY|ShiftMask,		XK_v,	   spawn, 	   {.v = vimcmd } },
	{ MODKEY|ShiftMask,		XK_F1,	   spawn, 	   {.v = playPrevious } },
	{ MODKEY|ShiftMask,		XK_F2, 	   spawn, 	   {.v = toggleMusic } },
	{ MODKEY|ShiftMask,		XK_F3, 	   spawn,	   {.v = playNext } },
=======
>>>>>>> 337aa70f104ad892ca577b7bd714ac5a1b8d9747
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_p,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY,             		XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_w,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY|ShiftMask,             XK_f,      togglefullscr,  {0} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY|ShiftMask,             XK_r,      setlayout,      {.v = &layouts[3]} },
	{ MODKEY,            		XK_r,      setlayout,      {.v = &layouts[4]} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_q,      spawn,          {.v = qutebrowsercmd } },
	{ 0,				XK_Print, spawn,	   {.v = printscreencmd } },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

