/**
 *  Linux_SambaGroupInstanceName.h
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


#ifndef Linux_SambaGroupInstanceName_h
#define Linux_SambaGroupInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaGroupInstanceName {
  public:
       Linux_SambaGroupInstanceName();
  	
       Linux_SambaGroupInstanceName
  	    (const Linux_SambaGroupInstanceName& original);
  	   
       Linux_SambaGroupInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGroupInstanceName();
       
       Linux_SambaGroupInstanceName& operator=
  	    (const Linux_SambaGroupInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSambaGroupNameSet() const;
       void setSambaGroupName(const char* val, int makeCopy = 1);
       const char* getSambaGroupName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_SambaGroupName;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SambaGroupName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupInstanceNameEnumerationElement{
  	Linux_SambaGroupInstanceName* m_elementP;
  	Linux_SambaGroupInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupInstanceNameEnumerationElement();
  	~Linux_SambaGroupInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGroupInstanceNameEnumeration {
  	private:
  	  Linux_SambaGroupInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGroupInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGroupInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupInstanceNameEnumeration();
  	  
  	  Linux_SambaGroupInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGroupInstanceNameEnumeration(
  	   const Linux_SambaGroupInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGroupInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGroupInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

