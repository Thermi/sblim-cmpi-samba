/**
 *  Linux_SambaGlobalProtocolOptionsManualInstance.h
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


#ifndef Linux_SambaGlobalProtocolOptionsManualInstance_h
#define Linux_SambaGlobalProtocolOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsManualInstance {
  public:
       Linux_SambaGlobalProtocolOptionsManualInstance();
  	
       Linux_SambaGlobalProtocolOptionsManualInstance
  	    (const Linux_SambaGlobalProtocolOptionsManualInstance& original);
  	   
       Linux_SambaGlobalProtocolOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalProtocolOptionsManualInstance();
       
       Linux_SambaGlobalProtocolOptionsManualInstance& operator=
  	    (const Linux_SambaGlobalProtocolOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalProtocolOptionsInstanceName& val);        
       const Linux_SambaGlobalProtocolOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAclCompatibilitySet() const;
       void setAclCompatibility(const CMPIUint8 val);
       const CMPIUint8 getAclCompatibility() const;

       unsigned int isEASupportSet() const;
       void setEASupport(const CMPIBoolean val);
       const CMPIBoolean getEASupport() const;

       unsigned int isNTACLSupportSet() const;
       void setNTACLSupport(const CMPIBoolean val);
       const CMPIBoolean getNTACLSupport() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolOptionsManualInstance& original);
       void reset();
       
       Linux_SambaGlobalProtocolOptionsInstanceName m_instanceName;
       CMPIUint8 m_AclCompatibility;
       CMPIBoolean m_EASupport;
       CMPIBoolean m_NTACLSupport;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int AclCompatibility:1;
         unsigned int EASupport:1;
         unsigned int NTACLSupport:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement{
  	Linux_SambaGlobalProtocolOptionsManualInstance* m_elementP;
  	Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();
  	~Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration(
  	   const Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalProtocolOptionsManualInstance& elementP);
  };
}
#endif

