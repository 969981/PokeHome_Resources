/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bd83c; name: FUN_.text__005bd83c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bd83c(long param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_30;
  undefined1 uStack_29;
  undefined1 *local_28;
  
  local_28 = (undefined1 *)&local_30;
  local_30 = *param_2;
  lVar1 = FUN__text__005c1080(param_1 + 0x730,&local_30,_DAT_008a01d8,&local_28,&uStack_29);
  lVar1 = *(long *)(lVar1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x630);
  *(long *)(param_1 + 0x630) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  return;
}


