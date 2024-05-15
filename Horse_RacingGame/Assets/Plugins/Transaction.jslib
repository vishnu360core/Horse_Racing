
mergeInto(LibraryManager.library, {

 Credit: async function(accountAddress,amount) 
 {
   
     if (typeof window.ethers !== 'undefined') 
        {
          var address = Pointer_stringify(accountAddress);
          var matAmount = Pointer_stringify(amount);

           console.log("Account address >>" ,address);  
 
           const tx = await window.contract.rewardFunc(address,window.ethers.utils.parseUnits(matAmount));
           console.log("PlaceBid_Credit ==> " , tx);

        } 
        else 
        {
            console.log('Ethers.js is not loaded !!!!!!');
        }
  },

  Deduct: async function(accountAddress,amount) 
 {
   
     if (typeof window.ethers !== 'undefined') 
        {
          console.log("Deduct in process !!!!");

           var matAmount = Pointer_stringify(amount);

           console.log("matamount",matAmount);

            const tx = await window.contract.placebid({value : window.ethers.utils.parseUnits(matAmount) });
              console.log("PlaceBid_Deduct ==> " , tx);

              if (typeof nethereumUnityInstance !== 'undefined') 
                {
                    nethereumUnityInstance.SendMessage('WalletConnector', 'Deduct_GetHash',tx.hash);
                } 
                 else 
                {   
                    console.error('nethereumUnityInstance is not defined');
                }
           
        //    try
        //    {
        //       const tx = await window.contract.placebid({value : window.ethers.utils.parseUnits(matAmount) });
        //       console.log("PlaceBid_Deduct ==> " , tx);

        //       if (typeof nethereumUnityInstance !== 'undefined') 
        //         {
        //             nethereumUnityInstance.SendMessage('WalletConnector', 'Deduct_GetHash',tx.hash);
        //         } 
        //          else 
        //         {   
        //             console.error('nethereumUnityInstance is not defined');
        //         }
        //    }
        //    catch
        //    {     
        //        console.log("Deduction rejected !!!");

        //         if (typeof nethereumUnityInstance !== 'undefined') 
        //         {
        //             nethereumUnityInstance.SendMessage('WalletConnector', 'Deduct_Rejected');
        //         } 
        //         else 
        //         {   
                  
        //           console.error('nethereumUnityInstance is not defined');
        //         }
        //    }
        } 
        else 
        {
            console.log('Ethers.js is not loaded !!!!!!');
        }
    }

});