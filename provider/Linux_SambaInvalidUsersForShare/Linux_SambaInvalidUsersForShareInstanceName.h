/**
 *  Linux_SambaInvalidUsersForShareInstanceName.h
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


#ifndef Linux_SambaInvalidUsersForShareInstanceName_h
#define Linux_SambaInvalidUsersForShareInstanceName_h

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

  class Linux_SambaInvalidUsersForShareInstanceName {
  public:
       Linux_SambaInvalidUsersForShareInstanceName();
  	
       Linux_SambaInvalidUsersForShareInstanceName
  	    (const Linux_SambaInvalidUsersForShareInstanceName& original);
  	   
       Linux_SambaInvalidUsersForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaInvalidUsersForShareInstanceName();
       
       Linux_SambaInvalidUsersForShareInstanceName& operator=
  	    (const Linux_SambaInvalidUsersForShareInstanceName& original);
       
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
       void init(const Linux_SambaInvalidUsersForShareInstanceName& original);
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
  
  
  struct Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement{
  	Linux_SambaInvalidUsersForShareInstanceName* m_elementP;
  	Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement();
  	~Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaInvalidUsersForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaInvalidUsersForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaInvalidUsersForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaInvalidUsersForShareInstanceNameEnumeration(
  	   const Linux_SambaInvalidUsersForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaInvalidUsersForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaInvalidUsersForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaInvalidUsersForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaInvalidUsersForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

