/**
 *  Linux_SambaWriteListForGlobalInstanceName.h
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


#ifndef Linux_SambaWriteListForGlobalInstanceName_h
#define Linux_SambaWriteListForGlobalInstanceName_h

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

  class Linux_SambaWriteListForGlobalInstanceName {
  public:
       Linux_SambaWriteListForGlobalInstanceName();
  	
       Linux_SambaWriteListForGlobalInstanceName
  	    (const Linux_SambaWriteListForGlobalInstanceName& original);
  	   
       Linux_SambaWriteListForGlobalInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaWriteListForGlobalInstanceName();
       
       Linux_SambaWriteListForGlobalInstanceName& operator=
  	    (const Linux_SambaWriteListForGlobalInstanceName& original);
       
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
       void init(const Linux_SambaWriteListForGlobalInstanceName& original);
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
  
  
  struct Linux_SambaWriteListForGlobalInstanceNameEnumerationElement{
  	Linux_SambaWriteListForGlobalInstanceName* m_elementP;
  	Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaWriteListForGlobalInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForGlobalInstanceNameEnumeration {
  	private:
  	  Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForGlobalInstanceNameEnumeration();
  	  
  	  Linux_SambaWriteListForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaWriteListForGlobalInstanceNameEnumeration(
  	   const Linux_SambaWriteListForGlobalInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForGlobalInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForGlobalInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForGlobalInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaWriteListForGlobalInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

