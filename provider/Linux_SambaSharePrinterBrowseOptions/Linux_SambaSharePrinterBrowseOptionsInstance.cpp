/**
 *  Linux_SambaSharePrinterBrowseOptionsInstance.cpp
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


#include "Linux_SambaSharePrinterBrowseOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaSharePrinterBrowseOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaSharePrinterBrowseOptionsInstance::
   Linux_SambaSharePrinterBrowseOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseOptionsInstance::
   Linux_SambaSharePrinterBrowseOptionsInstance
   (const Linux_SambaSharePrinterBrowseOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaSharePrinterBrowseOptionsInstance::
   Linux_SambaSharePrinterBrowseOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaSharePrinterBrowseOptionsInstanceName(cop));
    
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
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaSharePrinterBrowseOptionsInstance::
   ~Linux_SambaSharePrinterBrowseOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseOptionsInstance&
   Linux_SambaSharePrinterBrowseOptionsInstance::operator=
   (const Linux_SambaSharePrinterBrowseOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaSharePrinterBrowseOptionsInstance::
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

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaSharePrinterBrowseOptionsInstanceName&
    Linux_SambaSharePrinterBrowseOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaSharePrinterBrowseOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaSharePrinterBrowseOptionsInstance::setInstanceName(
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Browsable related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsInstance::isBrowsableSet() const{
    return isSet.Browsable;
  }
  void Linux_SambaSharePrinterBrowseOptionsInstance::
   setBrowsable(const CMPIBoolean val){
    m_Browsable = val;
    isSet.Browsable=1;
  }       
  const CMPIBoolean Linux_SambaSharePrinterBrowseOptionsInstance::
   getBrowsable() const{
    
    if(!isSet.Browsable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Browsable not set");
   	   	
    return m_Browsable;
  }
       
  //Caption related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaSharePrinterBrowseOptionsInstance::
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
  const char* Linux_SambaSharePrinterBrowseOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaSharePrinterBrowseOptionsInstance::
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
  const char* Linux_SambaSharePrinterBrowseOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaSharePrinterBrowseOptionsInstance::
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
  const char* Linux_SambaSharePrinterBrowseOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaSharePrinterBrowseOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Browsable=0;   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseOptionsInstance::init
   (const Linux_SambaSharePrinterBrowseOptionsInstance& original){   	
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
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaSharePrinterBrowseOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement::
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement::
   ~Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration(
   const Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::
   ~Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaSharePrinterBrowseOptionsInstance&  
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseOptionsInstance&
   Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseOptionsInstance(elementP);
  	}
  };  
}
 
