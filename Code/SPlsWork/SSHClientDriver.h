namespace SSHClientDriver;
        // class declarations
         class SSHClientDevice;
     class SSHClientDevice 
    {
        // class delegates
        delegate FUNCTION InitializedDataHandler ( INTEGER state );
        delegate FUNCTION ConnectionStateHandler ( INTEGER state );
        delegate FUNCTION ReceivedDataHandler ( SIMPLSHARPSTRING data );

        // class events

        // class functions
        FUNCTION Debug ( STRING message );
        FUNCTION Initialize ( STRING hostname , SIGNED_LONG_INTEGER port , STRING username , STRING password , STRING debugName );
        FUNCTION Connect ();
        FUNCTION Disconnect ();
        FUNCTION SendCommand ( STRING Command );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER debugEnable;

        // class properties
        DelegateProperty InitializedDataHandler InitializedData;
        DelegateProperty ConnectionStateHandler ConnectionState;
        DelegateProperty ReceivedDataHandler ReceivedData;
    };

