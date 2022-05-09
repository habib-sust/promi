// Generated from promi.g4 by ANTLR 4.9.3
import Antlr4

open class promiLexer: Lexer {

	internal static var _decisionToDFA: [DFA] = {
          var decisionToDFA = [DFA]()
          let length = promiLexer._ATN.getNumberOfDecisions()
          for i in 0..<length {
          	    decisionToDFA.append(DFA(promiLexer._ATN.getDecisionState(i)!, i))
          }
           return decisionToDFA
     }()

	internal static let _sharedContextCache = PredictionContextCache()

	public
	static let T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, NEWLINE=7, INT=8

	public
	static let channelNames: [String] = [
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	]

	public
	static let modeNames: [String] = [
		"DEFAULT_MODE"
	]

	public
	static let ruleNames: [String] = [
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "NEWLINE", "INT"
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
	func getVocabulary() -> Vocabulary {
		return promiLexer.VOCABULARY
	}

	public
	required init(_ input: CharStream) {
	    RuntimeMetaData.checkVersion("4.9.3", RuntimeMetaData.VERSION)
		super.init(input)
		_interp = LexerATNSimulator(self, promiLexer._ATN, promiLexer._decisionToDFA, promiLexer._sharedContextCache)
	}

	override open
	func getGrammarFileName() -> String { return "promi.g4" }

	override open
	func getRuleNames() -> [String] { return promiLexer.ruleNames }

	override open
	func getSerializedATN() -> String { return promiLexer._serializedATN }

	override open
	func getChannelNames() -> [String] { return promiLexer.channelNames }

	override open
	func getModeNames() -> [String] { return promiLexer.modeNames }

	override open
	func getATN() -> ATN { return promiLexer._ATN }


	public
	static let _serializedATN: String = promiLexerATN().jsonString

	public
	static let _ATN: ATN = ATNDeserializer().deserializeFromJson(_serializedATN)
}