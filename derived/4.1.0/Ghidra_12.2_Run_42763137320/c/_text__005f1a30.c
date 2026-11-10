/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f1a30; name: FUN_.text__005f1a30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f1a30(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long local_48 [5];
  
  local_48[1] = 0x90fdec53c23e35ea;
  local_48[2] = 0x70ddcd;
  local_48[3] = 0xd;
  local_48[4] = 0;
  FUN__text__005cb950(param_1,local_48 + 1);
  if (local_48[4] != 0) {
    (**(code **)(*(long *)(local_48[4] + 0x48) + 0x18))();
  }
  lVar1 = _DAT_008a5c50;
  param_1[0x42] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0xa8;
  param_1[10] = lVar1 + 0xe8;
  FUN__text__005d4b6c(param_1 + 0x44);
  FUN__text__005d4b6c(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  FUN__text__005d4b6c(param_1 + 0xc6);
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x11a] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x108] = 0x868bb8;
  local_48[0] = *param_2;
  if (local_48[0] == 0) {
    FUN__text__005f1710(param_1,local_48);
    return;
  }
  plVar2 = (long *)(local_48[0] + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__005f1710(param_1,local_48);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


