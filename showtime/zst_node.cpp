#include "zst_node.h"

ZstNode::ZstNode(){
	//  Prepare our context and socket
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REP);
    socket.bind ("tcp://*:5555");
}

ZstNode::~ZstNode(){

}

float ZstNode::pineapple(){
	return 12.0;
}
