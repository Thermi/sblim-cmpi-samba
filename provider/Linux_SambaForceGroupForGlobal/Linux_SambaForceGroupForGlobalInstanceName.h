/**
 *  Linux_SambaForceGroupForGlobalInstanceName.h
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


#ifndef Linux_SambaForceGroupForGlobalInstanceName_h
#define Linux_SambaForceGroupForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGroupInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForGlobalInstanceName {
  public:
       Linux_SambaForceGroupForGlobalInstanceName();
  	
       Linux_SambaForceGroupForGlobalInstanceName
  	    (const Linux_SambaForceGroupForGlobalInstanceName& original);
  	   
       Linux_SambaForceGroupForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaForceGroupForGlobalInstanceName();
       
       Linux_SambaForceGroupForGlobalInstanceName& operator=
  	    (const Linux_SambaForceGroupForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getGroupComponent() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaGroupInstanceName& val);
       const Linux_SambaGroupInstanceName& getPartComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGlobalOptionsInstanceName m_GroupComponent;
       Linux_SambaGroupInstanceName m_PartComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int GroupComponent:1;
         unsigned int PartComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement{
  	Linux_SambaForceGroupForGlobalInstanceName* m_elementP;
  	Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaForceGroupForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaForceGroupForGlobalInstanceNameEnumeration(
  	   const Linux_SambaForceGroupForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaForceGroupForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

