// Generated from /Users/habib/promilang/promi/promi.g4 by ANTLR 4.10.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link promiParser}.
 */
public interface promiListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link promiParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(promiParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link promiParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(promiParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link promiParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(promiParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link promiParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(promiParser.ExpressionContext ctx);
}