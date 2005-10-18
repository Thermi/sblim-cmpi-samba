/**
 *  Linux_SambaUserInstanceName.h
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


#ifndef Linux_SambaUserInstanceName_h
#define Linux_SambaUserInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaUserInstanceName {
  public:
       Linux_SambaUserInstanceName();
  	
       Linux_SambaUserInstanceName
  	    (const Linux_SambaUserInstanceName& original);
  	   
       Linux_SambaUserInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaUserInstanceName();
       
       Linux_SambaUserInstanceName& operator=
  	    (const Linux_SambaUserInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isSambaUserNameSet() const;
       void setSambaUserName(const char* val, int makeCopy = 1);
       const char* getSambaUserName() const;
       
  private:
       void init();
       void init(const Linux_SambaUserInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_SambaUserName;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int SambaUserName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUserInstanceNameEnumerationElement{
  	Linux_SambaUserInstanceName* m_elementP;
  	Linux_SambaUserInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaUserInstanceNameEnumerationElement();
  	~Linux_SambaUserInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaUserInstanceNameEnumeration {
  	private:
  	  Linux_SambaUserInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaUserInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaUserInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUserInstanceNameEnumeration();
  	  
  	  Linux_SambaUserInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaUserInstanceNameEnumeration(
  	   const Linux_SambaUserInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaUserInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUserInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUserInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaUserInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

