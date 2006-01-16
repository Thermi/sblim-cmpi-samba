/**
 *  Linux_SambaGlobalProtocolOptionsInstance.h
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


#ifndef Linux_SambaGlobalProtocolOptionsInstance_h
#define Linux_SambaGlobalProtocolOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsInstance {
  public:
       Linux_SambaGlobalProtocolOptionsInstance();
  	
       Linux_SambaGlobalProtocolOptionsInstance
  	    (const Linux_SambaGlobalProtocolOptionsInstance& original);
  	   
       Linux_SambaGlobalProtocolOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalProtocolOptionsInstance();
       
       Linux_SambaGlobalProtocolOptionsInstance& operator=
  	    (const Linux_SambaGlobalProtocolOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalProtocolOptionsInstanceName& val);        
       const Linux_SambaGlobalProtocolOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAclCompatibilitySet() const;
       void setAclCompatibility(const CMPIUint8 val);
       const CMPIUint8 getAclCompatibility() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isEASupportSet() const;
       void setEASupport(const CMPIBoolean val);
       const CMPIBoolean getEASupport() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

       unsigned int isNTACLSupportSet() const;
       void setNTACLSupport(const CMPIBoolean val);
       const CMPIBoolean getNTACLSupport() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalProtocolOptionsInstance& original);
       void reset();
       
       Linux_SambaGlobalProtocolOptionsInstanceName m_instanceName;
       CMPIUint8 m_AclCompatibility;
       const char* m_Caption;
       const char* m_Description;
       CMPIBoolean m_EASupport;
       const char* m_ElementName;
       CMPIBoolean m_NTACLSupport;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int AclCompatibility:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int EASupport:1;
         unsigned int ElementName:1;
         unsigned int NTACLSupport:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement{
  	Linux_SambaGlobalProtocolOptionsInstance* m_elementP;
  	Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();
  	~Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalProtocolOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalProtocolOptionsInstanceEnumeration();
  	  
  	  Linux_SambaGlobalProtocolOptionsInstanceEnumeration(
  	   const Linux_SambaGlobalProtocolOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalProtocolOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalProtocolOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalProtocolOptionsInstance& elementP);
  };
}
#endif
