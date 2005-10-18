/**
 *  Linux_SambaGlobalBrowseOptionsInstance.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#include "Linux_SambaGlobalBrowseOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalBrowseOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalBrowseOptionsInstance::
   Linux_SambaGlobalBrowseOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalBrowseOptionsInstance::
   Linux_SambaGlobalBrowseOptionsInstance
   (const Linux_SambaGlobalBrowseOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalBrowseOptionsInstance::
   Linux_SambaGlobalBrowseOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalBrowseOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Browsable");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Browsable = cmpiData;
      setBrowsable(Browsable);
    }
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("Description");
    if(!cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }
    
    cmpiData = inst.getProperty("DomainMaster");
    if(!cmpiData.isNullValue()){
      CMPIUint16 DomainMaster = cmpiData;
      setDomainMaster(DomainMaster);
    }
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalBrowseOptionsInstance::
   ~Linux_SambaGlobalBrowseOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalBrowseOptionsInstance&
   Linux_SambaGlobalBrowseOptionsInstance::operator=
   (const Linux_SambaGlobalBrowseOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalBrowseOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Browsable){
  	  cmpiInstance.setProperty("Browsable",CmpiBooleanData(m_Browsable));
  	}

  	if(isSet.Caption){
  	  cmpiInstance.setProperty("Caption",CmpiData(m_Caption));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.DomainMaster){
  	  cmpiInstance.setProperty("DomainMaster",CmpiData(m_DomainMaster));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalBrowseOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalBrowseOptionsInstanceName&
    Linux_SambaGlobalBrowseOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalBrowseOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalBrowseOptionsInstance::setInstanceName(
   const Linux_SambaGlobalBrowseOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Browsable related methods
  unsigned int Linux_SambaGlobalBrowseOptionsInstance::isBrowsableSet() const{
    return isSet.Browsable;
  }
  void Linux_SambaGlobalBrowseOptionsInstance::
   setBrowsable(const CMPIBoolean val){
    m_Browsable = val;
    isSet.Browsable=1;
  }       
  const CMPIBoolean Linux_SambaGlobalBrowseOptionsInstance::
   getBrowsable() const{
    
    if(!isSet.Browsable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Browsable not set");
   	   	
    return m_Browsable;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGlobalBrowseOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGlobalBrowseOptionsInstance::
   setCaption(const char* val, int makeCopy){
    if (isSet.Caption) {
      delete []m_Caption;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Caption = tmpval;
    } else {
      m_Caption = val;
    }
    isSet.Caption=1;
  }       
  const char* Linux_SambaGlobalBrowseOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaGlobalBrowseOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGlobalBrowseOptionsInstance::
   setDescription(const char* val, int makeCopy){
    if (isSet.Description) {
      delete []m_Description;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Description = tmpval;
    } else {
      m_Description = val;
    }
    isSet.Description=1;
  }       
  const char* Linux_SambaGlobalBrowseOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //DomainMaster related methods
  unsigned int Linux_SambaGlobalBrowseOptionsInstance::isDomainMasterSet() const{
    return isSet.DomainMaster;
  }
  void Linux_SambaGlobalBrowseOptionsInstance::
   setDomainMaster(const CMPIUint16 val){
    m_DomainMaster = val;
    isSet.DomainMaster=1;
  }       
  const CMPIUint16 Linux_SambaGlobalBrowseOptionsInstance::
   getDomainMaster() const{
    
    if(!isSet.DomainMaster)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DomainMaster not set");
   	   	
    return m_DomainMaster;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGlobalBrowseOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGlobalBrowseOptionsInstance::
   setElementName(const char* val, int makeCopy){
    if (isSet.ElementName) {
      delete []m_ElementName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ElementName = tmpval;
    } else {
      m_ElementName = val;
    }
    isSet.ElementName=1;
  }       
  const char* Linux_SambaGlobalBrowseOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalBrowseOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Browsable=0;   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.DomainMaster=0;   	
    isSet.ElementName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalBrowseOptionsInstance::init
   (const Linux_SambaGlobalBrowseOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isBrowsableSet()){
      const CMPIBoolean BrowsableOriginal=original.getBrowsable();
      setBrowsable(BrowsableOriginal);
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isDomainMasterSet()){
      const CMPIUint16 DomainMasterOriginal=original.getDomainMaster();
      setDomainMaster(DomainMasterOriginal);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalBrowseOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement::
   Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement::
   ~Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalBrowseOptionsInstanceEnumeration::
   Linux_SambaGlobalBrowseOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalBrowseOptionsInstanceEnumeration::
   Linux_SambaGlobalBrowseOptionsInstanceEnumeration(
   const Linux_SambaGlobalBrowseOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalBrowseOptionsInstanceEnumeration::
   ~Linux_SambaGlobalBrowseOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalBrowseOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalBrowseOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalBrowseOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalBrowseOptionsInstance&  
   Linux_SambaGlobalBrowseOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalBrowseOptionsInstance&
   Linux_SambaGlobalBrowseOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalBrowseOptionsInstanceEnumeration::addElement
   (const Linux_SambaGlobalBrowseOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalBrowseOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalBrowseOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalBrowseOptionsInstance(elementP);
  	}
  };  
}
 
