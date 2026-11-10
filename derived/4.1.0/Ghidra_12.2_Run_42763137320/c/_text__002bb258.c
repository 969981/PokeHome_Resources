/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bb258; name: FUN_.text__002bb258
 */


void FUN__text__002bb258(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  local_38 = param_5;
  FUN__text__002a32ac(param_5,&local_38);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    FUN__text__005fc278(lVar1,param_2 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x60);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


