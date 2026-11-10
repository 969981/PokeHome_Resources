/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c859c; name: FUN_.text__003c859c
 */


void FUN__text__003c859c(long param_1,undefined8 *param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_30;
  long local_28;
  undefined1 local_20;
  undefined1 auStack_18 [8];
  
  local_30 = *param_2;
  local_28 = *param_3;
  *param_3 = 0;
  lVar3 = *(long *)(param_1 + 0xe0);
  lVar1 = *(long *)(param_1 + 0xe8);
  puVar2 = (undefined8 *)(lVar3 + lVar1 * 0x18);
  local_20 = param_4;
  if (lVar1 == *(long *)(param_1 + 0xf0)) {
    FUN__text__003c9060(auStack_18,param_1 + 0xa0,puVar2,1,&local_30);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  else {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar2 = local_30;
    lVar3 = lVar3 + lVar1 * 0x18;
    *(long *)(lVar3 + 8) = local_28;
    *(undefined1 *)(lVar3 + 0x10) = param_4;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 1;
  }
  return;
}


