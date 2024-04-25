
mergeInto(LibraryManager.library, {
  
    Deduct: function (amount) {

     var amountInString = Pointer_stringify(amount)
     console.log("amount :",amount ,"amountInString",amountInString);

    if (typeof window.ethereum !== 'undefined') {
      window.ethereum.request({ method: 'eth_requestAccounts' })
        .then(accounts => {
          if (accounts.length === 0) {
            console.log('No account is connected.');
            return;
          }
          const account = accounts[0];
          const params = [{
            from: account,
            to: '0x55B62C7f8a159Ef24f2AE4Eb9593e959e92066dc',
            value: amountInString // Converts the Ether value to wei in hexadecimal
          }];
          return window.ethereum.request({
            method: 'eth_sendTransaction',
            params: params
          });
        })
        .then(txHash => {
          console.log('Transaction sent! Hash:', txHash);
          // You can optionally forward this transaction hash to Unity
          if (typeof nethereumUnityInstance !== 'undefined') {
            nethereumUnityInstance.SendMessage('WalletConnector', 'OnTransactionSent', txHash);
          }
        })
        .catch(err => {
          console.error('Failed to send transaction:', err);
          // Handle errors by sending an error message to Unity
          if (typeof nethereumUnityInstance !== 'undefined') {
            nethereumUnityInstance.SendMessage('WalletConnector', 'OnTransactionError', err.message);
          }
        });
    } else {
      console.log('Ethereum object not found. Please install MetaMask.');
    }
 },

  Credit: function (amount) {
     var amountInString = Pointer_stringify(amount)
     console.log("amount :",amount ,"amountInString",amountInString);

    if (typeof window.ethereum !== 'undefined') {
      window.ethereum.request({ method: 'eth_requestAccounts' })
        .then(accounts => {
          if (accounts.length === 0) {
            console.log('No account is connected.');
            return;
          }
          const account = accounts[0];
          const params = [{
            from: '0x55B62C7f8a159Ef24f2AE4Eb9593e959e92066dc',
            to: account,
            value: amountInString // Converts the Ether value to wei in hexadecimal
          }];
          return window.ethereum.request({
            method: 'eth_sendTransaction',
            params: params
          });
        })
        .then(txHash => {
          console.log('Transaction sent! Hash:', txHash);
          // You can optionally forward this transaction hash to Unity
          if (typeof nethereumUnityInstance !== 'undefined') {
            nethereumUnityInstance.SendMessage('WalletConnector', 'OnTransactionSent', txHash);
          }
        })
        .catch(err => {
          console.error('Failed to send transaction:', err);
          // Handle errors by sending an error message to Unity
          if (typeof nethereumUnityInstance !== 'undefined') {
            nethereumUnityInstance.SendMessage('WalletConnector', 'OnTransactionError', err.message);
          }
        });
    } else {
      console.log('Ethereum object not found. Please install MetaMask.');
    }
 }

});