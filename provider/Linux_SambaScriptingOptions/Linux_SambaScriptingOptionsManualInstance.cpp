// =======================================================================
// Linux_SambaScriptingOptionsManualInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#include "Linux_SambaScriptingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaScriptingOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaScriptingOptionsManualInstance::Linux_SambaScriptingOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstance::Linux_SambaScriptingOptionsManualInstance(
    const Linux_SambaScriptingOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstance::Linux_SambaScriptingOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaScriptingOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("addGroupScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString addGroupScript = cmpiData;
      setaddGroupScript(addGroupScript.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("addPrinterCommand");
    if ( ! cmpiData.isNullValue()){
      CmpiString addPrinterCommand = cmpiData;
      setaddPrinterCommand(addPrinterCommand.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("addShareCommand");
    if ( ! cmpiData.isNullValue()){
      CmpiString addShareCommand = cmpiData;
      setaddShareCommand(addShareCommand.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("addUserScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString addUserScript = cmpiData;
      setaddUserScript(addUserScript.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("addUsertoGroupScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString addUsertoGroupScript = cmpiData;
      setaddUsertoGroupScript(addUsertoGroupScript.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("deleteGrouprScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString deleteGrouprScript = cmpiData;
      setdeleteGrouprScript(deleteGrouprScript.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("deleteUserScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString deleteUserScript = cmpiData;
      setdeleteUserScript(deleteUserScript.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("deleteUserfromGroupScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString deleteUserfromGroupScript = cmpiData;
      setdeleteUserfromGroupScript(deleteUserfromGroupScript.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstance::
   ~Linux_SambaScriptingOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstance&
  Linux_SambaScriptingOptionsManualInstance::operator=(
    const Linux_SambaScriptingOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaScriptingOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.addGroupScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "addGroupScript",
  	    CmpiData(m_addGroupScript));
  	}

  	if (isSet.addPrinterCommand) {
  	  
  	  cmpiInstance.setProperty(
  	    "addPrinterCommand",
  	    CmpiData(m_addPrinterCommand));
  	}

  	if (isSet.addShareCommand) {
  	  
  	  cmpiInstance.setProperty(
  	    "addShareCommand",
  	    CmpiData(m_addShareCommand));
  	}

  	if (isSet.addUserScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "addUserScript",
  	    CmpiData(m_addUserScript));
  	}

  	if (isSet.addUsertoGroupScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "addUsertoGroupScript",
  	    CmpiData(m_addUsertoGroupScript));
  	}

  	if (isSet.deleteGrouprScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "deleteGrouprScript",
  	    CmpiData(m_deleteGrouprScript));
  	}

  	if (isSet.deleteUserScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "deleteUserScript",
  	    CmpiData(m_deleteUserScript));
  	}

  	if (isSet.deleteUserfromGroupScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "deleteUserfromGroupScript",
  	    CmpiData(m_deleteUserfromGroupScript));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaScriptingOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsInstanceName&
  Linux_SambaScriptingOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaScriptingOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setInstanceName(
    const Linux_SambaScriptingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // addGroupScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isaddGroupScriptSet() const {
    return isSet.addGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setaddGroupScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.addGroupScript) {
      delete [] m_addGroupScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_addGroupScript = valueP;
    } else {
      m_addGroupScript = aValueP;
    }
    
    isSet.addGroupScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getaddGroupScript() const {
    
    if ( ! isSet.addGroupScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "addGroupScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_addGroupScript;

  }
       
  //----------------------------------------------------------------------------
  // addPrinterCommand related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isaddPrinterCommandSet() const {
    return isSet.addPrinterCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setaddPrinterCommand(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.addPrinterCommand) {
      delete [] m_addPrinterCommand;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_addPrinterCommand = valueP;
    } else {
      m_addPrinterCommand = aValueP;
    }
    
    isSet.addPrinterCommand = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getaddPrinterCommand() const {
    
    if ( ! isSet.addPrinterCommand) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "addPrinterCommand",
        "Linux_SambaScriptingOptions");
   	}


    return m_addPrinterCommand;

  }
       
  //----------------------------------------------------------------------------
  // addShareCommand related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isaddShareCommandSet() const {
    return isSet.addShareCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setaddShareCommand(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.addShareCommand) {
      delete [] m_addShareCommand;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_addShareCommand = valueP;
    } else {
      m_addShareCommand = aValueP;
    }
    
    isSet.addShareCommand = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getaddShareCommand() const {
    
    if ( ! isSet.addShareCommand) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "addShareCommand",
        "Linux_SambaScriptingOptions");
   	}


    return m_addShareCommand;

  }
       
  //----------------------------------------------------------------------------
  // addUserScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isaddUserScriptSet() const {
    return isSet.addUserScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setaddUserScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.addUserScript) {
      delete [] m_addUserScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_addUserScript = valueP;
    } else {
      m_addUserScript = aValueP;
    }
    
    isSet.addUserScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getaddUserScript() const {
    
    if ( ! isSet.addUserScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "addUserScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_addUserScript;

  }
       
  //----------------------------------------------------------------------------
  // addUsertoGroupScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isaddUsertoGroupScriptSet() const {
    return isSet.addUsertoGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setaddUsertoGroupScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.addUsertoGroupScript) {
      delete [] m_addUsertoGroupScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_addUsertoGroupScript = valueP;
    } else {
      m_addUsertoGroupScript = aValueP;
    }
    
    isSet.addUsertoGroupScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getaddUsertoGroupScript() const {
    
    if ( ! isSet.addUsertoGroupScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "addUsertoGroupScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_addUsertoGroupScript;

  }
       
  //----------------------------------------------------------------------------
  // deleteGrouprScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isdeleteGrouprScriptSet() const {
    return isSet.deleteGrouprScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setdeleteGrouprScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.deleteGrouprScript) {
      delete [] m_deleteGrouprScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_deleteGrouprScript = valueP;
    } else {
      m_deleteGrouprScript = aValueP;
    }
    
    isSet.deleteGrouprScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getdeleteGrouprScript() const {
    
    if ( ! isSet.deleteGrouprScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "deleteGrouprScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_deleteGrouprScript;

  }
       
  //----------------------------------------------------------------------------
  // deleteUserScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isdeleteUserScriptSet() const {
    return isSet.deleteUserScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setdeleteUserScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.deleteUserScript) {
      delete [] m_deleteUserScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_deleteUserScript = valueP;
    } else {
      m_deleteUserScript = aValueP;
    }
    
    isSet.deleteUserScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getdeleteUserScript() const {
    
    if ( ! isSet.deleteUserScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "deleteUserScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_deleteUserScript;

  }
       
  //----------------------------------------------------------------------------
  // deleteUserfromGroupScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsManualInstance::isdeleteUserfromGroupScriptSet() const {
    return isSet.deleteUserfromGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::setdeleteUserfromGroupScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.deleteUserfromGroupScript) {
      delete [] m_deleteUserfromGroupScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_deleteUserfromGroupScript = valueP;
    } else {
      m_deleteUserfromGroupScript = aValueP;
    }
    
    isSet.deleteUserfromGroupScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsManualInstance::getdeleteUserfromGroupScript() const {
    
    if ( ! isSet.deleteUserfromGroupScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "deleteUserfromGroupScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_deleteUserfromGroupScript;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.addGroupScript = 0;
    isSet.addPrinterCommand = 0;
    isSet.addShareCommand = 0;
    isSet.addUserScript = 0;
    isSet.addUsertoGroupScript = 0;
    isSet.deleteGrouprScript = 0;
    isSet.deleteUserScript = 0;
    isSet.deleteUserfromGroupScript = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaScriptingOptionsManualInstance::init(
    const Linux_SambaScriptingOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isaddGroupScriptSet()) {
      const char* addGroupScriptOriginal = anOriginal.getaddGroupScript();
      setaddGroupScript(addGroupScriptOriginal,1);
    }
   	
    if (anOriginal.isaddPrinterCommandSet()) {
      const char* addPrinterCommandOriginal = anOriginal.getaddPrinterCommand();
      setaddPrinterCommand(addPrinterCommandOriginal,1);
    }
   	
    if (anOriginal.isaddShareCommandSet()) {
      const char* addShareCommandOriginal = anOriginal.getaddShareCommand();
      setaddShareCommand(addShareCommandOriginal,1);
    }
   	
    if (anOriginal.isaddUserScriptSet()) {
      const char* addUserScriptOriginal = anOriginal.getaddUserScript();
      setaddUserScript(addUserScriptOriginal,1);
    }
   	
    if (anOriginal.isaddUsertoGroupScriptSet()) {
      const char* addUsertoGroupScriptOriginal = anOriginal.getaddUsertoGroupScript();
      setaddUsertoGroupScript(addUsertoGroupScriptOriginal,1);
    }
   	
    if (anOriginal.isdeleteGrouprScriptSet()) {
      const char* deleteGrouprScriptOriginal = anOriginal.getdeleteGrouprScript();
      setdeleteGrouprScript(deleteGrouprScriptOriginal,1);
    }
   	
    if (anOriginal.isdeleteUserScriptSet()) {
      const char* deleteUserScriptOriginal = anOriginal.getdeleteUserScript();
      setdeleteUserScript(deleteUserScriptOriginal,1);
    }
   	
    if (anOriginal.isdeleteUserfromGroupScriptSet()) {
      const char* deleteUserfromGroupScriptOriginal = anOriginal.getdeleteUserfromGroupScript();
      setdeleteUserfromGroupScript(deleteUserfromGroupScriptOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstance::reset() {
   	
  	if (isSet.addGroupScript) {
  	  delete(m_addGroupScript);
  	}

  	if (isSet.addPrinterCommand) {
  	  delete(m_addPrinterCommand);
  	}

  	if (isSet.addShareCommand) {
  	  delete(m_addShareCommand);
  	}

  	if (isSet.addUserScript) {
  	  delete(m_addUserScript);
  	}

  	if (isSet.addUsertoGroupScript) {
  	  delete(m_addUsertoGroupScript);
  	}

  	if (isSet.deleteGrouprScript) {
  	  delete(m_deleteGrouprScript);
  	}

  	if (isSet.deleteUserScript) {
  	  delete(m_deleteUserScript);
  	}

  	if (isSet.deleteUserfromGroupScript) {
  	  delete(m_deleteUserfromGroupScript);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaScriptingOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstanceEnumerationElement::Linux_SambaScriptingOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstanceEnumerationElement::~Linux_SambaScriptingOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaScriptingOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstanceEnumeration::Linux_SambaScriptingOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstanceEnumeration::Linux_SambaScriptingOptionsManualInstanceEnumeration(
    const Linux_SambaScriptingOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsManualInstanceEnumeration::~Linux_SambaScriptingOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaScriptingOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaScriptingOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsManualInstance&  
  Linux_SambaScriptingOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsManualInstance&
  Linux_SambaScriptingOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaScriptingOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaScriptingOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaScriptingOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaScriptingOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaScriptingOptionsManualInstance(anInstance);
  	}

  }
  
}
