/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432b54; name: FUN_.text__00432b54
 */


undefined4 FUN__text__00432b54(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong local_30;
  undefined4 local_28;
  undefined4 *local_20;
  undefined1 uStack_11;
  
  local_28 = param_2[1];
  local_30 = (ulong)CONCAT14(*(undefined1 *)((long)param_2 + 0xd),*param_2);
  local_20 = param_2;
  lVar1 = FUN__text__00433370(param_1,&local_30,&uStack_11);
  uVar2 = 0x34;
  if (lVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


