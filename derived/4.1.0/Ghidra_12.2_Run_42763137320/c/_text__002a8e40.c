/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a8e40; name: FUN_.text__002a8e40
 */


void FUN__text__002a8e40(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar3 = uVar5 + 0x18;
  *(long **)(lVar3 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  *puVar1 = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (((uVar5 == 0) || (*(long *)(uVar5 + 0x98) == 0)) ||
     (lVar4 = *(long *)(lVar3 + *(long *)(uVar5 + 0x98) * 8 + -8), lVar4 == 0)) {
    uVar2 = FUN__text__005f52b0();
    puVar1[5] = 0;
    puVar1[2] = uVar2;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    if (uVar5 != 0) goto LAB__text__002a8ef8;
  }
  else {
    puVar1[5] = 0;
    puVar1[2] = lVar4;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
LAB__text__002a8ef8:
    if ((*(long *)(uVar5 + 0x98) != 0) &&
       (lVar3 = *(long *)(lVar3 + *(long *)(uVar5 + 0x98) * 8 + -8), lVar3 != 0))
    goto LAB__text__002a8f10;
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__002a8f10:
  puVar1[6] = lVar3;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  param_1[2] = 0x58;
  param_1[3] = 8;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  *param_1 = puVar1;
  param_1[1] = param_2;
  return;
}


