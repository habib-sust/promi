// Generated from promi.g4 by ANTLR 4.9.3
import Antlr4

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link promiParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
open class promiVisitor<T>: ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link promiParser#program}.
	- Parameters:
	  - ctx: the parse tree
	- returns: the visitor result
	 */
	open func visitProgram(_ ctx: promiParser.ProgramContext) -> T {
	 	fatalError(#function + " must be overridden")
	}

	/**
	 * Visit a parse tree produced by {@link promiParser#expression}.
	- Parameters:
	  - ctx: the parse tree
	- returns: the visitor result
	 */
	open func visitExpression(_ ctx: promiParser.ExpressionContext) -> T {
	 	fatalError(#function + " must be overridden")
	}

}