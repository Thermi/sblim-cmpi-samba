/**
 *  Linux_SambaValidUsersForShareInstanceName.h
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


#ifndef Linux_SambaValidUsersForShareInstanceName_h
#define Linux_SambaValidUsersForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaValidUsersForShareInstanceName {
  public:
       Linux_SambaValidUsersForShareInstanceName();
  	
       Linux_SambaValidUsersForShareInstanceName
  	    (const Linux_SambaValidUsersForShareInstanceName& original);
  	   
       Linux_SambaValidUsersForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaValidUsersForShareInstanceName();
       
       Linux_SambaValidUsersForShareInstanceName& operator=
  	    (const Linux_SambaValidUsersForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaUserInstanceName& val);
       const Linux_SambaUserInstanceName& getPartComponent() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaValidUsersForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaUserInstanceName m_PartComponent;
       Linux_SambaShareOptionsInstanceName m_GroupComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int PartComponent:1;
         unsigned int GroupComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaValidUsersForShareInstanceNameEnumerationElement{
  	Linux_SambaValidUsersForShareInstanceName* m_elementP;
  	Linux_SambaValidUsersForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForShareInstanceNameEnumerationElement();
  	~Linux_SambaValidUsersForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaValidUsersForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaValidUsersForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaValidUsersForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaValidUsersForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaValidUsersForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaValidUsersForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaValidUsersForShareInstanceNameEnumeration(
  	   const Linux_SambaValidUsersForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaValidUsersForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaValidUsersForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaValidUsersForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaValidUsersForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

