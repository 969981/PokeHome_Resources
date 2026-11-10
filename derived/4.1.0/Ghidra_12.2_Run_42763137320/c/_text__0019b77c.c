/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019b77c; name: FUN_.text__0019b77c
 */


void FUN__text__0019b77c(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 0x60);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_3 < (uint)*(ulong *)(lVar4 + 0xf8)) {
    lVar3 = *(long *)(lVar4 + 0x110);
    if (lVar3 != 0) {
      if (*(ulong *)(lVar4 + 0xf8) <= (ulong)param_3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0xf0) + (ulong)param_3 * 0x1c);
      local_48 = puVar1[1];
      uStack_40 = puVar1[2];
      local_38 = *(undefined4 *)(puVar1 + 3);
      uStack_50 = *puVar1;
      local_58 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      FUN__text__001916b0(lVar3,&local_58,&uStack_50,0);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
    }
  }
  else {
    FUN__text__00306824(lVar2);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


