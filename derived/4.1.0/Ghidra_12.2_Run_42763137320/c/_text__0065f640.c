/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f640; name: FUN_.text__0065f640
 */


undefined8 FUN__text__0065f640(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar5;
  long lVar4;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(long *)(lVar6 + 0x1e8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar6 + 0xa38);
  if (iVar1 == 1 || iVar1 == 6) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_1 + 0x3fc);
  lVar7 = *(long *)(lVar6 + 0x108);
  if ((uVar2 & 0x9000) == 0x1000) {
    if (iVar1 - 3U < 2) {
      plVar5 = (long *)(*(long *)(lVar6 + 0x1e8) + 8);
LAB__text__0065f6d0:
      lVar4 = *plVar5;
      goto LAB__text__0065f6d4;
    }
    if ((iVar1 == 2) || (iVar1 == 5)) {
      plVar5 = (long *)(lVar6 + 0x1518);
      goto LAB__text__0065f6d0;
    }
    *(uint *)((long)param_1 + 0x3fc) = uVar2 & 0xfffeffff;
  }
  else {
    lVar4 = 0;
LAB__text__0065f6d4:
    *(uint *)((long)param_1 + 0x3fc) = uVar2 & 0xfffeffff;
    if ((lVar4 != -1) && (lVar4 <= lVar7)) goto joined_r0x0065f6ec;
  }
  FUN__text__00650d38(param_1,2);
  *(undefined8 *)(lVar6 + 0xf0) = 0;
joined_r0x0065f6ec:
  if (lVar7 == 0) {
    return 0;
  }
  uVar3 = FUN__text__0066cc28(param_1);
  return uVar3;
}


