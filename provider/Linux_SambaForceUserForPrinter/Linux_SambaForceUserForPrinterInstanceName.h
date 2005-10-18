/**
 *  Linux_SambaForceUserForPrinterInstanceName.h
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


#ifndef Linux_SambaForceUserForPrinterInstanceName_h
#define Linux_SambaForceUserForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaForceUserForPrinterInstanceName {
  public:
       Linux_SambaForceUserForPrinterInstanceName();
  	
       Linux_SambaForceUserForPrinterInstanceName
  	    (const Linux_SambaForceUserForPrinterInstanceName& original);
  	   
       Linux_SambaForceUserForPrinterInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaForceUserForPrinterInstanceName();
       
       Linux_SambaForceUserForPrinterInstanceName& operator=
  	    (const Linux_SambaForceUserForPrinterInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isPartComponentSet() const;
       void setPartComponent(const Linux_SambaUserInstanceName& val);
       const Linux_SambaUserInstanceName& getPartComponent() const;

       unsigned int isGroupComponentSet() const;
       void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& val);
       const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;
       
  private:
       void init();
       void init(const Linux_SambaForceUserForPrinterInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaUserInstanceName m_PartComponent;
       Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int PartComponent:1;
         unsigned int GroupComponent:1;
       } isSet;
  };
  
  
  struct Linux_SambaForceUserForPrinterInstanceNameEnumerationElement{
  	Linux_SambaForceUserForPrinterInstanceName* m_elementP;
  	Linux_SambaForceUserForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaForceUserForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaForceUserForPrinterInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaForceUserForPrinterInstanceNameEnumeration {
  	private:
  	  Linux_SambaForceUserForPrinterInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaForceUserForPrinterInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaForceUserForPrinterInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaForceUserForPrinterInstanceNameEnumeration();
  	  
  	  Linux_SambaForceUserForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaForceUserForPrinterInstanceNameEnumeration(
  	   const Linux_SambaForceUserForPrinterInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaForceUserForPrinterInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaForceUserForPrinterInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaForceUserForPrinterInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaForceUserForPrinterInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif

