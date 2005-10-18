/**
 *  Linux_SambaReadListForGlobalInstanceName.h
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


#ifndef Linux_SambaReadListForGlobalInstanceName_h
#define Linux_SambaReadListForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaReadListForGlobalInstanceName {
  public:
       Linux_SambaReadListForGlobalInstanceName();
  	
       Linux_SambaReadListForGlobalInstanceName
  	    (const Linux_SambaReadListForGlobalInstanceName& original);
  	   
       Linux_SambaReadListForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaReadListForGlobalInstanceName();
       
       Linux_SambaReadListForGlobalInstanceName& operator=
  	    (const Linux_SambaReadListForGlobalInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaUserInstanceName& val);
       const Linux_SambaUserInstanceName& getPartComponent() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& val);
       const Linux_SambaGlobalOptionsInstanceName& getGroupComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaReadListForGlobalInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaUserInstanceName m_PartComponent;
       Linux_SambaGlobalOptionsInstanceName m_GroupComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int PartComponent:1;
         unsigned int GroupComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaReadListForGlobalInstanceNameEnumerationElement{
  	Linux_SambaReadListForGlobalInstanceName* m_elementP;
  	Linux_SambaReadListForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaReadListForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaReadListForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaReadListForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaReadListForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaReadListForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaReadListForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaReadListForGlobalInstanceNameEnumeration(
  	   const Linux_SambaReadListForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaReadListForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaReadListForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

