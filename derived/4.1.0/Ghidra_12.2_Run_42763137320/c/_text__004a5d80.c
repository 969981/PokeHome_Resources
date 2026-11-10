/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a5d80; name: FUN_.text__004a5d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004a5d80(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_60 [2];
  EventType aEStack_58 [19];
  char local_45;
  
  nn::os::InitializeEvent(aEStack_58,0,1);
  uVar2 = FUN__text__004adf98(param_1 + 0xf8,local_60);
  iVar1 = FUN__text__004aaa30(uVar2,param_2,_DAT_008a4668,local_60);
  if (iVar1 == 1) {
    nn::os::WaitEvent(aEStack_58);
    if (local_45 == '\x01') {
      nn::os::FinalizeEvent(aEStack_58);
    }
    iVar1 = local_60[0];
  }
  else if (local_45 == '\x01') {
    nn::os::FinalizeEvent(aEStack_58);
    return iVar1;
  }
  return iVar1;
}


