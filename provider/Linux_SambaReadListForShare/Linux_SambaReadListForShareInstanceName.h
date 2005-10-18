/**
 *  Linux_SambaReadListForShareInstanceName.h
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


#ifndef Linux_SambaReadListForShareInstanceName_h
#define Linux_SambaReadListForShareInstanceName_h

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

  class Linux_SambaReadListForShareInstanceName {
  public:
       Linux_SambaReadListForShareInstanceName();
  	
       Linux_SambaReadListForShareInstanceName
  	    (const Linux_SambaReadListForShareInstanceName& original);
  	   
       Linux_SambaReadListForShareInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaReadListForShareInstanceName();
       
       Linux_SambaReadListForShareInstanceName& operator=
  	    (const Linux_SambaReadListForShareInstanceName& original);
       
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
       void init(const Linux_SambaReadListForShareInstanceName& original);
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
  
  
  struct Linux_SambaReadListForShareInstanceNameEnumerationElement{
  	Linux_SambaReadListForShareInstanceName* m_elementP;
  	Linux_SambaReadListForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaReadListForShareInstanceNameEnumerationElement();
  	~Linux_SambaReadListForShareInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaReadListForShareInstanceNameEnumeration {
  	private:
  	  Linux_SambaReadListForShareInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaReadListForShareInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaReadListForShareInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaReadListForShareInstanceNameEnumeration();
  	  
  	  Linux_SambaReadListForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaReadListForShareInstanceNameEnumeration(
  	   const Linux_SambaReadListForShareInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaReadListForShareInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaReadListForShareInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaReadListForShareInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaReadListForShareInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

