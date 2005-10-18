/**
 *  Linux_SambaGroupForUserInstanceName.h
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


#ifndef Linux_SambaGroupForUserInstanceName_h
#define Linux_SambaGroupForUserInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGroupInstanceName.h"
#include "Linux_SambaUserInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupForUserInstanceName {
  public:
       Linux_SambaGroupForUserInstanceName();
  	
       Linux_SambaGroupForUserInstanceName
  	    (const Linux_SambaGroupForUserInstanceName& original);
  	   
       Linux_SambaGroupForUserInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGroupForUserInstanceName();
       
       Linux_SambaGroupForUserInstanceName& operator=
  	    (const Linux_SambaGroupForUserInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaGroupInstanceName& val);
       const Linux_SambaGroupInstanceName& getGroupComponent() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaUserInstanceName& val);
       const Linux_SambaUserInstanceName& getPartComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupForUserInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaGroupInstanceName m_GroupComponent;
       Linux_SambaUserInstanceName m_PartComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int GroupComponent:1;
         unsigned int PartComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupForUserInstanceNameEnumerationElement{
  	Linux_SambaGroupForUserInstanceName* m_elementP;
  	Linux_SambaGroupForUserInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupForUserInstanceNameEnumerationElement();
  	~Linux_SambaGroupForUserInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGroupForUserInstanceNameEnumeration {
  	private:
  	  Linux_SambaGroupForUserInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGroupForUserInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGroupForUserInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupForUserInstanceNameEnumeration();
  	  
  	  Linux_SambaGroupForUserInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGroupForUserInstanceNameEnumeration(
  	   const Linux_SambaGroupForUserInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGroupForUserInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupForUserInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupForUserInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGroupForUserInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

