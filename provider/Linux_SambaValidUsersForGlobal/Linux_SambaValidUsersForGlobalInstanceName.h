/**
 *  Linux_SambaValidUsersForGlobalInstanceName.h
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


#ifndef Linux_SambaValidUsersForGlobalInstanceName_h
#define Linux_SambaValidUsersForGlobalInstanceName_h

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

  class Linux_SambaValidUsersForGlobalInstanceName {
  public:
       Linux_SambaValidUsersForGlobalInstanceName();
  	
       Linux_SambaValidUsersForGlobalInstanceName
  	    (const Linux_SambaValidUsersForGlobalInstanceName& original);
  	   
       Linux_SambaValidUsersForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaValidUsersForGlobalInstanceName();
       
       Linux_SambaValidUsersForGlobalInstanceName& operator=
  	    (const Linux_SambaValidUsersForGlobalInstanceName& original);
       
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
       void init(const Linux_SambaValidUsersForGlobalInstanceName& original);
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
  
  
  struct Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement{
  	Linux_SambaValidUsersForGlobalInstanceName* m_elementP;
  	Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaValidUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaValidUsersForGlobalInstanceNameEnumeration(
  	   const Linux_SambaValidUsersForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaValidUsersForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

