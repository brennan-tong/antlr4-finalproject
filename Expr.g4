grammar Expr;

prog: (declaration | programDeclaration | comment)* BEGIN (statement | comment)* END comment? '.' comment? EOF;


comment: COMMENT;

programDeclaration: PROGRAM IDENTIFIER ('(' (IDENTIFIER (',' IDENTIFIER)*)? ')')? ';';

declaration
    : constDeclaration
    | varDeclaration
    | typeDefDeclaration
    | functionDeclaration
    ;

constDeclaration: CONST constAssignmentList;
constAssignmentList: (comment? IDENTIFIER EQUAL (constExpression | stringConstant) (comment? ';' comment? IDENTIFIER EQUAL (constExpression | stringConstant))* comment? ';')?;

constExpression
    : simpleExpression ((EQUAL | '<>' | '<' | '<=' | '>' | '>=') simpleExpression)?
    ;

varDeclaration: VAR (varDeclarationList)+;
varDeclarationList: varIdentifierList COLON typeIdentifier ';';
varIdentifierList: IDENTIFIER (',' IDENTIFIER)*;
typeDefDeclaration: TYPE typeDefList;
typeDefList: (typeDefElement)+;
typeDefElement: IDENTIFIER EQUAL (typeSpecification | simpleType) ';';

typeIdentifier: IDENTIFIER;
typeSpecification
    : ARRAY LBRACKET subrange (COMMA subrange)? RBRACKET OF typeIdentifier
    | ARRAY LBRACKET subrange RBRACKET OF ARRAY LBRACKET subrange RBRACKET OF typeIdentifier
    | ARRAY LBRACKET subrange RBRACKET OF ARRAY LBRACKET subrange RBRACKET OF ARRAY LBRACKET subrange RBRACKET OF typeIdentifier
    | simpleType
    ;

simpleType: IDENTIFIER | subrange | enumeratedType;
enumeratedType: LPAREN IDENTIFIER (COMMA IDENTIFIER)* RPAREN;


subrange: expression RANGE expression;

functionDeclaration
    : FUNCTION IDENTIFIER '(' (paramDeclaration (',' paramDeclaration)*)? ')' COLON typeIdentifier ';'
      (declaration)*
      BEGIN
      statement*
      END ';'
    ;

paramDeclaration: paramIdentifierList COLON typeIdentifier;
paramIdentifierList: IDENTIFIER (',' IDENTIFIER)*;

statement
    : assignment
    | writeln
    | forStatement
    | compoundStatement
    | ifStatement
    | comment
    | ldxStatement
	| ldchStatement
    ;

multiDimensionalArrayIndexing: variable (LBRACKET expression RBRACKET)+;

assignment: (multiDimensionalArrayIndexing | arrayIndexing | variable) ASSIGN expression ';';
writeln: WRITELN LPAREN writelnArg (',' writelnArg)* RPAREN ';';
writelnArg: writelnExpression (COLON expression)?;
writelnExpression: expression | stringConstant | multiDimensionalArrayIndexing;


forStatement: FOR IDENTIFIER ASSIGN expression TO expression DO compoundStatement;
compoundStatement: BEGIN (comment | statement)* END comment? ';';


ifStatement: IF expression THEN statement_or_comment (ELSE statement_or_comment)?;

statement_or_comment
    : statement_without_semicolon
    | statement
    | comment
    ;

statement_without_semicolon: assignment_without_semicolon | writeln | forStatement | compoundStatement | ifStatement;
assignment_without_semicolon: (arrayIndexing | variable) ASSIGN expression;

ldxStatement: LDX expression ';';
ldchStatement: LDCH expression ';';

variable: IDENTIFIER;
functionCall: IDENTIFIER LPAREN (expression (COMMA expression)*)? RPAREN;

arrayIndexing: variable LBRACKET expression (COMMA expression)* RBRACKET;

expression
    : simpleExpression (('=' | '<>' | '<' | '<=' | '>' | '>=') simpleExpression)*
    ;

simpleExpression
    : term (('+' | '-') term)*
    ;

term
    : factor (('*' | '/' | DIV | MOD) factor)*
    ;

factor
    : NOT factor
    | '(' expression ')'
    | arrayIndexing
    | number
    | characterConstant
    | stringConstant
    | functionCall
    | variable
    | TRUE
    | FALSE
    ;

number: INTEGER | REAL;
characterConstant: CHARACTER;
stringConstant: STRING;

COMMENT : LCOMMENT .*? RCOMMENT;

fragment A : ('a' | 'A') ;
fragment B : ('b' | 'B') ;
fragment C : ('c' | 'C') ;
fragment D : ('d' | 'D') ;
fragment E : ('e' | 'E') ;
fragment F : ('f' | 'F') ;
fragment G : ('g' | 'G') ;
fragment H : ('h' | 'H') ;
fragment I : ('i' | 'I') ;
fragment J : ('j' | 'J') ;
fragment K : ('k' | 'K') ;
fragment L : ('l' | 'L') ;
fragment M : ('m' | 'M') ;
fragment N : ('n' | 'N') ;
fragment O : ('o' | 'O') ;
fragment P : ('p' | 'P') ;
fragment Q : ('q' | 'Q') ;
fragment R : ('r' | 'R') ;
fragment S : ('s' | 'S') ;
fragment T : ('t' | 'T') ;
fragment U : ('u' | 'U') ;
fragment V : ('v' | 'V') ;
fragment W : ('w' | 'W') ;
fragment X : ('x' | 'X') ;
fragment Y : ('y' | 'Y') ;
fragment Z : ('z' | 'Z') ;

COLON : ':';
QUOTEMARK : '"';
QMARK : '?';
EXMARK : '!';
NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 
AND   :     A N D;
ARRAY :     A R R A Y;
ASM   :     A S M;
BEGIN :     B E G I N;
BREAK :     B R E A K;
CASE: C A S E;
CONST : C O N S T;
CONSTRUCTOR: C O N S S T R U C T O R;
CONTINUE: C O N T I N U E;
DESTRUCTOR: D E S T R U C T O R;
DIV : D I V;
DO : D O;
DOWNTO: D O W N T O;
ELSE : E L S E;
END : ( 'e' | 'E' ) ( 'n' | 'N' ) ( 'd' | 'D' );
FALSE : F A L S E;
FILE : F I L E;
FOR : F O R;
FUNCTION : F U N C T I O N;
GOTO : G O T O;
IF : I F;
IMPLEMENTATION : I M P L E M E N T A T I O N;
IN : I N;
INLINE : I N L I N E;
INTERFACE : I N T E R F A C E;
LABEL : L A B E L;
MOD : M O D;
NIL : N I L;
NOT : N O T;
OBJECT : O B J E C T;
OF : O F;
ON : O N;
OPERATOR : O P E R A T O R;
OR : O R;
PACKED : P A C K E D;
PROCEDURE : P R O C E D U R E;
PROGRAM : P R O G R A M;
RECORD : R E C O R D;
REPEAT : R E P E A T;
SET : S E T;
SHL : S H L;
SHR : S H R;
QUOTE : '\'' ;
CHARACTER : QUOTE CHARACTER_CHAR QUOTE ;
STRING : (DQUOTE STRING_DQUOTE_CHAR* DQUOTE) | (SQUOTE STRING_SQUOTE_CHAR* SQUOTE) ;
THEN : T H E N;
TO : T O;
TRUE : T R U E;
TYPE : T Y P E;
UNIT : U N I T;
UNTIL : U N T I L;
USES : U S E S;
VAR : V A R;
WHILE : W H I L E;
WRITELN : W R I T E L N;
WITH : W I T H;
XOR : X O R;
LDX : L D X;
LDCH : L D C H;
INTEGER : [0-9]+ ;
RANGE : '..';
REAL : INTEGER '.' INTEGER
| INTEGER ('e' | 'E') ('+' | '-')? INTEGER
| INTEGER '.' INTEGER ('e' | 'E') ('+' | '-')? INTEGER
;
IDENTIFIER : [a-zA-Z_][a-zA-Z0-9_]* ;
PLUSOP : '+';
MINUSOP : '-';
DIVOP : '/';
MULTOP : '*';
ASSIGN : ':=';
EQUAL : '=';
NE : '<>';
LTEQ : '<=';
GTEQ : '>=';
LT : '<';
GT : '>';
PLUSEQUAL : '+=';
MINUSEQUAL : '-=';
MULTEQUAL : '*=';
DIVEQUAL : '/=';
CARAT : '^';
SEMICOLON : ';';
COMMA : ',';
LPAREN : '(';
RPAREN : ')';
LBRACKET : '[';
RBRACKET : ']';
LBRACE : '{';
RBRACE : '}';
LCOMMENT : '(*';
RCOMMENT : '*)';

fragment CHARACTER_CHAR : ~('\'') ; // any non-quote character

fragment STRING_DQUOTE_CHAR : SQUOTE | ~('"') ; // any non-double-quote character
fragment STRING_SQUOTE_CHAR : DQUOTE | ~('\'') ; // any non-single-quote character

fragment DQUOTE : '"';
fragment SQUOTE : '\'';