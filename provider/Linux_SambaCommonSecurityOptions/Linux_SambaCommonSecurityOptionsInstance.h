/**
 *  Linux_SambaCommonSecurityOptionsInstance.h
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


#ifndef Linux_SambaCommonSecurityOptionsInstance_h
#define Linux_SambaCommonSecurityOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsInstance {
  public:
       Linux_SambaCommonSecurityOptionsInstance();
  	
       Linux_SambaCommonSecurityOptionsInstance
  	    (const Linux_SambaCommonSecurityOptionsInstance& original);
  	   
       Linux_SambaCommonSecurityOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityOptionsInstance();
       
       Linux_SambaCommonSecurityOptionsInstance& operator=
  	    (const Linux_SambaCommonSecurityOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityOptionsInstanceName& val);        
       const Linux_SambaCommonSecurityOptionsInstanceName&
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

       unsigned int isGuestOKSet() const;
       void setGuestOK(const CMPIBoolean val);
       const CMPIBoolean getGuestOK() const;

       unsigned int isGuestOnlySet() const;
       void setGuestOnly(const CMPIBoolean val);
       const CMPIBoolean getGuestOnly() const;

       unsigned int isHostsAllowSet() const;
       void setHostsAllow(const char* val, int makeCopy = 1);
       const char* getHostsAllow() const;

       unsigned int isHostsDenySet() const;
       void setHostsDeny(const char* val, int makeCopy = 1);
       const char* getHostsDeny() const;

       unsigned int isReadOnlySet() const;
       void setReadOnly(const CMPIBoolean val);
       const CMPIBoolean getReadOnly() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityOptionsInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityOptionsInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       CMPIBoolean m_GuestOK;
       CMPIBoolean m_GuestOnly;
       const char* m_HostsAllow;
       const char* m_HostsDeny;
       CMPIBoolean m_ReadOnly;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int GuestOK:1;
         unsigned int GuestOnly:1;
         unsigned int HostsAllow:1;
         unsigned int HostsDeny:1;
         unsigned int ReadOnly:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityOptionsInstanceEnumerationElement{
  	Linux_SambaCommonSecurityOptionsInstance* m_elementP;
  	Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityOptionsInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityOptionsInstanceEnumeration(
  	   const Linux_SambaCommonSecurityOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityOptionsInstance& elementP);
  };
}
#endif

