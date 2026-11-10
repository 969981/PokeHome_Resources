/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00275254; name: FUN_.text__00275254
 */


void FUN__text__00275254(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_30 [24];
  long local_18;
  
  iVar1 = *(int *)(*param_1 + 0x734) + (int)param_1[1];
  uVar2 = iVar1 >> 0x1f & 6;
  if (5 < iVar1) {
    uVar2 = 0xfffffffa;
  }
  FUN__text__00274c50(*param_1,uVar2 + iVar1);
  FUN__text__005e927c(auStack_30,0x877068);
  FUN__text__003c1e4c(auStack_30);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


