/**
 *  Linux_SambaHostInstanceName.h
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


#ifndef Linux_SambaHostInstanceName_h
#define Linux_SambaHostInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaHostInstanceName {
  public:
       Linux_SambaHostInstanceName();
  	
       Linux_SambaHostInstanceName
  	    (const Linux_SambaHostInstanceName& original);
  	   
       Linux_SambaHostInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaHostInstanceName();
       
       Linux_SambaHostInstanceName& operator=
  	    (const Linux_SambaHostInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaHostInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaHostInstanceNameEnumerationElement{
  	Linux_SambaHostInstanceName* m_elementP;
  	Linux_SambaHostInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaHostInstanceNameEnumerationElement();
  	~Linux_SambaHostInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaHostInstanceNameEnumeration {
  	private:
  	  Linux_SambaHostInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaHostInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaHostInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaHostInstanceNameEnumeration();
  	  
  	  Linux_SambaHostInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaHostInstanceNameEnumeration(
  	   const Linux_SambaHostInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaHostInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaHostInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaHostInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaHostInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

