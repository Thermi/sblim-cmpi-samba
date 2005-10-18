/**
 *  Linux_SambaCommonSecurityForShareInstance.h
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


#ifndef Linux_SambaCommonSecurityForShareInstance_h
#define Linux_SambaCommonSecurityForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForShareInstance {
  public:
       Linux_SambaCommonSecurityForShareInstance();
  	
       Linux_SambaCommonSecurityForShareInstance
  	    (const Linux_SambaCommonSecurityForShareInstance& original);
  	   
       Linux_SambaCommonSecurityForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForShareInstance();
       
       Linux_SambaCommonSecurityForShareInstance& operator=
  	    (const Linux_SambaCommonSecurityForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForShareInstanceName& val);        
       const Linux_SambaCommonSecurityForShareInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForShareInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForShareInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForShareInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForShareInstance* m_elementP;
  	Linux_SambaCommonSecurityForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForShareInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForShareInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForShareInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForShareInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForShareInstance& elementP);
  };
}
#endif

