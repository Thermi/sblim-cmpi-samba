/**
 *  Linux_SambaShareSecurityForShareInstance.h
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


#ifndef Linux_SambaShareSecurityForShareInstance_h
#define Linux_SambaShareSecurityForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareInstance {
  public:
       Linux_SambaShareSecurityForShareInstance();
  	
       Linux_SambaShareSecurityForShareInstance
  	    (const Linux_SambaShareSecurityForShareInstance& original);
  	   
       Linux_SambaShareSecurityForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityForShareInstance();
       
       Linux_SambaShareSecurityForShareInstance& operator=
  	    (const Linux_SambaShareSecurityForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityForShareInstanceName& val);        
       const Linux_SambaShareSecurityForShareInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityForShareInstance& original);
       void reset();
       
       Linux_SambaShareSecurityForShareInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityForShareInstanceEnumerationElement{
  	Linux_SambaShareSecurityForShareInstance* m_elementP;
  	Linux_SambaShareSecurityForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForShareInstanceEnumerationElement();
  	~Linux_SambaShareSecurityForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityForShareInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityForShareInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityForShareInstanceEnumeration(
  	   const Linux_SambaShareSecurityForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityForShareInstance& elementP);
  };
}
#endif

