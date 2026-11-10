/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664ac8; name: FUN_.text__00664ac8
 */


ulong FUN__text__00664ac8(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  
  uVar2 = *(int *)(param_2 + 0x10) - 1;
  if (uVar2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00664b10 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__00664b20 + (ulong)*(byte *)((ulong)uVar2 + 0x7602b3) * 4))();
    return uVar5;
  }
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(int *)(param_2 + 0x20) = param_4;
  if (param_4 == 0) {
    return 0;
  }
  puVar7 = (uint *)(param_2 + 0x10);
  lVar8 = param_2 + 0x18;
  if (6 < *puVar7 || (1 << (ulong)(*puVar7 & 0x1f) & 0x66U) == 0) {
    uVar6 = 0x17;
LAB__text__006648bc:
    uVar5 = FUN__text__0066498c(param_1,lVar8,puVar7,uVar6);
    return uVar5;
  }
  iVar1 = *(int *)(param_2 + 0x20);
  lVar4 = FUN__text__006783d4(0x4000);
  if (lVar4 == 0) {
    uVar6 = 0x1b;
    goto LAB__text__006648bc;
  }
  *(long *)(param_2 + 0x30) = lVar4;
  *(undefined4 *)(param_2 + 0x38) = 0x4000;
  uVar2 = FUN__text__00687280(lVar8,5);
  if (*(int *)(param_2 + 0x38) != 0x4000 && uVar2 < 2) {
    *(undefined4 *)(param_2 + 0x10) = 5;
    uVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x18))
                      (param_1,*(long **)(param_2 + 8),lVar4,0x4000 - *(int *)(param_2 + 0x38));
    if (uVar3 != 0) {
      uVar5 = (ulong)uVar3;
      FUN__text__0066498c(param_1,lVar8,puVar7,uVar5);
      goto LAB__text__00664944;
    }
  }
  if (uVar2 + 5 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00664858 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)((ulong)*(byte *)((ulong)(uVar2 + 5) + 0x7602ac) * 4 + 0x6647f8))();
    return uVar5;
  }
  FUN__text__006646f8(param_1,lVar8);
  uVar5 = FUN__text__0066498c(param_1,lVar8,puVar7,0x3d);
  uVar5 = uVar5 & 0xffffffff;
LAB__text__00664944:
  FUN__text__006783e4(lVar4);
  if ((iVar1 != 0) && (*puVar7 == 1)) {
    *puVar7 = 5;
  }
  return uVar5;
}


