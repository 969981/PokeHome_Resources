/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3014; name: FUN_.text__003c3014
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c3014(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4
                        ,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined5 local_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  
  uVar1 = FUN__text__005fd4f8(param_2);
  uVar2 = FUN__text__005fd80c(*_DAT_008a0488,uVar1);
  memset(&local_148,0,0x104);
  if ((int)uVar2 < 0) {
    local_148 = _DAT_0070aff3;
    uStack_143 = _DAT_0070aff8;
    uStack_140 = uRam000000000070affb;
  }
  else {
    snprintf((char *)&local_148,0x104,(char *)0x716ba7,(ulong)uVar2);
  }
  FUN__text__003d0ed4(param_1,&local_148,param_3,param_4,param_5);
  return;
}


