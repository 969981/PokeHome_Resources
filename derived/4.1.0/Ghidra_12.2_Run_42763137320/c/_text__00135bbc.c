/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00135bbc; name: FUN_.text__00135bbc
 */


undefined8 FUN__text__00135bbc(long *param_1)

{
  long lVar1;
  undefined4 local_24;
  
  lVar1 = *param_1;
  FUN__text__00128db0(lVar1,0,1);
  if (*(code **)(lVar1 + 0x640) != (code *)0x0) {
    local_24 = (undefined4)param_1[1];
    (**(code **)(lVar1 + 0x640))(lVar1 + 0x660,&local_24);
  }
  FUN__text__0012cce4(lVar1 + 0x110,0x721840);
  FUN__text__003a1630();
  return 1;
}


