/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a06a4; name: FUN_.text__005a06a4
 */


/* WARNING: Removing unreachable block (ram,0x005a07a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a06a4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + 0xe0);
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  uVar5 = (ulong)*(int *)(param_1 + 0x158);
  if ((ulong)((long)puVar1 - lVar4 >> 5) <= uVar5) {
    if (puVar1 < *(undefined8 **)(param_1 + 0xf0)) {
      uVar5 = tpidr_el0;
      uVar5 = uVar5 & 0xffffffffffffe000;
      if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      puVar7 = puVar1 + 4;
      *(undefined8 *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xf8);
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0xffffffffffffffff;
      puVar1[3] = 0;
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
      *(undefined8 **)(param_1 + 0xe8) = puVar7;
    }
    else {
      FUN__text__005a09c0();
      puVar7 = *(undefined8 **)(param_1 + 0xe8);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x148);
    iVar2 = *(int *)(param_1 + 0x150);
    uVar3 = FUN__text__006ec698(_DAT_008a0448);
    FUN__text__005a5684(&local_60,uVar6,0,(long)iVar2,uVar3);
    puVar7[-4] = local_60;
    if (puVar7[-3] != 0) {
      (**(code **)(*(long *)(puVar7[-3] + 0x48) + 0x18))();
    }
    puVar7[-3] = local_58;
    puVar7[-2] = local_50;
    puVar7[-1] = local_48;
    local_58 = 0;
    local_60 = 0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0;
    FUN__text__005b509c(&local_60);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    uVar5 = (ulong)*(int *)(param_1 + 0x158);
    lVar4 = *(long *)(param_1 + 0xe0);
  }
  uVar3 = FUN__text__005b50f0(lVar4 + uVar5 * 0x20);
  FUN__text__006ec8a0(param_1,uVar3,
                      *(undefined8 *)
                       (*(long *)(param_1 + 0xe0) + (long)*(int *)(param_1 + 0x158) * 0x20 + 0x10),
                      (long)*(int *)(param_1 + 0x150));
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  return;
}


