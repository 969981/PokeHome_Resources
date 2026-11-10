/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068dc68; name: FUN_.text__0068dc68
 */


undefined4 FUN__text__0068dc68(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar1 = 0x2d;
  if (*(char *)(param_1 + 0x30) == '\0' || param_3 != 0x2011) {
    iVar1 = param_3;
  }
  lVar5 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),iVar1,*(undefined4 *)(param_1 + 0x18),
                              *(undefined2 *)(param_1 + 0x32));
  if (((lVar5 == 0) || ((*(byte *)(lVar5 + 0x38) & 0x42) != 0)) ||
     (((*(byte *)(lVar5 + 0x38) & 0x35) == 0 && (*(int *)(lVar5 + 0x3c) == 0)))) {
    uVar6 = FUN__text__00691184(*(undefined8 *)(param_1 + 0x10),iVar1,
                                *(undefined2 *)(param_1 + 0x32));
    uVar7 = 1;
    if ((uVar6 & 1) == 0) {
      uVar7 = 2;
    }
    if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x2f) != '\x02')) {
      uVar4 = FUN__text__0069142c(*(undefined8 *)(param_1 + 0x10),iVar1,
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      lVar5 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),0x20,
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      if (lVar5 == 0) {
        lVar5 = FUN__text__006911b0(*(undefined8 *)(param_1 + 0x10),0x20,
                                    *(undefined4 *)(param_1 + 0x18));
      }
      goto LAB__text__0068dd7c;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    lVar5 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),uVar2,
                                *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
    if (lVar5 == 0) {
      lVar5 = FUN__text__006911b0(*(undefined8 *)(param_1 + 0x10),uVar2,
                                  *(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    uVar7 = 0;
  }
  uVar4 = *(undefined2 *)(lVar5 + 0x4c);
LAB__text__0068dd7c:
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar5 + 0x4e);
  uVar3 = *(undefined2 *)(lVar5 + 0x48);
  *(undefined2 *)((long)param_2 + 0xc) = uVar4;
  *(undefined2 *)((long)param_2 + 10) = uVar3;
  *(undefined2 *)((long)param_2 + 0xe) = *(undefined2 *)(lVar5 + 0x44);
  *(short *)(param_2 + 2) = *(short *)(lVar5 + 0x4a) + 1;
  *(short *)((long)param_2 + 0x12) = *(short *)(lVar5 + 0x46) + 1;
  *(short *)(param_2 + 3) = *(short *)(lVar5 + 0x40) + 1;
  *(undefined2 *)((long)param_2 + 0x1a) = *(undefined2 *)(lVar5 + 0x42);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  *(undefined2 *)((long)param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *param_2 = uVar8;
  *(undefined2 *)((long)param_2 + 0x1c) = 8;
  *(short *)((long)param_2 + 0x14) = (short)*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28);
  *(short *)((long)param_2 + 0x16) = (short)*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x2c);
  param_2[4] = *(long *)(param_1 + 0x10) + 0x1ea8;
  *(short *)((long)param_2 + 0x2c) = *(short *)(lVar5 + 0x50) - *(short *)(param_1 + 0x24);
  *(byte *)(lVar5 + 0x38) = *(byte *)(lVar5 + 0x38) | 4;
  return uVar7;
}


