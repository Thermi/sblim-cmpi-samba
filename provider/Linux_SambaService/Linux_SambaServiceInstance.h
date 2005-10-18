/**
 *  Linux_SambaServiceInstance.h
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


#ifndef Linux_SambaServiceInstance_h
#define Linux_SambaServiceInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceInstance {
  public:
       Linux_SambaServiceInstance();
  	
       Linux_SambaServiceInstance
  	    (const Linux_SambaServiceInstance& original);
  	   
       Linux_SambaServiceInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceInstance();
       
       Linux_SambaServiceInstance& operator=
  	    (const Linux_SambaServiceInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceInstanceName& val);        
       const Linux_SambaServiceInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

       unsigned int isEnabledDefaultSet() const;
       void setEnabledDefault(const CMPIUint16 val);
       const CMPIUint16 getEnabledDefault() const;

       unsigned int isEnabledStateSet() const;
       void setEnabledState(const CMPIUint16 val);
       const CMPIUint16 getEnabledState() const;

       unsigned int isInstallDateSet() const;
       void setInstallDate(const CmpiDateTime& val);
       const CmpiDateTime& getInstallDate() const;

       unsigned int isOperationalStatusSet() const;
       void setOperationalStatus(const CMPIUint16* val, unsigned const int size, int makeCopy = 1);
       const CMPIUint16* getOperationalStatus(unsigned int& size) const;

       unsigned int isOtherEnabledStateSet() const;
       void setOtherEnabledState(const char* val, int makeCopy = 1);
       const char* getOtherEnabledState() const;

       unsigned int isPrimaryOwnerContactSet() const;
       void setPrimaryOwnerContact(const char* val, int makeCopy = 1);
       const char* getPrimaryOwnerContact() const;

       unsigned int isPrimaryOwnerNameSet() const;
       void setPrimaryOwnerName(const char* val, int makeCopy = 1);
       const char* getPrimaryOwnerName() const;

       unsigned int isRequestedStateSet() const;
       void setRequestedState(const CMPIUint16 val);
       const CMPIUint16 getRequestedState() const;

       unsigned int isStartModeSet() const;
       void setStartMode(const char* val, int makeCopy = 1);
       const char* getStartMode() const;

       unsigned int isStartedSet() const;
       void setStarted(const CMPIBoolean val);
       const CMPIBoolean getStarted() const;

       unsigned int isStatusSet() const;
       void setStatus(const char* val, int makeCopy = 1);
       const char* getStatus() const;

       unsigned int isStatusDescriptionsSet() const;
       void setStatusDescriptions(const char** val, unsigned const int size, int makeCopy = 1);
       const char** getStatusDescriptions(unsigned int& size) const;

       unsigned int isTimeOfLastStateChangeSet() const;
       void setTimeOfLastStateChange(const CmpiDateTime& val);
       const CmpiDateTime& getTimeOfLastStateChange() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceInstance& original);
       void reset();
       
       Linux_SambaServiceInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       CMPIUint16 m_EnabledDefault;
       CMPIUint16 m_EnabledState;
       CmpiDateTime m_InstallDate;
       const CMPIUint16* m_OperationalStatus;
        unsigned int OperationalStatusArraySize;
       const char* m_OtherEnabledState;
       const char* m_PrimaryOwnerContact;
       const char* m_PrimaryOwnerName;
       CMPIUint16 m_RequestedState;
       const char* m_StartMode;
       CMPIBoolean m_Started;
       const char* m_Status;
       const char** m_StatusDescriptions;
        unsigned int StatusDescriptionsArraySize;
       CmpiDateTime m_TimeOfLastStateChange;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int EnabledDefault:1;
         unsigned int EnabledState:1;
         unsigned int InstallDate:1;
         unsigned int OperationalStatus:1;
         unsigned int OtherEnabledState:1;
         unsigned int PrimaryOwnerContact:1;
         unsigned int PrimaryOwnerName:1;
         unsigned int RequestedState:1;
         unsigned int StartMode:1;
         unsigned int Started:1;
         unsigned int Status:1;
         unsigned int StatusDescriptions:1;
         unsigned int TimeOfLastStateChange:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceInstanceEnumerationElement{
  	Linux_SambaServiceInstance* m_elementP;
  	Linux_SambaServiceInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceInstanceEnumerationElement();
  	~Linux_SambaServiceInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceInstanceEnumeration {
  	private:
  	  Linux_SambaServiceInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceInstanceEnumeration();
  	  
  	  Linux_SambaServiceInstanceEnumeration(
  	   const Linux_SambaServiceInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceInstance& elementP);
  };
}
#endif

