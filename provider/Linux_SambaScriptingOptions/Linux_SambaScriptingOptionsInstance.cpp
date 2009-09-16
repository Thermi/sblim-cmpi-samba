// =======================================================================
// Linux_SambaScriptingOptionsInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#include "Linux_SambaScriptingOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaScriptingOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaScriptingOptionsInstance::Linux_SambaScriptingOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstance::Linux_SambaScriptingOptionsInstance(
    const Linux_SambaScriptingOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstance::Linux_SambaScriptingOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaScriptingOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Description");
    if ( ! cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("ElementName");
    if ( ! cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }

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

    cmpiData = aCmpiInstance.getProperty("setPrimaryGroupScript");
    if ( ! cmpiData.isNullValue()){
      CmpiString setPrimaryGroupScript = cmpiData;
      setsetPrimaryGroupScript(setPrimaryGroupScript.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstance::
   ~Linux_SambaScriptingOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstance&
  Linux_SambaScriptingOptionsInstance::operator=(
    const Linux_SambaScriptingOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaScriptingOptionsInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.Caption) {
  	  
  	  cmpiInstance.setProperty(
  	    "Caption",
  	    CmpiData(m_Caption));
  	}

  	if (isSet.Description) {
  	  
  	  cmpiInstance.setProperty(
  	    "Description",
  	    CmpiData(m_Description));
  	}

  	if (isSet.ElementName) {
  	  
  	  cmpiInstance.setProperty(
  	    "ElementName",
  	    CmpiData(m_ElementName));
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

  	if (isSet.setPrimaryGroupScript) {
  	  
  	  cmpiInstance.setProperty(
  	    "setPrimaryGroupScript",
  	    CmpiData(m_setPrimaryGroupScript));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaScriptingOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsInstanceName&
  Linux_SambaScriptingOptionsInstance::getInstanceName() const {

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
  Linux_SambaScriptingOptionsInstance::setInstanceName(
    const Linux_SambaScriptingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setCaption(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Caption) {
      delete [] m_Caption;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Caption = valueP;
    } else {
      m_Caption = aValueP;
    }
    
    isSet.Caption = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaScriptingOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setDescription(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Description) {
      delete [] m_Description;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Description = valueP;
    } else {
      m_Description = aValueP;
    }
    
    isSet.Description = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaScriptingOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setElementName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.ElementName) {
      delete [] m_ElementName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_ElementName = valueP;
    } else {
      m_ElementName = aValueP;
    }
    
    isSet.ElementName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaScriptingOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // addGroupScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsInstance::isaddGroupScriptSet() const {
    return isSet.addGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setaddGroupScript(
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
  Linux_SambaScriptingOptionsInstance::getaddGroupScript() const {
    
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
  Linux_SambaScriptingOptionsInstance::isaddPrinterCommandSet() const {
    return isSet.addPrinterCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setaddPrinterCommand(
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
  Linux_SambaScriptingOptionsInstance::getaddPrinterCommand() const {
    
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
  Linux_SambaScriptingOptionsInstance::isaddShareCommandSet() const {
    return isSet.addShareCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setaddShareCommand(
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
  Linux_SambaScriptingOptionsInstance::getaddShareCommand() const {
    
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
  Linux_SambaScriptingOptionsInstance::isaddUserScriptSet() const {
    return isSet.addUserScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setaddUserScript(
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
  Linux_SambaScriptingOptionsInstance::getaddUserScript() const {
    
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
  Linux_SambaScriptingOptionsInstance::isaddUsertoGroupScriptSet() const {
    return isSet.addUsertoGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setaddUsertoGroupScript(
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
  Linux_SambaScriptingOptionsInstance::getaddUsertoGroupScript() const {
    
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
  Linux_SambaScriptingOptionsInstance::isdeleteGrouprScriptSet() const {
    return isSet.deleteGrouprScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setdeleteGrouprScript(
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
  Linux_SambaScriptingOptionsInstance::getdeleteGrouprScript() const {
    
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
  Linux_SambaScriptingOptionsInstance::isdeleteUserScriptSet() const {
    return isSet.deleteUserScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setdeleteUserScript(
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
  Linux_SambaScriptingOptionsInstance::getdeleteUserScript() const {
    
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
  Linux_SambaScriptingOptionsInstance::isdeleteUserfromGroupScriptSet() const {
    return isSet.deleteUserfromGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setdeleteUserfromGroupScript(
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
  Linux_SambaScriptingOptionsInstance::getdeleteUserfromGroupScript() const {
    
    if ( ! isSet.deleteUserfromGroupScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "deleteUserfromGroupScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_deleteUserfromGroupScript;

  }
       
  //----------------------------------------------------------------------------
  // setPrimaryGroupScript related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingOptionsInstance::issetPrimaryGroupScriptSet() const {
    return isSet.setPrimaryGroupScript;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::setsetPrimaryGroupScript(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.setPrimaryGroupScript) {
      delete [] m_setPrimaryGroupScript;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_setPrimaryGroupScript = valueP;
    } else {
      m_setPrimaryGroupScript = aValueP;
    }
    
    isSet.setPrimaryGroupScript = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaScriptingOptionsInstance::getsetPrimaryGroupScript() const {
    
    if ( ! isSet.setPrimaryGroupScript) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "setPrimaryGroupScript",
        "Linux_SambaScriptingOptions");
   	}


    return m_setPrimaryGroupScript;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Caption = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
    isSet.addGroupScript = 0;
    isSet.addPrinterCommand = 0;
    isSet.addShareCommand = 0;
    isSet.addUserScript = 0;
    isSet.addUsertoGroupScript = 0;
    isSet.deleteGrouprScript = 0;
    isSet.deleteUserScript = 0;
    isSet.deleteUserfromGroupScript = 0;
    isSet.setPrimaryGroupScript = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaScriptingOptionsInstance::init(
    const Linux_SambaScriptingOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
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
   	
    if (anOriginal.issetPrimaryGroupScriptSet()) {
      const char* setPrimaryGroupScriptOriginal = anOriginal.getsetPrimaryGroupScript();
      setsetPrimaryGroupScript(setPrimaryGroupScriptOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstance::reset() {
   	
  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

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

  	if (isSet.setPrimaryGroupScript) {
  	  delete(m_setPrimaryGroupScript);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaScriptingOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstanceEnumerationElement::Linux_SambaScriptingOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstanceEnumerationElement::~Linux_SambaScriptingOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaScriptingOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstanceEnumeration::Linux_SambaScriptingOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstanceEnumeration::Linux_SambaScriptingOptionsInstanceEnumeration(
    const Linux_SambaScriptingOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingOptionsInstanceEnumeration::~Linux_SambaScriptingOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaScriptingOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaScriptingOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaScriptingOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsInstance&  
  Linux_SambaScriptingOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaScriptingOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsInstance&
  Linux_SambaScriptingOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaScriptingOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingOptionsInstanceEnumeration::addElement(
    const Linux_SambaScriptingOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaScriptingOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaScriptingOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaScriptingOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaScriptingOptionsInstance(anInstance);
  	}

  }
  
}
