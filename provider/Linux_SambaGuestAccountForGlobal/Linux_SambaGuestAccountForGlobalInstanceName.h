/**
 *  Linux_SambaGuestAccountForGlobalInstanceName.h
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


#ifndef Linux_SambaGuestAccountForGlobalInstanceName_h
#define Linux_SambaGuestAccountForGlobalInstanceName_h

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

  class Linux_SambaGuestAccountForGlobalInstanceName {
  public:
       Linux_SambaGuestAccountForGlobalInstanceName();
  	
       Linux_SambaGuestAccountForGlobalInstanceName
  	    (const Linux_SambaGuestAccountForGlobalInstanceName& original);
  	   
       Linux_SambaGuestAccountForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGuestAccountForGlobalInstanceName();
       
       Linux_SambaGuestAccountForGlobalInstanceName& operator=
  	    (const Linux_SambaGuestAccountForGlobalInstanceName& original);
       
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
       void init(const Linux_SambaGuestAccountForGlobalInstanceName& original);
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
  
  
  struct Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement{
  	Linux_SambaGuestAccountForGlobalInstanceName* m_elementP;
  	Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGuestAccountForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGuestAccountForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGuestAccountForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaGuestAccountForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGuestAccountForGlobalInstanceNameEnumeration(
  	   const Linux_SambaGuestAccountForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGuestAccountForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGuestAccountForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGuestAccountForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

