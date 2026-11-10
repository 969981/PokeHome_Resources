/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7c4c; name: FUN_.text__003b7c4c
 */


void FUN__text__003b7c4c(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 auStack_18 [8];
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = *param_4;
  uStack_28 = param_4[1];
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0xa8) * 0x30);
  local_50 = param_2;
  if (*(long *)(param_1 + 0xa8) == *(long *)(param_1 + 0xb0)) {
    FUN__text__003b7f10(auStack_18,param_1 + 0x60,puVar1,1,&local_50);
    return;
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x60);
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *puVar1 = CONCAT44(uStack_4c,param_2);
  puVar1[1] = uStack_48;
  puVar1[4] = local_30;
  puVar1[5] = uStack_28;
  puVar1[2] = local_40;
  puVar1[3] = uStack_38;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  return;
}


