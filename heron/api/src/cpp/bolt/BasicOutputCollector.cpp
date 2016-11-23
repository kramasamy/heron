#include "BasicOutputCollector.h"

BasicOutputCollector::BasicOutputCollector(OutputCollector output) : 
    out(out){};

list<int> BasicOutputCollector::emit(std::string streamId, 
                                    std::list<Element> tuple) {

  return out.emit(streamId, inputTuple, tuple);
}


list<int>  BasicOutputCollector::emit(std::list<Element> tuple) {
  // TODO (Jordi): Throw error?
  return list<int>();
}

void  BasicOutputCollector::setContext(Tuple anInputTuple) {
  inputTuple = anInputTuple;
}

void  BasicOutputCollector::emitDirect(int taskId, std::string streamId, std::list<Element> tuple) {
  out.emitDirect(taskId, streamId, inputTuple, tuple);
}

void  BasicOutputCollector::emitDirect(int taskId, std::list<Element> tuple) {
  // TODO (Jordi): Throw error?
}