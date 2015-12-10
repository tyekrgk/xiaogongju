#include "generic.h"
#include "AgentManager/PCNodeInfo.h"
#include"AgentManager/AgentConversationCTRL.h"
#include "AgentManager/AgentConversationProxy.h"
#include "AgentManager/PCNodeManager.h"
//#include"AgentManager/AgentCTRL.h"

//int fun_newnode(int sock){
//    MyPrintf("new node here %d.",sock);
//    return 1;
//}
//
//int fun_newtunnel(int sock){
//    MyPrintf("new tunnel %d.",sock);
//    return 1;
//}
//
//int fun_tunnelans(int sock){
//    MyPrintf("tunnel answer %d.",sock);
//    return 1;
//}
//
//int fun_broadcast(int sock){
//    MyPrintf("broadcast %d.",sock);
//    return 1;
//}

int main(){
    API_env_init();
    AGENT_Conversation_Init(20,"This is Server Node",MYSELF_NODE);
    AGENT_Conversation_Listen(8888,20);
    
    MIC_SLEEP(10);
///Printf_DEBUG("start send");
///    int sock2222 = AGENT_ConversationProxy_Build_Tunnel(2);
///    char helloWorld[]="Hello This is from sock";
///    API_socket_send(sock2222,helloWorld,strlen(helloWorld));
///Printf_DEBUG("send ok");
    if(PCMANAGER_HAVENode(5)){
        Printf_OK("found 1111111111111111111111");
    }
    else{
        Printf_OK("not found 1111111111111111111111");
    }

    while(1){
        MIC_SLEEP(10000);
    }

    return 0;
}
