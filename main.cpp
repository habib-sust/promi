#include <iostream>
#include <memory>
#include "antlr4-runtime.h"
#include "parser/promiLexer.h"
#include "parser/promiParser.h"
//#include "parser/promiBaseVisitor.h"
#include "promiVisitorImpl.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    promiLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    promiParser parser(&tokens);

    tree::ParseTree *tree = parser.program();

    std::unique_ptr<promiVisitorImpl> v = std::make_unique<promiVisitorImpl>();
    auto result = v->visit(tree);
    std::cout << result.as<int>() << std::endl;

    return 0;
}


// https://marufabbasi.github.io/groot/steps/03_create_build_project