/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066dd88; name: FUN_.text__0066dd88
 */


undefined8 FUN__text__0066dd88(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  long local_28;
  
  local_28 = param_2;
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x6d8) != -1) &&
       (*(long *)(param_1 + 0x6d8) <= *(long *)(param_1 + 0x6d0))) {
      param_3 = 1;
      bVar1 = true;
      goto LAB__text__0066de48;
    }
    *(long *)(param_1 + 0x6d0) = *(long *)(param_1 + 0x6d0) + 1;
    *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 2;
    if (-1 < *(char *)(param_1 + 0xf42)) {
LAB__text__0066de44:
      bVar1 = false;
      param_3 = 3;
      goto LAB__text__0066de48;
    }
    if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf50));
      *(undefined8 *)(param_1 + 0xf50) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
    }
    lVar3 = FUN__text__00678404(*(undefined8 *)(param_1 + 0xf48));
    *(long *)(param_1 + 0xf50) = lVar3;
    if (lVar3 != 0) {
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) | 2;
      goto LAB__text__0066de44;
    }
LAB__text__0066de94:
    uVar5 = 0x1b;
    goto LAB__text__0066e010;
  }
  bVar1 = false;
LAB__text__0066de48:
  uVar4 = FUN__text__0066e310(param_2,0,8);
  iVar2 = FUN__text__0066e9e4(*(undefined8 *)(param_1 + 0x1548),0,param_2,(ulong)(param_3 == 1) << 3
                             );
  if (iVar2 == 0) {
    iVar2 = FUN__text__0066e580(*(undefined8 *)(param_1 + 0x1548),0,&local_28,0);
    if (iVar2 != 0) {
      uVar5 = FUN__text__00670b40();
      return uVar5;
    }
    if (param_3 == 1) goto LAB__text__0066dedc;
    if ((uVar4 & 1) != 0) {
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) & 0xffef;
    }
    bVar6 = *(byte *)(param_1 + 0xf68);
    if ((bVar6 & 1) != 0) {
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf48));
      bVar6 = *(byte *)(param_1 + 0xf68);
    }
    *(byte *)(param_1 + 0xf68) = bVar6 | 1;
    *(long *)(param_1 + 0xf48) = local_28;
    FUN__text__00666f74(param_1,0x71bd1c);
    iVar2 = *(int *)(param_1 + 0x15f8);
    if (iVar2 == 0x12f) {
      if ((*(int *)(param_1 + 0xa38) != 1) && ((*(byte *)(param_1 + 0x6e0) >> 2 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0xa38) = 1;
        uVar5 = 0x71f88d;
        if ((*(ulong *)(param_1 + 0xf40) & 0x1000000) != 0) {
          uVar5 = 0x71628e;
        }
        FUN__text__00666f74(param_1,0x71b0f7,uVar5);
      }
    }
    else if (iVar2 == 0x12e) {
      if (*(int *)(param_1 + 0xa38) - 2U < 3) {
        bVar6 = *(byte *)(param_1 + 0x6e0) >> 1;
        goto joined_r0x0066df90;
      }
    }
    else if ((iVar2 == 0x12d) && (*(int *)(param_1 + 0xa38) - 2U < 3)) {
      bVar6 = *(byte *)(param_1 + 0x6e0);
joined_r0x0066df90:
      if ((bVar6 & 1) == 0) {
        FUN__text__00666f74(param_1,0x71c78f);
        *(undefined4 *)(param_1 + 0xa38) = 1;
      }
    }
    FUN__text__006663e0(param_1,10);
    FUN__text__00666378(param_1);
  }
  else {
    if (param_3 != 1) {
      uVar5 = FUN__text__00670b40();
      return uVar5;
    }
    local_28 = FUN__text__00678404(param_2);
    if (local_28 == 0) goto LAB__text__0066de94;
LAB__text__0066dedc:
    *(long *)(param_1 + 0x1640) = local_28;
    if (bVar1) {
      FUN__text__0066713c(param_1,0x721313,*(undefined8 *)(param_1 + 0x6d8));
      return 0x2f;
    }
  }
  uVar5 = 0;
LAB__text__0066e010:
  return uVar5;
}


