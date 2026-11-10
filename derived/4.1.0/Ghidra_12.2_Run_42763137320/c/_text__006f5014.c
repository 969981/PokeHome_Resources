/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5014; name: FUN_.text__006f5014
 */


long FUN__text__006f5014(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__006ec340(&local_70);
  lVar1 = FUN__text__006f5764(param_1,&local_70);
  lVar2 = FUN__text__006f57e0(param_1,&local_70);
  return lVar2 + ((ulong)*param_2 - 1) * ((lVar1 + lVar2) - 1U & -lVar1);
}


