/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00378a84; name: FUN_.text__00378a84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00378a84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  undefined4 local_4;
  
  lVar1 = FUN__text__00321ac0();
  if (*(char *)(lVar1 + 0x9349d) == '\0') {
    local_4 = 1;
    uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_4);
    local_28 = param_1 + 0x60;
  }
  else {
    local_4 = 1;
    uVar2 = FUN__text__00371260(*_DAT_0089f448,&local_4);
    local_28 = param_1 + 0x34c;
  }
  local_30 = 0x2ec;
  FUN__text__003787b0(uVar2,_DAT_008a3070,&local_28,&local_30);
  return;
}


