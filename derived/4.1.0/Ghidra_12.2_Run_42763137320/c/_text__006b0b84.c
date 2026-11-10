/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b0b84; name: FUN_.text__006b0b84
 */


void FUN__text__006b0b84(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long local_20;
  long lStack_18;
  
  plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
  lStack_18 = plVar1[1];
  local_20 = *plVar1 + (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    lVar2 = 0x230;
  }
  else {
    lVar2 = (ulong)**(uint **)(param_1 + 0x38) + 0x230;
  }
  FUN__text__006ee1d4(param_2,*(undefined4 *)
                               (*(long *)(*(long *)(param_1 + 0x20) + 0x18) +
                               (ulong)*(ushort *)(param_1 + 0x4a) * 4),0,&local_20,lVar2);
  return;
}


