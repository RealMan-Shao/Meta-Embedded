# Meta Team - Optimized version test 2024
With the aim of enhancing comprehension and facilitating updates, this revision reorganizes the framework of the current meta-embedded project and eliminates certain perplexing elements.

## Log
3/1/2024
1. first modification

3/14/2024
1. adjust level of board related files(hex config, ChibiOS, APIs), I hope to put them into one folder based on different board types(A&C). We will not modify these files too often.
2. delete some vision filter.
3. find some wrong use of name SDK
4. suggestion: define branch naming rules (SP24beta_XXX, FA23stable_XXX)
5. useful notes:
Do you have to choose between SDK and API?

    No — in fact, as noted above, an SDK often contains at least one API. These two help you in different ways but can and do work together.
   
    APIs, again, serve to define how different platforms work together. They facilitate interaction via specifications (protocols); and as facilitators, they serve as one of the tools in a complete kit.
   
    SDKs are the complete kit. They go beyond facilitation (though they include it) to provide everything for building new software for a specific platform or programming language.
