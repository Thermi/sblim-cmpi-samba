/**
 *  Linux_SambaShareProtocolOptionsManualInstance.h
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


#ifndef Linux_SambaShareProtocolOptionsManualInstance_h
#define Linux_SambaShareProtocolOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareProtocolOptionsManualInstance {
  public:
       Linux_SambaShareProtocolOptionsManualInstance();
  	
       Linux_SambaShareProtocolOptionsManualInstance
  	    (const Linux_SambaShareProtocolOptionsManualInstance& original);
  	   
       Linux_SambaShareProtocolOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareProtocolOptionsManualInstance();
       
       Linux_SambaShareProtocolOptionsManualInstance& operator=
  	    (const Linux_SambaShareProtocolOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareProtocolOptionsInstanceName& val);        
       const Linux_SambaShareProtocolOptionsInstanceName&
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
       void init(const Linux_SambaShareProtocolOptionsManualInstance& original);
       void reset();
       
       Linux_SambaShareProtocolOptionsInstanceName m_instanceName;
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
  
  
  struct Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement{
  	Linux_SambaShareProtocolOptionsManualInstance* m_elementP;
  	Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();
  	~Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareProtocolOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareProtocolOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaShareProtocolOptionsManualInstanceEnumeration(
  	   const Linux_SambaShareProtocolOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareProtocolOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareProtocolOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareProtocolOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareProtocolOptionsManualInstance& elementP);
  };
}
#endif

