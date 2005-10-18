/**
 *  Linux_SambaCommonSecurityOptionsManualInstance.h
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


#ifndef Linux_SambaCommonSecurityOptionsManualInstance_h
#define Linux_SambaCommonSecurityOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsManualInstance {
  public:
       Linux_SambaCommonSecurityOptionsManualInstance();
  	
       Linux_SambaCommonSecurityOptionsManualInstance
  	    (const Linux_SambaCommonSecurityOptionsManualInstance& original);
  	   
       Linux_SambaCommonSecurityOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityOptionsManualInstance();
       
       Linux_SambaCommonSecurityOptionsManualInstance& operator=
  	    (const Linux_SambaCommonSecurityOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityOptionsInstanceName& val);        
       const Linux_SambaCommonSecurityOptionsInstanceName&
        getInstanceName() const;

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
       void init(const Linux_SambaCommonSecurityOptionsManualInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityOptionsInstanceName m_instanceName;
       CMPIBoolean m_GuestOK;
       CMPIBoolean m_GuestOnly;
       const char* m_HostsAllow;
       const char* m_HostsDeny;
       CMPIBoolean m_ReadOnly;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int GuestOK:1;
         unsigned int GuestOnly:1;
         unsigned int HostsAllow:1;
         unsigned int HostsDeny:1;
         unsigned int ReadOnly:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement{
  	Linux_SambaCommonSecurityOptionsManualInstance* m_elementP;
  	Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration(
  	   const Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityOptionsManualInstance& elementP);
  };
}
#endif

