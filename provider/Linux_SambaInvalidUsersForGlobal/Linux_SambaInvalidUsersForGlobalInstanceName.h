/**
 *  Linux_SambaInvalidUsersForGlobalInstanceName.h
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


#ifndef Linux_SambaInvalidUsersForGlobalInstanceName_h
#define Linux_SambaInvalidUsersForGlobalInstanceName_h

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

  class Linux_SambaInvalidUsersForGlobalInstanceName {
  public:
       Linux_SambaInvalidUsersForGlobalInstanceName();
  	
       Linux_SambaInvalidUsersForGlobalInstanceName
  	    (const Linux_SambaInvalidUsersForGlobalInstanceName& original);
  	   
       Linux_SambaInvalidUsersForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaInvalidUsersForGlobalInstanceName();
       
       Linux_SambaInvalidUsersForGlobalInstanceName& operator=
  	    (const Linux_SambaInvalidUsersForGlobalInstanceName& original);
       
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
       void init(const Linux_SambaInvalidUsersForGlobalInstanceName& original);
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
  
  
  struct Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement{
  	Linux_SambaInvalidUsersForGlobalInstanceName* m_elementP;
  	Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(
  	   const Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaInvalidUsersForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif
