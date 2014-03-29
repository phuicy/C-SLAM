// A Bison parser, made by GNU Bison 3.0.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2013 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:399

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "TreeClassifierParser.tab.h"

// User implementation prologue.

#line 51 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:407
// Unqualified %code blocks.
#line 30 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:408

	#include<cstdlib>
	#include<fstream>

	#include "TreeClassifierBuilder.h"
	
	static int yylex(tc::TreeClassifierParser::semantic_type *yylval, tc::TreeClassifierParser::location_type* l, TreeClassifierScanner& scanner, TreeClassifierBuilder& builder);

#line 62 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:408


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyempty = true)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 5 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:474
namespace tc {
#line 148 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:474

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   TreeClassifierParser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
   TreeClassifierParser :: TreeClassifierParser  (TreeClassifierScanner  &scanner_yyarg, TreeClassifierBuilder  &builder_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      builder (builder_yyarg)
  {}

   TreeClassifierParser ::~ TreeClassifierParser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
   TreeClassifierParser ::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
   TreeClassifierParser ::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
   TreeClassifierParser ::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
   TreeClassifierParser ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
   TreeClassifierParser ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
   TreeClassifierParser ::basic_symbol<Base>::~basic_symbol ()
  {
  }

  template <typename Base>
  inline
  void
   TreeClassifierParser ::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
   TreeClassifierParser ::by_type::by_type ()
     : type (empty)
  {}

  inline
   TreeClassifierParser ::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
   TreeClassifierParser ::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
   TreeClassifierParser ::by_type::move (by_type& that)
  {
    type = that.type;
    that.type = empty;
  }

  inline
  int
   TreeClassifierParser ::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
   TreeClassifierParser ::by_state::by_state ()
    : state (empty)
  {}

  inline
   TreeClassifierParser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   TreeClassifierParser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.state = empty;
  }

  inline
   TreeClassifierParser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   TreeClassifierParser ::symbol_number_type
   TreeClassifierParser ::by_state::type_get () const
  {
    return state == empty ? 0 : yystos_[state];
  }

  inline
   TreeClassifierParser ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   TreeClassifierParser ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty;
  }

  inline
   TreeClassifierParser ::stack_symbol_type&
   TreeClassifierParser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   TreeClassifierParser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
   TreeClassifierParser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
   TreeClassifierParser ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   TreeClassifierParser ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   TreeClassifierParser ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   TreeClassifierParser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   TreeClassifierParser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   TreeClassifierParser ::debug_level_type
   TreeClassifierParser ::debug_level () const
  {
    return yydebug_;
  }

  void
   TreeClassifierParser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  TreeClassifierParser ::state_type
   TreeClassifierParser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
   TreeClassifierParser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   TreeClassifierParser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   TreeClassifierParser ::parse ()
  {
    /// Whether yyla contains a lookahead.
    bool yyempty = true;

    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyempty)
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, scanner, builder));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
        yyempty = false;
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Discard the token being shifted.
    yyempty = true;

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 4:
#line 92 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				builder.buildClass(*(yystack_[5].value.str), *(yystack_[4].value.str), (yystack_[2].value.elists)->first, (yystack_[2].value.elists)->second, (yystack_[1].value.flist), (yystack_[3].value.boolean));
				free((yystack_[5].value.str));
				free((yystack_[4].value.str));
			}
#line 602 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 5:
#line 100 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = (yystack_[0].value.str);
			}
#line 610 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 6:
#line 104 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = new std::string("");
			}
#line 618 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 7:
#line 110 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.boolean) = true;
			}
#line 626 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 8:
#line 114 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.boolean) = false;
			}
#line 634 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 9:
#line 120 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.elists) = new std::pair<VariableList*, ConstantList*>();
				(yylhs.value.elists)->first = (yystack_[0].value.vlist);
				(yylhs.value.elists)->second = (yystack_[1].value.clist);
			}
#line 644 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 10:
#line 126 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.elists) = new std::pair<VariableList*, ConstantList*>();
				(yylhs.value.elists)->first = (yystack_[1].value.vlist);
				(yylhs.value.elists)->second = (yystack_[0].value.clist);
			}
#line 654 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 11:
#line 132 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.elists) = new std::pair<VariableList*, ConstantList*>();
				(yylhs.value.elists)->first = new VariableList();
				(yylhs.value.elists)->second = (yystack_[0].value.clist);
			}
#line 664 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 12:
#line 138 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.elists) = new std::pair<VariableList*, ConstantList*>();
				(yylhs.value.elists)->first = (yystack_[0].value.vlist);
				(yylhs.value.elists)->second = new ConstantList();
			}
#line 674 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 13:
#line 144 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.elists) = new std::pair<VariableList*, ConstantList*>();
				(yylhs.value.elists)->first = NULL;
				(yylhs.value.elists)->second = NULL;
			}
#line 684 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 14:
#line 152 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.clist) = (yystack_[1].value.clist);
			}
#line 692 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 15:
#line 158 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.clist) = builder.buildCostantList((yystack_[0].value.clist), *(yystack_[4].value.str), *(yystack_[2].value.str));
				free((yystack_[4].value.str));
				free((yystack_[2].value.str));
			}
#line 702 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 16:
#line 164 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.clist) = NULL;
			}
#line 710 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 17:
#line 170 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.vlist) = (yystack_[1].value.vlist);
			}
#line 718 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 18:
#line 176 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.vlist) = builder.buildVariableList((yystack_[0].value.vlist), *(yystack_[2].value.str));
				free((yystack_[2].value.str));
			}
#line 727 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 19:
#line 181 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.vlist) = NULL;
			}
#line 735 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 20:
#line 188 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.flist) = builder.buildFeaturesList((yystack_[0].value.flist), (yystack_[1].value.fdata)->first, (yystack_[1].value.fdata)->second);
				free((yystack_[1].value.fdata));
			}
#line 744 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 21:
#line 193 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.flist) = NULL;
			}
#line 752 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 22:
#line 199 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.fdata) = new FuzzyFeatureData();
				(yylhs.value.fdata)->first = *(yystack_[0].value.vstr);
				(yylhs.value.fdata)->second = SIM_F;
				delete (yystack_[0].value.vstr);
			}
#line 763 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 23:
#line 206 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.fdata) = new FuzzyFeatureData();
				(yylhs.value.fdata)->first = *(yystack_[0].value.vstr);
				(yylhs.value.fdata)->second = SIM_R;
				delete (yystack_[0].value.vstr);
			}
#line 774 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 24:
#line 213 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.fdata) = new FuzzyFeatureData();
				(yylhs.value.fdata)->first = *(yystack_[0].value.vstr);
				(yylhs.value.fdata)->second = COM_R;
				delete (yystack_[0].value.vstr);
			}
#line 785 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 25:
#line 222 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.vstr) = new std::vector<std::string>();
				(yylhs.value.vstr)->push_back(*(yystack_[3].value.str));
				(yylhs.value.vstr)->push_back(*(yystack_[1].value.str));
				delete (yystack_[3].value.str);
				delete (yystack_[1].value.str);
			}
#line 797 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 26:
#line 232 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.vstr) = new std::vector<std::string>();
				(yylhs.value.vstr)->push_back(*(yystack_[6].value.str));
				(yylhs.value.vstr)->push_back(*(yystack_[4].value.str));
				(yylhs.value.vstr)->push_back(*(yystack_[2].value.str));
				delete (yystack_[6].value.str);
				delete (yystack_[4].value.str);
				delete (yystack_[2].value.str);
			}
#line 811 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 27:
#line 244 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.vstr) = new std::vector<std::string>();
				(yylhs.value.vstr)->push_back(*(yystack_[10].value.str));
				(yylhs.value.vstr)->push_back(*(yystack_[8].value.str));
				(yylhs.value.vstr)->push_back(*(yystack_[4].value.str));
				(yylhs.value.vstr)->push_back(*(yystack_[2].value.str));
				delete (yystack_[10].value.str);
				delete (yystack_[8].value.str);
				delete (yystack_[4].value.str);
				delete (yystack_[2].value.str);

				if((yystack_[7].value.str) != NULL)
				{
					(yylhs.value.vstr)->push_back(*(yystack_[7].value.str));
					delete (yystack_[7].value.str);
				}
			}
#line 833 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 28:
#line 265 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = (yystack_[0].value.str);
			}
#line 841 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 29:
#line 269 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = NULL;
			}
#line 849 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 30:
#line 275 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = (yystack_[0].value.str);
			}
#line 857 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 31:
#line 279 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = NULL;
			}
#line 865 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 32:
#line 286 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = (yystack_[0].value.str);
			}
#line 873 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;

  case 33:
#line 290 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:847
    {
				(yylhs.value.str) = (yystack_[0].value.str);
			}
#line 881 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
    break;


#line 885 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:847
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state,
                                           yyempty ? yyempty_ : yyla.type_get ()));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyempty)
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyempty = true;
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyempty)
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyempty)
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   TreeClassifierParser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   TreeClassifierParser ::yysyntax_error_ (state_type yystate, symbol_number_type yytoken) const
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char  TreeClassifierParser ::yypact_ninf_ = -14;

  const signed char  TreeClassifierParser ::yytable_ninf_ = -1;

  const signed char
   TreeClassifierParser ::yypact_[] =
  {
      -6,     6,    13,    -6,    -1,   -14,   -14,    12,     0,   -14,
     -14,    -8,     2,     2,     4,     7,     8,   -14,   -14,    10,
       1,     9,    -4,    11,    15,     4,   -14,   -14,   -14,    19,
     -14,   -14,   -14,     2,   -14,    22,     2,   -14,   -14,    23,
     -14,    14,     5,    16,     2,    24,     2,    28,   -14,   -14,
     -14,    29,    18,    27,    21,     2,   -14,   -14,    17,     2,
      20,    25,   -14
  };

  const unsigned char
   TreeClassifierParser ::yydefact_[] =
  {
       0,     0,     0,     3,     6,     1,     2,     0,     8,     5,
       7,    13,    19,    16,    21,    11,    12,    32,    33,     0,
       0,     0,     0,    32,     0,    21,    22,    23,    24,     0,
       9,    10,    17,    19,    14,     0,     0,     4,    20,     0,
      18,     0,    29,     0,    16,     0,     0,     0,    25,    15,
      28,    31,     0,     0,     0,     0,    30,    26,     0,     0,
       0,     0,    27
  };

  const signed char
   TreeClassifierParser ::yypgoto_[] =
  {
     -14,    37,   -14,   -14,   -14,   -14,    31,    26,    30,    32,
      33,   -14,   -14,   -14,   -14,   -14,   -14,   -13
  };

  const signed char
   TreeClassifierParser ::yydefgoto_[] =
  {
      -1,     2,     3,     8,    11,    14,    15,    21,    16,    19,
      24,    25,    26,    27,    28,    47,    54,    20
  };

  const unsigned char
   TreeClassifierParser ::yytable_[] =
  {
      22,    29,    12,     1,    13,    17,    18,    23,    18,     4,
      45,    46,    29,     5,     7,     9,    10,    12,    35,    33,
      13,    32,    34,    42,    39,    41,    43,    50,    36,    37,
      56,    22,    44,    51,    48,    52,    59,    53,    55,    57,
       6,    61,    58,    62,     0,    30,    60,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
      49
  };

  const signed char
   TreeClassifierParser ::yycheck_[] =
  {
      13,    14,    10,     9,    12,     3,     4,     3,     4,     3,
       5,     6,    25,     0,    15,     3,    16,    10,    22,    18,
      12,    11,    13,    36,     5,     3,     3,     3,    17,    14,
       3,    44,    18,    46,    18,     7,    19,     8,    20,    18,
       3,    21,    55,    18,    -1,    15,    59,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      44
  };

  const unsigned char
   TreeClassifierParser ::yystos_[] =
  {
       0,     9,    24,    25,     3,     0,    24,    15,    26,     3,
      16,    27,    10,    12,    28,    29,    31,     3,     4,    32,
      40,    30,    40,     3,    33,    34,    35,    36,    37,    40,
      31,    29,    11,    18,    13,    22,    17,    14,    33,     5,
      32,     3,    40,     3,    18,     5,     6,    38,    18,    30,
       3,    40,     7,     8,    39,    20,     3,    18,    40,    19,
      40,    21,    18
  };

  const unsigned char
   TreeClassifierParser ::yyr1_[] =
  {
       0,    23,    24,    24,    25,    26,    26,    27,    27,    28,
      28,    28,    28,    28,    29,    30,    30,    31,    32,    32,
      33,    33,    34,    34,    34,    35,    36,    37,    38,    38,
      39,    39,    40,    40
  };

  const unsigned char
   TreeClassifierParser ::yyr2_[] =
  {
       0,     2,     2,     1,     7,     2,     0,     1,     0,     2,
       2,     1,     1,     0,     3,     5,     0,     3,     3,     0,
       2,     0,     1,     1,     1,     4,     7,    11,     2,     0,
       2,     0,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  TreeClassifierParser ::yytname_[] =
  {
  "$end", "error", "$undefined", "ID", "VAR_ID", "IS", "MATCH", "ON",
  "DEGREE", "CLASS", "VARIABLES", "END_VARIABLES", "CONSTANTS",
  "END_CONSTANTS", "END_CLASS", "EXTENDS", "IMPORTANT", "PERIOD",
  "SEMICOLON", "COMMA", "LPAR", "RPAR", "EQUAL", "$accept",
  "fuzzyClassifiers", "fuzzyClass", "fuzzySuperclass", "importantFlag",
  "fuzzyClassElements", "constants", "constantList", "variables",
  "variableList", "fuzzyFeatures", "fuzzyFeature", "fuzzySimpleFeature",
  "fuzzySimpleRelation", "fuzzyComplexRelation", "fuzzyConstraint",
  "fuzzyDegree", "var", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   TreeClassifierParser ::yyrline_[] =
  {
       0,    87,    87,    88,    91,    99,   104,   109,   114,   119,
     125,   131,   137,   144,   151,   157,   164,   169,   175,   181,
     187,   193,   198,   205,   212,   221,   231,   243,   264,   269,
     274,   279,   285,   289
  };

  // Print the state stack on the debug stream.
  void
   TreeClassifierParser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   TreeClassifierParser ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
   TreeClassifierParser ::token_number_type
   TreeClassifierParser ::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
    };
    const unsigned int user_token_number_max_ = 277;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 5 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:1155
} // tc
#line 1346 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.tab.cpp" // lalr1.cc:1155
#line 295 "/home/dave/CognitiveSlam/src/c_fuzzy/src/lib_tree_classifier/TreeClassifierParser.y" // lalr1.cc:1156


void tc::TreeClassifierParser::error(const tc::TreeClassifierParser::location_type& l, const std::string& msg)
{
	std::stringstream ss;
	ss << "Error: " << msg << ", between " << l.begin << " and " << l.end << std::endl;
	throw std::runtime_error(ss.str());
}

/* include for access to scanner.yylex */
#include "FuzzyScanner.h"
static int yylex(tc::TreeClassifierParser::semantic_type *yylval, tc::TreeClassifierParser::location_type* l, TreeClassifierScanner& scanner, TreeClassifierBuilder& builder)
{
	l->step();
	return(scanner.yylex(yylval));
}

