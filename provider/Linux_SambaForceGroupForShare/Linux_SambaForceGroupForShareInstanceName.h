/**
 *  Linux_SambaForceGroupForShareInstanceName.h
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


#ifndef Linux_SambaForceGroupForShareInstanceName_h
#define Linux_SambaForceGroupForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaGroupInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForShareInstanceName {
  public:
       Linux_SambaForceGroupForShareInstanceName();
  	
       Linux_SambaForceGroupForShareInstanceName
  	    (const Linux_SambaForceGroupForShareInstanceName& original);
  	   
       Linux_SambaForceGroupForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaForceGroupForShareInstanceName();
       
       Linux_SambaForceGroupForShareInstanceName& operator=
  	    (const Linux_SambaForceGroupForShareInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaShareOptionsInstanceName& val);
       const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaGroupInstanceName& val);
       const Linux_SambaGroupInstanceName& getPartComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForShareInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaShareOptionsInstanceName m_GroupComponent;
       Linux_SambaGroupInstanceName m_PartComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int GroupComponent:1;
         unsigned int PartComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForShareInstanceNameEnumerationElement{
  	Linux_SambaForceGroupForShareInstanceName* m_elementP;
  	Linux_SambaForceGroupForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForShareInstanceNameEnumerationElement();
  	~Linux_SambaForceGroupForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaForceGroupForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaForceGroupForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaForceGroupForShareInstanceNameEnumeration(
  	   const Linux_SambaForceGroupForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaForceGroupForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

