/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006725a0; name: FUN_.text__006725a0
 */


ulong FUN__text__006725a0(long param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  char local_38 [4];
  char local_34 [4];
  
  if ((*(int *)(param_1 + 0xc58) == 2) && (*(char *)(param_2 + 0x3fc) < '\0')) {
    bVar1 = *param_3 != 0;
    if (*param_3 != 0) {
      FUN__text__006783e4();
      *param_3 = 0;
    }
    bVar2 = *param_4 != 0;
    if (*param_4 != 0) {
      FUN__text__006783e4();
      *param_4 = 0;
    }
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xffffff7f;
  }
  else {
    bVar1 = false;
    bVar2 = false;
  }
  if (*(long *)(param_1 + 0xde0) != 0) {
    FUN__text__006783e4(*param_3);
    lVar5 = FUN__text__00678404(*(undefined8 *)(param_1 + 0xde0));
    *param_3 = lVar5;
    if (lVar5 != 0) {
      bVar1 = true;
      *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 0x80;
      goto LAB__text__00672658;
    }
LAB__text__006727d0:
    uVar7 = 0x1b;
    goto LAB__text__006727d4;
  }
LAB__text__00672658:
  if (*(long *)(param_1 + 0xde8) != 0) {
    FUN__text__006783e4(*param_4);
    lVar5 = FUN__text__00678404(*(undefined8 *)(param_1 + 0xde8));
    *param_4 = lVar5;
    if (lVar5 == 0) goto LAB__text__006727d0;
    bVar2 = true;
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 0x80;
  }
  if (*(long *)(param_1 + 0xdf0) != 0) {
    FUN__text__006783e4(*param_5);
    lVar5 = FUN__text__00678404(*(undefined8 *)(param_1 + 0xdf0));
    *param_5 = lVar5;
    if (lVar5 == 0) goto LAB__text__006727d0;
  }
  *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xffefffff;
  if ((*(int *)(param_1 + 0xc58) == 0) ||
     (((((char *)*param_3 != (char *)0x0 && (*(char *)*param_3 != '\0')) &&
       ((char *)*param_4 != (char *)0x0)) && (*(char *)*param_4 != '\0')))) {
joined_r0x006726dc:
    if (bVar1) {
LAB__text__00672760:
      uVar4 = FUN__text__0066e9e4(*(undefined8 *)(param_1 + 0x1548),2,*param_3,0x80);
      uVar7 = 3;
      if (uVar4 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00672790 */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)((ulong)*(byte *)((ulong)uVar4 + 0x760d09) * 4 + 0x67279c))();
        return uVar6;
      }
      goto LAB__text__006727d4;
    }
  }
  else {
    local_34[0] = '\0';
    local_38[0] = '\0';
    iVar3 = FUN__text__00674c60(*(undefined8 *)(param_2 + 0xd0),param_3,param_4,local_34,local_38,
                                *(undefined8 *)(param_1 + 0xd20));
    if (0 < iVar3) {
      FUN__text__00666f74(param_1,0x7182be,*(undefined8 *)(param_2 + 0xd0));
      goto joined_r0x006726dc;
    }
    if (iVar3 < 0) goto LAB__text__006727d0;
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 0x100080;
    if (local_34[0] != '\0') {
      bVar1 = true;
    }
    if (local_38[0] != '\0') {
      bVar2 = true;
    }
    if (bVar1) goto LAB__text__00672760;
  }
  if (bVar2) {
    uVar7 = 3;
    uVar4 = FUN__text__0066e9e4(*(undefined8 *)(param_1 + 0x1548),3,*param_4,0x80);
    if (uVar4 < 9) {
      uVar7 = *(uint *)((long)(int)uVar4 * 4 + 0x760d14);
    }
  }
  else {
    uVar7 = 0;
  }
LAB__text__006727d4:
  return (ulong)uVar7;
}


