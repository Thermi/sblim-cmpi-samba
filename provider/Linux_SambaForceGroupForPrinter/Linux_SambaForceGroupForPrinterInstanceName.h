/**
 *  Linux_SambaForceGroupForPrinterInstanceName.h
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


#ifndef Linux_SambaForceGroupForPrinterInstanceName_h
#define Linux_SambaForceGroupForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"
#include "Linux_SambaGroupInstanceName.h"

namespace genProvider {

  class Linux_SambaForceGroupForPrinterInstanceName {
  public:
       Linux_SambaForceGroupForPrinterInstanceName();
  	
       Linux_SambaForceGroupForPrinterInstanceName
  	    (const Linux_SambaForceGroupForPrinterInstanceName& original);
  	   
       Linux_SambaForceGroupForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaForceGroupForPrinterInstanceName();
       
       Linux_SambaForceGroupForPrinterInstanceName& operator=
  	    (const Linux_SambaForceGroupForPrinterInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaGroupInstanceName& val);
       const Linux_SambaGroupInstanceName& getPartComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaForceGroupForPrinterInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
       Linux_SambaGroupInstanceName m_PartComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int GroupComponent:1;
         unsigned int PartComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement{
  	Linux_SambaForceGroupForPrinterInstanceName* m_elementP;
  	Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaForceGroupForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceGroupForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaForceGroupForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaForceGroupForPrinterInstanceNameEnumeration(
  	   const Linux_SambaForceGroupForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaForceGroupForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceGroupForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceGroupForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaForceGroupForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

