/**
 *  Linux_SambaWriteListForShareInstanceName.h
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


#ifndef Linux_SambaWriteListForShareInstanceName_h
#define Linux_SambaWriteListForShareInstanceName_h

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

  class Linux_SambaWriteListForShareInstanceName {
  public:
       Linux_SambaWriteListForShareInstanceName();
  	
       Linux_SambaWriteListForShareInstanceName
  	    (const Linux_SambaWriteListForShareInstanceName& original);
  	   
       Linux_SambaWriteListForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaWriteListForShareInstanceName();
       
       Linux_SambaWriteListForShareInstanceName& operator=
  	    (const Linux_SambaWriteListForShareInstanceName& original);
       
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
       void init(const Linux_SambaWriteListForShareInstanceName& original);
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
  
  
  struct Linux_SambaWriteListForShareInstanceNameEnumerationElement{
  	Linux_SambaWriteListForShareInstanceName* m_elementP;
  	Linux_SambaWriteListForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForShareInstanceNameEnumerationElement();
  	~Linux_SambaWriteListForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaWriteListForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaWriteListForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaWriteListForShareInstanceNameEnumeration(
  	   const Linux_SambaWriteListForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaWriteListForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

