// Generated from promi.g4 by ANTLR 4.9.3
import Antlr4

open class promiParser: Parser {

	internal static var _decisionToDFA: [DFA] = {
          var decisionToDFA = [DFA]()
          let length = promiParser._ATN.getNumberOfDecisions()
          for i in 0..<length {
            decisionToDFA.append(DFA(promiParser._ATN.getDecisionState(i)!, i))
           }
           return decisionToDFA
     }()

	internal static let _sharedContextCache = PredictionContextCache()

	public
	enum Tokens: Int {
		case EOF = -1, T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, 
                 NEWLINE = 7, INT = 8
	}

	public
	static let RULE_program = 0, RULE_expression = 1

	public
	static let ruleNames: [String] = [
		"program", "expression"
	]

	private static let _LITERAL_NAMES: [String?] = [
		nil, "'*'", "'/'", "'+'", "'-'", "'('", "')'"
	]
	private static let _SYMBOLIC_NAMES: [String?] = [
		nil, nil, nil, nil, nil, nil, nil, "NEWLINE", "INT"
	]
	public
	static let VOCABULARY = Vocabulary(_LITERAL_NAMES, _SYMBOLIC_NAMES)

	override open
	func getGrammarFileName() -> String { return "promi.g4" }

	override open
	func getRuleNames() -> [String] { return promiParser.ruleNames }

	override open
	func getSerializedATN() -> String { return promiParser._serializedATN }

	override open
	func getATN() -> ATN { return promiParser._ATN }


	override open
	func getVocabulary() -> Vocabulary {
	    return promiParser.VOCABULARY
	}

	override public
	init(_ input:TokenStream) throws {
	    RuntimeMetaData.checkVersion("4.9.3", RuntimeMetaData.VERSION)
		try super.init(input)
		_interp = ParserATNSimulator(self,promiParser._ATN,promiParser._decisionToDFA, promiParser._sharedContextCache)
	}


	public class ProgramContext: ParserRuleContext {
			open
			func expression() -> [ExpressionContext] {
				return getRuleContexts(ExpressionContext.self)
			}
			open
			func expression(_ i: Int) -> ExpressionContext? {
				return getRuleContext(ExpressionContext.self, i)
			}
			open
			func NEWLINE() -> [TerminalNode] {
				return getTokens(promiParser.Tokens.NEWLINE.rawValue)
			}
			open
			func NEWLINE(_ i:Int) -> TerminalNode? {
				return getToken(promiParser.Tokens.NEWLINE.rawValue, i)
			}
		override open
		func getRuleIndex() -> Int {
			return promiParser.RULE_program
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? promiVisitor {
			    return visitor.visitProgram(self)
			}
			else if let visitor = visitor as? promiBaseVisitor {
			    return visitor.visitProgram(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}
	@discardableResult
	 open func program() throws -> ProgramContext {
		var _localctx: ProgramContext = ProgramContext(_ctx, getState())
		try enterRule(_localctx, 0, promiParser.RULE_program)
		var _la: Int = 0
		defer {
	    		try! exitRule()
	    }
		do {
		 	try enterOuterAlt(_localctx, 1)
		 	setState(9)
		 	try _errHandler.sync(self)
		 	_la = try _input.LA(1)
		 	while (//closure
		 	 { () -> Bool in
		 	      let testSet: Bool = _la == promiParser.Tokens.T__4.rawValue || _la == promiParser.Tokens.INT.rawValue
		 	      return testSet
		 	 }()) {
		 		setState(4)
		 		try expression(0)
		 		setState(5)
		 		try match(promiParser.Tokens.NEWLINE.rawValue)


		 		setState(11)
		 		try _errHandler.sync(self)
		 		_la = try _input.LA(1)
		 	}

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx
	}


	public class ExpressionContext: ParserRuleContext {
			open
			func INT() -> TerminalNode? {
				return getToken(promiParser.Tokens.INT.rawValue, 0)
			}
			open
			func expression() -> [ExpressionContext] {
				return getRuleContexts(ExpressionContext.self)
			}
			open
			func expression(_ i: Int) -> ExpressionContext? {
				return getRuleContext(ExpressionContext.self, i)
			}
		override open
		func getRuleIndex() -> Int {
			return promiParser.RULE_expression
		}
		override open
		func accept<T>(_ visitor: ParseTreeVisitor<T>) -> T? {
			if let visitor = visitor as? promiVisitor {
			    return visitor.visitExpression(self)
			}
			else if let visitor = visitor as? promiBaseVisitor {
			    return visitor.visitExpression(self)
			}
			else {
			     return visitor.visitChildren(self)
			}
		}
	}

	 public final  func expression( ) throws -> ExpressionContext   {
		return try expression(0)
	}
	@discardableResult
	private func expression(_ _p: Int) throws -> ExpressionContext   {
		let _parentctx: ParserRuleContext? = _ctx
		let _parentState: Int = getState()
		var _localctx: ExpressionContext = ExpressionContext(_ctx, _parentState)
		var _prevctx: ExpressionContext = _localctx
		let _startState: Int = 2
		try enterRecursionRule(_localctx, 2, promiParser.RULE_expression, _p)
		var _la: Int = 0
		defer {
	    		try! unrollRecursionContexts(_parentctx)
	    }
		do {
			var _alt: Int
			try enterOuterAlt(_localctx, 1)
			setState(18)
			try _errHandler.sync(self)
			switch (promiParser.Tokens(rawValue: try _input.LA(1))!) {
			case .INT:
				setState(13)
				try match(promiParser.Tokens.INT.rawValue)

				break

			case .T__4:
				setState(14)
				try match(promiParser.Tokens.T__4.rawValue)
				setState(15)
				try expression(0)
				setState(16)
				try match(promiParser.Tokens.T__5.rawValue)

				break
			default:
				throw ANTLRException.recognition(e: NoViableAltException(self))
			}
			_ctx!.stop = try _input.LT(-1)
			setState(28)
			try _errHandler.sync(self)
			_alt = try getInterpreter().adaptivePredict(_input,3,_ctx)
			while (_alt != 2 && _alt != ATN.INVALID_ALT_NUMBER) {
				if ( _alt==1 ) {
					if _parseListeners != nil {
					   try triggerExitRuleEvent()
					}
					_prevctx = _localctx
					setState(26)
					try _errHandler.sync(self)
					switch(try getInterpreter().adaptivePredict(_input,2, _ctx)) {
					case 1:
						_localctx = ExpressionContext(_parentctx, _parentState);
						try pushNewRecursionContext(_localctx, _startState, promiParser.RULE_expression)
						setState(20)
						if (!(precpred(_ctx, 4))) {
						    throw ANTLRException.recognition(e:FailedPredicateException(self, "precpred(_ctx, 4)"))
						}
						setState(21)
						_la = try _input.LA(1)
						if (!(//closure
						 { () -> Bool in
						      let testSet: Bool = _la == promiParser.Tokens.T__0.rawValue || _la == promiParser.Tokens.T__1.rawValue
						      return testSet
						 }())) {
						try _errHandler.recoverInline(self)
						}
						else {
							_errHandler.reportMatch(self)
							try consume()
						}
						setState(22)
						try expression(5)

						break
					case 2:
						_localctx = ExpressionContext(_parentctx, _parentState);
						try pushNewRecursionContext(_localctx, _startState, promiParser.RULE_expression)
						setState(23)
						if (!(precpred(_ctx, 3))) {
						    throw ANTLRException.recognition(e:FailedPredicateException(self, "precpred(_ctx, 3)"))
						}
						setState(24)
						_la = try _input.LA(1)
						if (!(//closure
						 { () -> Bool in
						      let testSet: Bool = _la == promiParser.Tokens.T__2.rawValue || _la == promiParser.Tokens.T__3.rawValue
						      return testSet
						 }())) {
						try _errHandler.recoverInline(self)
						}
						else {
							_errHandler.reportMatch(self)
							try consume()
						}
						setState(25)
						try expression(4)

						break
					default: break
					}
			 
				}
				setState(30)
				try _errHandler.sync(self)
				_alt = try getInterpreter().adaptivePredict(_input,3,_ctx)
			}

		}
		catch ANTLRException.recognition(let re) {
			_localctx.exception = re
			_errHandler.reportError(self, re)
			try _errHandler.recover(self, re)
		}

		return _localctx;
	}

	override open
	func sempred(_ _localctx: RuleContext?, _ ruleIndex: Int,  _ predIndex: Int)throws -> Bool {
		switch (ruleIndex) {
		case  1:
			return try expression_sempred(_localctx?.castdown(ExpressionContext.self), predIndex)
	    default: return true
		}
	}
	private func expression_sempred(_ _localctx: ExpressionContext!,  _ predIndex: Int) throws -> Bool {
		switch (predIndex) {
		    case 0:return precpred(_ctx, 4)
		    case 1:return precpred(_ctx, 3)
		    default: return true
		}
	}


	public
	static let _serializedATN = promiParserATN().jsonString

	public
	static let _ATN = ATNDeserializer().deserializeFromJson(_serializedATN)
}