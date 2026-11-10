/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ead58; name: FUN_.text__005ead58
 */


undefined8 FUN__text__005ead58(void)

{
  undefined8 local_4070;
  undefined8 uStack_4068;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined4 local_4050;
  TimeZoneRule aTStack_4048 [16388];
  int iStack_44;
  CalendarAdditionalInfo aCStack_40 [24];
  CalendarTime aCStack_28 [8];
  PosixTime aPStack_8 [8];
  
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_8);
  nn::time::ToCalendarTime(aCStack_28,aCStack_40,aPStack_8);
  local_4050 = 0;
  local_4060 = 0;
  uStack_4058 = 0;
  local_4070 = 0x544d47;
  uStack_4068 = 0;
  nn::time::LoadTimeZoneRule(aTStack_4048,(LocationName *)&local_4070);
  nn::time::ToPosixTime(&iStack_44,(PosixTime *)&local_4070,2,aCStack_28,aTStack_4048);
  return local_4070;
}


