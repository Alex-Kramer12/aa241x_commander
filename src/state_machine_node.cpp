FSM(Millenial_Falcon)
{
    FSM_STATES
    {
        TAKEOFF
        SEARCH
        LANDING
    }
    FSM_START(TAKEOFF);
    FSM_BGN
    {
         FSM_STATE(TAKEOFF)
         {
              FSM_TRANSITIONS
              {
                  //Altitude Boolean is a 1 when we have reached altitude to begin search
                  //Altitude Boolean is a 0 when we have not reached altitude
                  FSM_ON_CONDITION(ALTITUDEBOOL, FSM_NEXT(SEARCH));
               }
          }
          FSM_STATE(SEARCH)
          {
              FSM_TRANSITIONS
              {
                FSM_ON_EVENT
                  
              \\FSM_ON_CONDITION, when at altitude, transition to search
              \\FSM_ON_CONDITION, when num beacons =5 or battery level <= battery required for landing, transition to landing
              
