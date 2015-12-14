#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20050813

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "aidl_language_y.y"
#include "aidl_language.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yyerror(char* errstr);
int yylex(void);
extern int yylineno;

static int count_brackets(const char*);

#line 34 "aidl_language_y.cpp"
#define IMPORT 257
#define PACKAGE 258
#define IDENTIFIER 259
#define GENERIC 260
#define ARRAY 261
#define PARCELABLE 262
#define INTERFACE 263
#define FLATTENABLE 264
#define RPC 265
#define IN 266
#define OUT 267
#define INOUT 268
#define ONEWAY 269
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    2,    2,    2,    3,    4,    4,    1,    1,
    1,    5,    5,    6,    6,    6,    6,    6,    6,    8,
    8,    8,    9,    9,    7,    7,    7,   10,   10,   10,
   11,   11,   13,   13,   13,   13,   14,   12,   12,   12,
   15,   15,   15,   15,
};
short yylen[] = {                                         2,
    1,    2,    1,    1,    2,    1,    1,    2,    0,    2,
    2,    1,    1,    3,    2,    3,    3,    2,    3,    1,
    2,    1,    1,    1,    5,    5,    3,    0,    2,    3,
    6,    7,    0,    1,    3,    1,    3,    1,    2,    1,
    0,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    6,    0,    0,    9,    0,    4,    8,   11,    0,
    0,    0,    0,    0,   10,   12,   13,    0,    0,    0,
    5,    0,    0,   15,    0,    0,   18,   21,    0,    0,
   16,   14,   19,   17,   28,   28,   27,    0,    0,    0,
    0,   40,    0,   25,   29,    0,   26,   30,   39,    0,
    0,    0,    0,    0,   36,   42,   43,   44,    0,   34,
    0,    0,    0,    0,    0,    0,   31,   35,   37,   32,
};
short yydgoto[] = {                                       3,
    4,    5,    6,    7,   15,   16,   17,   18,   19,   38,
   45,   46,   59,   60,   61,
};
short yysindex[] = {                                   -231,
 -243,    0,    0, -247,    0, -243,    0,    0,    0,  -57,
    0,  -55,    0, -218,    0,    0,    0, -225, -212, -247,
    0,  -13,  -12,    0,  -11,  -10,    0,    0,  -73, -113,
    0,    0,    0,    0,    0,    0,    0, -120, -118,   -8,
 -209,    0, -219,    0,    0, -206,    0,    0,    0, -205,
   15,   16, -237, -237,    0,    0,    0,    0,  -21,    0,
 -219,  -16,   -2, -229, -201,    2,    0,    0,    0,    0,
};
short yyrindex[] = {                                      1,
   11,    0,    0,   59,    0,   21,    0,    0,    0,    0,
 -224,    0, -223,    0,    0,    0,    0,    0,    0,   60,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -197,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -41,  -41,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -217,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   58,    0,    0,    7,    0,    0,    0,    0,    0,   28,
    0,  -37,   12,    3,    0,
};
#define YYTABLESIZE 290
short yytable[] = {                                      33,
    9,   24,   33,   27,   44,   50,   47,    8,    9,   36,
    7,   37,   21,    1,   10,   11,   12,   13,   55,   63,
    3,   14,   64,   65,   66,    1,    2,   64,   56,   57,
   58,   23,   24,   29,   20,   22,   56,   57,   58,   41,
   42,   41,   41,   30,   28,   31,   32,   33,   34,   35,
   48,   49,   51,   52,   53,   54,   67,   69,    1,    2,
   70,   38,   20,   39,    0,   62,   68,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   40,    0,   40,   41,   42,
   41,   42,    0,    0,    0,    0,    0,    0,   43,    0,
   43,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   22,    0,
   25,   23,    0,   26,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   41,   41,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    9,    0,    0,    0,
    0,    0,    9,    9,    9,    9,    7,    0,    0,    9,
    0,    0,    7,    7,    7,    7,    3,    0,    0,    7,
    0,    0,    3,    3,    3,    3,    0,    0,    0,    3,
};
short yycheck[] = {                                      41,
    0,   59,   44,   59,  125,   43,  125,    1,  256,  123,
    0,  125,    6,  257,  262,  263,  264,  265,  256,   41,
    0,  269,   44,   61,   41,  257,  258,   44,  266,  267,
  268,  256,  256,  259,  259,  259,  266,  267,  268,  259,
  260,  259,  260,  256,  263,   59,   59,   59,   59,  123,
   59,  261,  259,  259,   40,   40,   59,  259,    0,    0,
   59,  259,    5,   36,   -1,   54,   64,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  256,   -1,  256,  259,  260,
  259,  260,   -1,   -1,   -1,   -1,   -1,   -1,  269,   -1,
  269,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  256,   -1,
  256,  259,   -1,  259,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  259,  260,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,   -1,   -1,   -1,
   -1,   -1,  262,  263,  264,  265,  256,   -1,   -1,  269,
   -1,   -1,  262,  263,  264,  265,  256,   -1,   -1,  269,
   -1,   -1,  262,  263,  264,  265,   -1,   -1,   -1,  269,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 269
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IMPORT",
"PACKAGE","IDENTIFIER","GENERIC","ARRAY","PARCELABLE","INTERFACE","FLATTENABLE",
"RPC","IN","OUT","INOUT","ONEWAY",
};
char *yyrule[] = {
"$accept : document",
"document : document_items",
"document : headers document_items",
"headers : package",
"headers : imports",
"headers : package imports",
"package : PACKAGE",
"imports : IMPORT",
"imports : IMPORT imports",
"document_items :",
"document_items : document_items declaration",
"document_items : document_items error",
"declaration : parcelable_decl",
"declaration : interface_decl",
"parcelable_decl : PARCELABLE IDENTIFIER ';'",
"parcelable_decl : PARCELABLE ';'",
"parcelable_decl : PARCELABLE error ';'",
"parcelable_decl : FLATTENABLE IDENTIFIER ';'",
"parcelable_decl : FLATTENABLE ';'",
"parcelable_decl : FLATTENABLE error ';'",
"interface_header : INTERFACE",
"interface_header : ONEWAY INTERFACE",
"interface_header : RPC",
"interface_keywords : INTERFACE",
"interface_keywords : RPC",
"interface_decl : interface_header IDENTIFIER '{' interface_items '}'",
"interface_decl : interface_keywords error '{' interface_items '}'",
"interface_decl : interface_keywords error '}'",
"interface_items :",
"interface_items : interface_items method_decl",
"interface_items : interface_items error ';'",
"method_decl : type IDENTIFIER '(' arg_list ')' ';'",
"method_decl : ONEWAY type IDENTIFIER '(' arg_list ')' ';'",
"arg_list :",
"arg_list : arg",
"arg_list : arg_list ',' arg",
"arg_list : error",
"arg : direction type IDENTIFIER",
"type : IDENTIFIER",
"type : IDENTIFIER ARRAY",
"type : GENERIC",
"direction :",
"direction : IN",
"direction : OUT",
"direction : INOUT",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 301 "aidl_language_y.y"

#include <ctype.h>
#include <stdio.h>

int g_error = 0;

int yyerror(char* errstr)
{
    fprintf(stderr, "%s:%d: %s\n", g_currentFilename, yylineno, errstr);
    g_error = 1;
    return 1;
}

void init_buffer_type(buffer_type* buf, int lineno)
{
    buf->lineno = lineno;
    buf->token = 0;
    buf->data = NULL;
    buf->extra = NULL;
}

static int count_brackets(const char* s)
{
    int n=0;
    while (*s) {
        if (*s == '[') n++;
        s++;
    }
    return n;
}
#line 293 "aidl_language_y.cpp"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 31 "aidl_language_y.y"
{ g_callbacks->document(yyvsp[0].document_item); }
break;
case 2:
#line 32 "aidl_language_y.y"
{ g_callbacks->document(yyvsp[0].document_item); }
break;
case 3:
#line 36 "aidl_language_y.y"
{ }
break;
case 4:
#line 37 "aidl_language_y.y"
{ }
break;
case 5:
#line 38 "aidl_language_y.y"
{ }
break;
case 6:
#line 42 "aidl_language_y.y"
{ }
break;
case 7:
#line 46 "aidl_language_y.y"
{ g_callbacks->import(&(yyvsp[0].buffer)); }
break;
case 8:
#line 47 "aidl_language_y.y"
{ g_callbacks->import(&(yyvsp[-1].buffer)); }
break;
case 9:
#line 51 "aidl_language_y.y"
{ yyval.document_item = NULL; }
break;
case 10:
#line 52 "aidl_language_y.y"
{
                                                    if (yyvsp[0].document_item == NULL) {
                                                        /* error cases only*/
                                                        yyval = yyvsp[-1];
                                                    } else {
                                                        document_item_type* p = yyvsp[-1].document_item;
                                                        while (p && p->next) {
                                                            p=p->next;
                                                        }
                                                        if (p) {
                                                            p->next = (document_item_type*)yyvsp[0].document_item;
                                                            yyval = yyvsp[-1];
                                                        } else {
                                                            yyval.document_item = (document_item_type*)yyvsp[0].document_item;
                                                        }
                                                    }
                                                }
break;
case 11:
#line 69 "aidl_language_y.y"
{
                                                    fprintf(stderr, "%s:%d: syntax error don't know what to do with \"%s\"\n", g_currentFilename,
                                                            yyvsp[0].buffer.lineno, yyvsp[0].buffer.data);
                                                    yyval = yyvsp[-1];
                                                }
break;
case 12:
#line 77 "aidl_language_y.y"
{ yyval.document_item = (document_item_type*)yyvsp[0].user_data; }
break;
case 13:
#line 78 "aidl_language_y.y"
{ yyval.document_item = (document_item_type*)yyvsp[0].interface_item; }
break;
case 14:
#line 82 "aidl_language_y.y"
{
                                                        user_data_type* b = (user_data_type*)malloc(sizeof(user_data_type));
                                                        b->document_item.item_type = USER_DATA_TYPE;
                                                        b->document_item.next = NULL;
                                                        b->keyword_token = yyvsp[-2].buffer;
                                                        b->name = yyvsp[-1].buffer;
                                                        b->package = g_currentPackage ? strdup(g_currentPackage) : NULL;
                                                        b->semicolon_token = yyvsp[0].buffer;
                                                        b->flattening_methods = PARCELABLE_DATA;
                                                        yyval.user_data = b;
                                                    }
break;
case 15:
#line 93 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d syntax error in parcelable declaration. Expected type name.\n",
                                                                     g_currentFilename, yyvsp[-1].buffer.lineno);
                                                        yyval.user_data = NULL;
                                                    }
break;
case 16:
#line 98 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d syntax error in parcelable declaration. Expected type name, saw \"%s\".\n",
                                                                     g_currentFilename, yyvsp[-1].buffer.lineno, yyvsp[-1].buffer.data);
                                                        yyval.user_data = NULL;
                                                    }
break;
case 17:
#line 103 "aidl_language_y.y"
{
                                                        user_data_type* b = (user_data_type*)malloc(sizeof(user_data_type));
                                                        b->document_item.item_type = USER_DATA_TYPE;
                                                        b->document_item.next = NULL;
                                                        b->keyword_token = yyvsp[-2].buffer;
                                                        b->name = yyvsp[-1].buffer;
                                                        b->package = g_currentPackage ? strdup(g_currentPackage) : NULL;
                                                        b->semicolon_token = yyvsp[0].buffer;
                                                        b->flattening_methods = PARCELABLE_DATA | RPC_DATA;
                                                        yyval.user_data = b;
                                                    }
break;
case 18:
#line 114 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d syntax error in flattenable declaration. Expected type name.\n",
                                                                     g_currentFilename, yyvsp[-1].buffer.lineno);
                                                        yyval.user_data = NULL;
                                                    }
break;
case 19:
#line 119 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d syntax error in flattenable declaration. Expected type name, saw \"%s\".\n",
                                                                     g_currentFilename, yyvsp[-1].buffer.lineno, yyvsp[-1].buffer.data);
                                                        yyval.user_data = NULL;
                                                    }
break;
case 20:
#line 128 "aidl_language_y.y"
{
                                                        interface_type* c = (interface_type*)malloc(sizeof(interface_type));
                                                        c->document_item.item_type = INTERFACE_TYPE_BINDER;
                                                        c->document_item.next = NULL;
                                                        c->interface_token = yyvsp[0].buffer;
                                                        c->oneway = false;
                                                        memset(&c->oneway_token, 0, sizeof(buffer_type));
                                                        c->comments_token = &c->interface_token;
                                                        yyval.interface_obj = c;
                                                   }
break;
case 21:
#line 138 "aidl_language_y.y"
{
                                                        interface_type* c = (interface_type*)malloc(sizeof(interface_type));
                                                        c->document_item.item_type = INTERFACE_TYPE_BINDER;
                                                        c->document_item.next = NULL;
                                                        c->interface_token = yyvsp[0].buffer;
                                                        c->oneway = true;
                                                        c->oneway_token = yyvsp[-1].buffer;
                                                        c->comments_token = &c->oneway_token;
                                                        yyval.interface_obj = c;
                                                   }
break;
case 22:
#line 148 "aidl_language_y.y"
{
                                                        interface_type* c = (interface_type*)malloc(sizeof(interface_type));
                                                        c->document_item.item_type = INTERFACE_TYPE_RPC;
                                                        c->document_item.next = NULL;
                                                        c->interface_token = yyvsp[0].buffer;
                                                        c->oneway = false;
                                                        memset(&c->oneway_token, 0, sizeof(buffer_type));
                                                        c->comments_token = &c->interface_token;
                                                        yyval.interface_obj = c;
                                                   }
break;
case 25:
#line 166 "aidl_language_y.y"
{ 
                                                        interface_type* c = yyvsp[-4].interface_obj;
                                                        c->name = yyvsp[-3].buffer;
                                                        c->package = g_currentPackage ? strdup(g_currentPackage) : NULL;
                                                        c->open_brace_token = yyvsp[-2].buffer;
                                                        c->interface_items = yyvsp[-1].interface_item;
                                                        c->close_brace_token = yyvsp[0].buffer;
                                                        yyval.interface_obj = c;
                                                    }
break;
case 26:
#line 175 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d: syntax error in interface declaration.  Expected type name, saw \"%s\"\n",
                                                                    g_currentFilename, yyvsp[-3].buffer.lineno, yyvsp[-3].buffer.data);
                                                        yyval.document_item = NULL;
                                                    }
break;
case 27:
#line 180 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d: syntax error in interface declaration.  Expected type name, saw \"%s\"\n",
                                                                    g_currentFilename, yyvsp[-1].buffer.lineno, yyvsp[-1].buffer.data);
                                                        yyval.document_item = NULL;
                                                    }
break;
case 28:
#line 189 "aidl_language_y.y"
{ yyval.interface_item = NULL; }
break;
case 29:
#line 190 "aidl_language_y.y"
{
                                                        interface_item_type* p=yyvsp[-1].interface_item;
                                                        while (p && p->next) {
                                                            p=p->next;
                                                        }
                                                        if (p) {
                                                            p->next = (interface_item_type*)yyvsp[0].method;
                                                            yyval = yyvsp[-1];
                                                        } else {
                                                            yyval.interface_item = (interface_item_type*)yyvsp[0].method;
                                                        }
                                                    }
break;
case 30:
#line 202 "aidl_language_y.y"
{
                                                        fprintf(stderr, "%s:%d: syntax error before ';' (expected method declaration)\n",
                                                                    g_currentFilename, yyvsp[0].buffer.lineno);
                                                        yyval = yyvsp[-2];
                                                    }
break;
case 31:
#line 210 "aidl_language_y.y"
{
                                                        method_type *method = (method_type*)malloc(sizeof(method_type));
                                                        method->interface_item.item_type = METHOD_TYPE;
                                                        method->interface_item.next = NULL;
                                                        method->type = yyvsp[-5].type;
                                                        method->oneway = false;
                                                        memset(&method->oneway_token, 0, sizeof(buffer_type));
                                                        method->name = yyvsp[-4].buffer;
                                                        method->open_paren_token = yyvsp[-3].buffer;
                                                        method->args = yyvsp[-2].arg;
                                                        method->close_paren_token = yyvsp[-1].buffer;
                                                        method->semicolon_token = yyvsp[0].buffer;
                                                        method->comments_token = &method->type.type;
                                                        yyval.method = method;
                                                    }
break;
case 32:
#line 225 "aidl_language_y.y"
{
                                                        method_type *method = (method_type*)malloc(sizeof(method_type));
                                                        method->interface_item.item_type = METHOD_TYPE;
                                                        method->interface_item.next = NULL;
                                                        method->oneway = true;
                                                        method->oneway_token = yyvsp[-6].buffer;
                                                        method->type = yyvsp[-5].type;
                                                        method->name = yyvsp[-4].buffer;
                                                        method->open_paren_token = yyvsp[-3].buffer;
                                                        method->args = yyvsp[-2].arg;
                                                        method->close_paren_token = yyvsp[-1].buffer;
                                                        method->semicolon_token = yyvsp[0].buffer;
                                                        method->comments_token = &method->oneway_token;
                                                        yyval.method = method;
                                                    }
break;
case 33:
#line 243 "aidl_language_y.y"
{ yyval.arg = NULL; }
break;
case 34:
#line 244 "aidl_language_y.y"
{ yyval = yyvsp[0]; }
break;
case 35:
#line 245 "aidl_language_y.y"
{
                                    if (yyval.arg != NULL) {
                                        /* only NULL on error*/
                                        yyval = yyvsp[-2];
                                        arg_type *p = yyvsp[-2].arg;
                                        while (p && p->next) {
                                            p=p->next;
                                        }
                                        yyvsp[0].arg->comma_token = yyvsp[-1].buffer;
                                        p->next = yyvsp[0].arg;
                                    }
                                }
break;
case 36:
#line 257 "aidl_language_y.y"
{
                                    fprintf(stderr, "%s:%d: syntax error in parameter list\n", g_currentFilename, yyvsp[0].buffer.lineno);
                                    yyval.arg = NULL;
                                }
break;
case 37:
#line 264 "aidl_language_y.y"
{
                                                arg_type* arg = (arg_type*)malloc(sizeof(arg_type));
                                                memset(&arg->comma_token, 0, sizeof(buffer_type));
                                                arg->direction = yyvsp[-2].buffer;
                                                arg->type = yyvsp[-1].type;
                                                arg->name = yyvsp[0].buffer;
                                                arg->next = NULL;
                                                yyval.arg = arg;
                                      }
break;
case 38:
#line 276 "aidl_language_y.y"
{
                                    yyval.type.type = yyvsp[0].buffer;
                                    init_buffer_type(&yyval.type.array_token, yylineno);
                                    yyval.type.dimension = 0;
                                }
break;
case 39:
#line 281 "aidl_language_y.y"
{
                                    yyval.type.type = yyvsp[-1].buffer;
                                    yyval.type.array_token = yyvsp[0].buffer;
                                    yyval.type.dimension = count_brackets(yyvsp[0].buffer.data);
                                }
break;
case 40:
#line 286 "aidl_language_y.y"
{
                                    yyval.type.type = yyvsp[0].buffer;
                                    init_buffer_type(&yyval.type.array_token, yylineno);
                                    yyval.type.dimension = 0;
                                }
break;
case 41:
#line 294 "aidl_language_y.y"
{ init_buffer_type(&yyval.buffer, yylineno); }
break;
case 42:
#line 295 "aidl_language_y.y"
{ yyval.buffer = yyvsp[0].buffer; }
break;
case 43:
#line 296 "aidl_language_y.y"
{ yyval.buffer = yyvsp[0].buffer; }
break;
case 44:
#line 297 "aidl_language_y.y"
{ yyval.buffer = yyvsp[0].buffer; }
break;
#line 815 "aidl_language_y.cpp"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
