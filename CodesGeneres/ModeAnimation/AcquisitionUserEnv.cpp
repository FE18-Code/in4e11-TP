/********************************************************************
	Rhapsody	: 8.0 
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: AcquisitionUserEnv
//!	Generated Date	: Thu, 19, Jan 2017  
	File Path	: CodesGeneres\ModeAnimation\AcquisitionUserEnv.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AcquisitionUserEnv.h"
//#[ ignore
#define _MonPkg_AcquisitionUserEnv_AcquisitionUserEnv_SERIALIZE OM_NO_OP

#define _MonPkg_AcquisitionUserEnv_GetData_SERIALIZE OM_NO_OP

#define _MonPkg_AcquisitionUserEnv_Run_SERIALIZE OM_NO_OP

#define _MonPkg_AcquisitionUserEnv_setButton_SERIALIZE aomsmethod->addAttribute("p_Button", x2String(p_Button));

#define OMAnim__MonPkg_AcquisitionUserEnv_setAcc_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_acc)

#define OMAnim__MonPkg_AcquisitionUserEnv_setAcc_int_SERIALIZE_RET_VAL

#define OMAnim__MonPkg_AcquisitionUserEnv_setAlpha_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alpha)

#define OMAnim__MonPkg_AcquisitionUserEnv_setAlpha_int_SERIALIZE_RET_VAL
//#]

//## package _MonPkg

//## class AcquisitionUserEnv
//#[ ignore
AcquisitionUserEnv::out_C::out_C() : _p_(0) {
}

AcquisitionUserEnv::out_C::~out_C() {
}

void AcquisitionUserEnv::out_C::connectAcquisitionUserEnv(AcquisitionUserEnv* part) {
    InBound.addItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

AcquisitionUserEnv::~AcquisitionUserEnv() {
    NOTIFY_DESTRUCTOR(~AcquisitionUserEnv, true);
    cancelTimeouts();
}

void AcquisitionUserEnv::GetData() {
    NOTIFY_OPERATION(GetData, GetData(), 0, _MonPkg_AcquisitionUserEnv_GetData_SERIALIZE);
    //#[ operation GetData()
    
    		unsigned char buf[6];
    		
    		memset(buf, 0, 5);
    		DWORD nLenOut = 0;
    		if (ReadFile(g_hCom, buf, 6, &nLenOut, NULL))
    		{
    			if (nLenOut) {//成功
    						  
    					printf("%x    ", buf[0]); //1er octet?: delimiteur?de debut (caractère?: ) valeur 0x3A hexa 
    				//	start = buf[0];
    					
    					printf("%d    ", buf[1]); //2eme octet?: valeur du frein de 0 a 100
    					VolantFrein = buf[1];
    					
    					printf("%d    ", buf[2]); //3eme octet?: valeur de accelerateur de 0 a 100
    					VolantAcc = buf[2];	
    									
    					buf[3]=buf[3]>>7; 					
    					printf("%d", buf[3]);    //4eme octet?: angle volant?voir explication apres  
    					VolantAngle = buf[3]; 					
    					printf("   "); 
    					
    					printf("%d    ", buf[4]); //5eme octet?: activation des boutons?
                        Button= (int) buf[4];
    
    					
    					printf("%0x    ", buf[5]);  //6eme octet?: delimiteur de fin 0x0D
    				//	fin = buf[5];
    				
    			
    				printf("***********\n");
    
    			}
    
    			else//超时
    				printf("time out\n");
    		}
    		else
    			//失败
    			printf("fail to read\n");
    
    	
    //#]
}

void AcquisitionUserEnv::Run() {
    NOTIFY_OPERATION(Run, Run(), 0, _MonPkg_AcquisitionUserEnv_Run_SERIALIZE);
    //#[ operation Run()
          //打开串口
    	g_hCom = CreateFile(_T("COM9"), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    
    
    	//设置读超时
    	COMMTIMEOUTS timeouts;
    	GetCommTimeouts(g_hCom, &timeouts);
    	timeouts.ReadIntervalTimeout = 0;
    	timeouts.ReadTotalTimeoutMultiplier = 0;
    	timeouts.ReadTotalTimeoutConstant = 1000;
    	timeouts.WriteTotalTimeoutMultiplier = 0;
    	timeouts.WriteTotalTimeoutConstant = 0;
    	SetCommTimeouts(g_hCom, &timeouts);
    
    	//设置串口配置信息
    	DCB dcb;
    
    	int nBaud = 9600;
    	dcb.DCBlength = sizeof(DCB);
    	dcb.BaudRate = nBaud;//波特率为6000
    	dcb.Parity = 0;//校验方式为无校验
    	dcb.ByteSize = 8;//数据位为8位
    	dcb.StopBits = ONESTOPBIT;//停止位为1位
    
    
    							  //设置读写缓冲区大小
    	static const int g_nZhenMax = 32768;
        DWORD wCount = 6 ;
    
    	//清空缓冲
    	PurgeComm(g_hCom, PURGE_RXCLEAR | PURGE_TXCLEAR);
    
    
    
    
       /*
        
    	while (1) {
    		unsigned char buf[6];
    		
    		memset(buf, 0, 5);
    		DWORD nLenOut = 0;
    		if (ReadFile(g_hCom, buf, 6, &nLenOut, NULL))
    		{
    			if (nLenOut) {//成功
    						  
    					printf("%x    ", buf[0]); //1er octet?: delimiteur?de debut (caractère?: ) valeur 0x3A hexa 
    				//	start = buf[0];
    					
    					printf("%d    ", buf[1]); //2eme octet?: valeur du frein de 0 a 100
    			//		VolantFrein = buf[1];
    					
    					printf("%d    ", buf[2]); //3eme octet?: valeur de accelerateur de 0 a 100
    			//		VolantAcc = buf[2];	
    									
    					buf[3]=buf[3]>>7; 					
    					printf("%d", buf[3]);    //4eme octet?: angle volant?voir explication apres  
    			//		VolantAngle = buf[3]; 					
    					printf("   "); 
    					
    					printf("%d    ", buf[4]); //5eme octet?: activation des boutons?
                        Button= (int) buf[4];
    
    					
    					printf("%0x    ", buf[5]);  //6eme octet?: delimiteur de fin 0x0D
    				//	fin = buf[5];
    				
    			
    				printf("***********\n");
    
    			}
    
    			else//超时
    				printf("time out\n");
    		}
    		else
    			//失败
    			printf("fail to read\n");
    
    	} 
    	
    	
    */
    	//CloseHandle(g_hCom);   
    	
    //#]
}

AcquisitionUserEnv::out_C* AcquisitionUserEnv::getOut() const {
    return (AcquisitionUserEnv::out_C*) &out;
}

AcquisitionUserEnv::out_C* AcquisitionUserEnv::get_out() const {
    return (AcquisitionUserEnv::out_C*) &out;
}

int AcquisitionUserEnv::getButton() {
    return Button;
}

void AcquisitionUserEnv::setButton(int p_Button) {
    NOTIFY_OPERATION(setButton, setButton(int), 1, _MonPkg_AcquisitionUserEnv_setButton_SERIALIZE);
    //#[ operation setButton(int)
    Button = p_Button;
    NOTIFY_SET_OPERATION;
    //#]
}

int AcquisitionUserEnv::getVolantAcc() {
    return VolantAcc;
}

void AcquisitionUserEnv::setVolantAcc(int p_VolantAcc) {
    VolantAcc = p_VolantAcc;
}

int AcquisitionUserEnv::getVolantAngle() {
    return VolantAngle;
}

void AcquisitionUserEnv::setVolantAngle(int p_VolantAngle) {
    VolantAngle = p_VolantAngle;
}

int AcquisitionUserEnv::getVolantFrein() {
    return VolantFrein;
}

void AcquisitionUserEnv::setVolantFrein(int p_VolantFrein) {
    VolantFrein = p_VolantFrein;
}

bool AcquisitionUserEnv::getBReadStat() {
    return bReadStat;
}

void AcquisitionUserEnv::setBReadStat(bool p_bReadStat) {
    bReadStat = p_bReadStat;
}

HANDLE AcquisitionUserEnv::getG_hCom() {
    return g_hCom;
}

void AcquisitionUserEnv::setG_hCom(HANDLE p_g_hCom) {
    g_hCom = p_g_hCom;
}

int AcquisitionUserEnv::getPeriod() {
    return period;
}

void AcquisitionUserEnv::setPeriod(int p_period) {
    period = p_period;
}

bool AcquisitionUserEnv::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void AcquisitionUserEnv::initRelations() {
    if (get_out() != NULL) {
        get_out()->connectAcquisitionUserEnv(this);
    }
}

AcquisitionUserEnv::AcquisitionUserEnv(IOxfActive* theActiveContext) : Button(2), acc(0), alpha(0), period(200), volant(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(AcquisitionUserEnv, AcquisitionUserEnv(), 0, _MonPkg_AcquisitionUserEnv_AcquisitionUserEnv_SERIALIZE);
    setActiveContext(this, true);
    initRelations();
    initStatechart();
}

int AcquisitionUserEnv::getAcc() {
    return acc;
}

void AcquisitionUserEnv::setAcc(int p_acc) {
    acc = p_acc;
    NOTIFY_SET_OPERATION;
}

int AcquisitionUserEnv::getAlpha() {
    return alpha;
}

void AcquisitionUserEnv::setAlpha(int p_alpha) {
    alpha = p_alpha;
    NOTIFY_SET_OPERATION;
}

bool AcquisitionUserEnv::getVolant() {
    return volant;
}

void AcquisitionUserEnv::setVolant(bool p_volant) {
    volant = p_volant;
}

void AcquisitionUserEnv::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    volant_reel_subState = OMNonState;
    volant_reel_timeout = NULL;
}

void AcquisitionUserEnv::cancelTimeouts() {
    cancel(volant_reel_timeout);
}

bool AcquisitionUserEnv::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(volant_reel_timeout == arg)
        {
            volant_reel_timeout = NULL;
            res = true;
        }
    return res;
}

void AcquisitionUserEnv::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.state_37");
        pushNullTransition();
        rootState_subState = state_37;
        rootState_active = state_37;
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus AcquisitionUserEnv::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State state_35
        case state_35:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == volant_reel_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(volant_reel_timeout);
                            NOTIFY_STATE_EXITED("ROOT.volant_reel.state_35");
                            //#[ transition 1 
                            GetData();
                            if (Button==0) OUT_PORT(out)->GEN(evButtonZero);
                            if (Button==1) OUT_PORT(out)->GEN(evButtonDroit);
                            if (Button==2) OUT_PORT(out)->GEN(evButtonGauche);
                            if (Button==3) OUT_PORT(out)->GEN(evButtonDeux);
                            if (VolantAngle==0)  OUT_PORT(out)->GEN(evTournerD);
                            if (VolantAngle==1)  OUT_PORT(out)->GEN(evTournerG);
                            if (VolantAcc>5) OUT_PORT(out)->GEN(evAccelerer(VolantAcc));
                            if (VolantFrein>5) OUT_PORT(out)->GEN(evFreiner(VolantFrein));
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.volant_reel.state_35");
                            volant_reel_subState = state_35;
                            rootState_active = state_35;
                            volant_reel_timeout = scheduleTimeout(50, "ROOT.volant_reel.state_35");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State state_37
        case state_37:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 3 
                    if(volant==true)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_37");
                            volant_reel_entDef();
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_37");
                            NOTIFY_STATE_ENTERED("ROOT.simulation");
                            rootState_subState = simulation;
                            rootState_active = simulation;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void AcquisitionUserEnv::volant_reel_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.volant_reel");
    rootState_subState = volant_reel;
    NOTIFY_TRANSITION_STARTED("0");
    //#[ transition 0 
    Run();
    //#]
    NOTIFY_STATE_ENTERED("ROOT.volant_reel.state_35");
    volant_reel_subState = state_35;
    rootState_active = state_35;
    volant_reel_timeout = scheduleTimeout(50, "ROOT.volant_reel.state_35");
    NOTIFY_TRANSITION_TERMINATED("0");
}

void AcquisitionUserEnv::volant_reel_exit() {
    // State state_35
    if(volant_reel_subState == state_35)
        {
            cancel(volant_reel_timeout);
            NOTIFY_STATE_EXITED("ROOT.volant_reel.state_35");
        }
    volant_reel_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.volant_reel");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAcquisitionUserEnv::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("period", x2String(myReal->period));
    aomsAttributes->addAttribute("Button", x2String(myReal->Button));
    aomsAttributes->addAttribute("VolantAcc", x2String(myReal->VolantAcc));
    aomsAttributes->addAttribute("g_hCom", UNKNOWN2STRING(myReal->g_hCom));
    aomsAttributes->addAttribute("bReadStat", x2String(myReal->bReadStat));
    aomsAttributes->addAttribute("VolantAngle", x2String(myReal->VolantAngle));
    aomsAttributes->addAttribute("VolantFrein", x2String(myReal->VolantFrein));
    aomsAttributes->addAttribute("acc", x2String(myReal->acc));
    aomsAttributes->addAttribute("volant", x2String(myReal->volant));
    aomsAttributes->addAttribute("alpha", x2String(myReal->alpha));
}

void OMAnimatedAcquisitionUserEnv::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AcquisitionUserEnv::volant_reel:
        {
            volant_reel_serializeStates(aomsState);
        }
        break;
        case AcquisitionUserEnv::state_37:
        {
            state_37_serializeStates(aomsState);
        }
        break;
        case AcquisitionUserEnv::simulation:
        {
            simulation_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAcquisitionUserEnv::volant_reel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.volant_reel");
    if(myReal->volant_reel_subState == AcquisitionUserEnv::state_35)
        {
            state_35_serializeStates(aomsState);
        }
}

void OMAnimatedAcquisitionUserEnv::state_35_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.volant_reel.state_35");
}

void OMAnimatedAcquisitionUserEnv::state_37_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_37");
}

void OMAnimatedAcquisitionUserEnv::simulation_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.simulation");
}
//#]

IMPLEMENT_REACTIVE_META_P(AcquisitionUserEnv, _MonPkg, _MonPkg, false, OMAnimatedAcquisitionUserEnv)

IMPLEMENT_META_OP(OMAnimatedAcquisitionUserEnv, _MonPkg_AcquisitionUserEnv_setAcc_int, "setAcc", FALSE, "setAcc(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg_AcquisitionUserEnv_setAcc_int, AcquisitionUserEnv, setAcc(p_acc), NO_OP())

IMPLEMENT_META_OP(OMAnimatedAcquisitionUserEnv, _MonPkg_AcquisitionUserEnv_setAlpha_int, "setAlpha", FALSE, "setAlpha(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg_AcquisitionUserEnv_setAlpha_int, AcquisitionUserEnv, setAlpha(p_alpha), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\AcquisitionUserEnv.cpp
*********************************************************************/
