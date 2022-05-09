grammar promi;
program:	(expression NEWLINE)* ;
expression:	expression ('*'|'/') expression
    |	expression ('+'|'-') expression
    |	INT
    |	'(' expression ')'
    ;
NEWLINE : [\r\n]+ ;
INT     : [0-9]+ ;