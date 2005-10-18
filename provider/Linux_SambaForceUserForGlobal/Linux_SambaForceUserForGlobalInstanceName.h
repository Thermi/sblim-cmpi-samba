/**
 *  Linux_SambaForceUserForGlobalInstanceName.h
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


#ifndef Linux_SambaForceUserForGlobalInstanceName_h
#define Linux_SambaForceUserForGlobalInstanceName_h

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

  class Linux_SambaForceUserForGlobalInstanceName {
  public:
       Linux_SambaForceUserForGlobalInstanceName();
  	
       Linux_SambaForceUserForGlobalInstanceName
  	    (const Linux_SambaForceUserForGlobalInstanceName& original);
  	   
       Linux_SambaForceUserForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaForceUserForGlobalInstanceName();
       
       Linux_SambaForceUserForGlobalInstanceName& operator=
  	    (const Linux_SambaForceUserForGlobalInstanceName& original);
       
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
       void init(const Linux_SambaForceUserForGlobalInstanceName& original);
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
  
  
  struct Linux_SambaForceUserForGlobalInstanceNameEnumerationElement{
  	Linux_SambaForceUserForGlobalInstanceName* m_elementP;
  	Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaForceUserForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaForceUserForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaForceUserForGlobalInstanceNameEnumeration(
  	   const Linux_SambaForceUserForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaForceUserForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

