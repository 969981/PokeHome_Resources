/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00155670; name: FUN_.text__00155670
 */


ulong FUN__text__00155670(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0 || *(uint *)(param_1 + 1) == 0xffffffff) goto LAB__text__0015587c;
  puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar2 = *puVar5;
  if ((uVar2 < 5) || ((ulong)puVar5[2] == 0)) goto LAB__text__0015587c;
  puVar7 = (uint *)((long)piVar3 + (ulong)puVar5[2]);
  puVar7 = (uint *)((long)puVar7 + (ulong)*(uint *)(param_1 + 1) * 4 + (ulong)*puVar7 + 4);
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
    uVar6 = 0;
    if (6 < uVar2) goto LAB__text__00155708;
LAB__text__00155720:
    lVar4 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
    if (uVar8 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)((long)piVar1 + uVar8);
      if (uVar6 == 0xffffffff) goto LAB__text__0015587c;
    }
    if (uVar2 < 7) goto LAB__text__00155720;
LAB__text__00155708:
    if ((ulong)puVar5[3] == 0) goto LAB__text__00155720;
    puVar7 = (uint *)((long)piVar3 + (ulong)puVar5[3]);
    lVar4 = (long)puVar7 + (ulong)*puVar7;
  }
  puVar7 = (uint *)(lVar4 + (ulong)uVar6 * 4 + 4);
  piVar3 = (int *)((long)puVar7 + (ulong)*puVar7);
  if (((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
      (uVar8 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar8 != 0)) &&
     (uVar6 = *(byte *)((long)piVar3 + uVar8) - 1, uVar6 < 4)) {
                    /* WARNING: Could not emulate address calculation at 0x00155768 */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)(&UNK__text__00155774 + (ulong)*(byte *)((ulong)uVar6 + 0x724d68) * 4))();
    return uVar8;
  }
LAB__text__0015587c:
  return (ulong)param_2;
}


