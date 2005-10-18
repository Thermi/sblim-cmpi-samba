/**
 *  Linux_SambaSharePrinterBrowseOptionsInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseOptionsInstance_h
#define Linux_SambaSharePrinterBrowseOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsInstance {
  public:
       Linux_SambaSharePrinterBrowseOptionsInstance();
  	
       Linux_SambaSharePrinterBrowseOptionsInstance
  	    (const Linux_SambaSharePrinterBrowseOptionsInstance& original);
  	   
       Linux_SambaSharePrinterBrowseOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseOptionsInstance();
       
       Linux_SambaSharePrinterBrowseOptionsInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseOptionsInstanceName& val);        
       const Linux_SambaSharePrinterBrowseOptionsInstanceName&
        getInstanceName() const;

       unsigned int isBrowsableSet() const;
       void setBrowsable(const CMPIBoolean val);
       const CMPIBoolean getBrowsable() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseOptionsInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseOptionsInstanceName m_instanceName;
       CMPIBoolean m_Browsable;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Browsable:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseOptionsInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseOptionsInstance& elementP);
  };
}
#endif

