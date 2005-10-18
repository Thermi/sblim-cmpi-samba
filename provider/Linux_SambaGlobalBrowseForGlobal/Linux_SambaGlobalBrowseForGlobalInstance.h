/**
 *  Linux_SambaGlobalBrowseForGlobalInstance.h
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


#ifndef Linux_SambaGlobalBrowseForGlobalInstance_h
#define Linux_SambaGlobalBrowseForGlobalInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalInstance {
  public:
       Linux_SambaGlobalBrowseForGlobalInstance();
  	
       Linux_SambaGlobalBrowseForGlobalInstance
  	    (const Linux_SambaGlobalBrowseForGlobalInstance& original);
  	   
       Linux_SambaGlobalBrowseForGlobalInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalBrowseForGlobalInstance();
       
       Linux_SambaGlobalBrowseForGlobalInstance& operator=
  	    (const Linux_SambaGlobalBrowseForGlobalInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalBrowseForGlobalInstanceName& val);        
       const Linux_SambaGlobalBrowseForGlobalInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalBrowseForGlobalInstance& original);
       void reset();
       
       Linux_SambaGlobalBrowseForGlobalInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement{
  	Linux_SambaGlobalBrowseForGlobalInstance* m_elementP;
  	Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement();
  	~Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalBrowseForGlobalInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration();
  	  
  	  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration(
  	   const Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalBrowseForGlobalInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalBrowseForGlobalInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalBrowseForGlobalInstance& elementP);
  };
}
#endif

