grammar promi;

program:  (statement)* EOF;

statement: expression EOL
            | returnStatement EOL
            | ifStatement
            | whileStatement
            ;
returnStatement: 'return' expr=expression;

ifStatement: ifBlock;
ifBlock: 'if' '(' cond=expression ')' blk=block;
block: '{' (statement)* '}';

whileStatement: 'while' '(' cond=expression ')' blk=block;

expression:	left=expression op=('*'|'/') right=expression         #mulSubExpression
    | left=expression op=('+'|'-') right=expression               #addDivExpression
    | left=expression op=(EQ|NE|LT|LTQ|GT|GTQ) right=expression   #comparisonExpression
    | var=IDENTIFIER '=' val=expression                           #variableExpression
    | prim = (INT | IDENTIFIER)                                   #primitiveExpression
    | '(' expr=expression ')'                                     #parenEnclosedExpression
    ;

EQ : '==';
NE : '!=';
LT : '<';
LTQ : '<=';
GT : '>';
GTQ : '>=';
IDENTIFIER : [a-zA-Z_][a-zA-Z]*;
EOL : ';' ;
INT : [0-9]+ ;
WHITESPACE : [ \t\r\n] ->skip ;