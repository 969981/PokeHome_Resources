/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068df70; name: FUN_.text__0068df70
 */


void FUN__text__0068df70(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar1 = 0x2d;
  if (*(char *)(param_1 + 0x30) == '\0' || param_3 != 0x2011) {
    iVar1 = param_3;
  }
  if ((*(char *)(param_1 + 0x2f) == '\x02') ||
     (uVar5 = FUN__text__00691184(*(undefined8 *)(param_1 + 0x10),iVar1,
                                  *(undefined2 *)(param_1 + 0x32)), (uVar5 & 1) == 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    lVar6 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),uVar2,
                                *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
    if (lVar6 == 0) {
      lVar6 = FUN__text__006911b0(*(undefined8 *)(param_1 + 0x10),uVar2,
                                  *(undefined4 *)(param_1 + 0x18));
    }
    uVar4 = *(undefined2 *)(lVar6 + 0x4c);
  }
  else {
    uVar4 = FUN__text__0069142c(*(undefined8 *)(param_1 + 0x10),iVar1,
                                *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
    lVar6 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18)
                                ,*(undefined2 *)(param_1 + 0x32));
    if (lVar6 == 0) {
      lVar6 = FUN__text__006911b0(*(undefined8 *)(param_1 + 0x10),0x20,
                                  *(undefined4 *)(param_1 + 0x18));
    }
  }
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar6 + 0x4e);
  uVar3 = *(undefined2 *)(lVar6 + 0x48);
  *(undefined2 *)((long)param_2 + 0xc) = uVar4;
  *(undefined2 *)((long)param_2 + 10) = uVar3;
  *(undefined2 *)((long)param_2 + 0xe) = *(undefined2 *)(lVar6 + 0x44);
  *(short *)(param_2 + 2) = *(short *)(lVar6 + 0x4a) + 1;
  *(short *)((long)param_2 + 0x12) = *(short *)(lVar6 + 0x46) + 1;
  *(short *)(param_2 + 3) = *(short *)(lVar6 + 0x40) + 1;
  *(undefined2 *)((long)param_2 + 0x1a) = *(undefined2 *)(lVar6 + 0x42);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  *(undefined2 *)((long)param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *param_2 = uVar7;
  *(undefined2 *)((long)param_2 + 0x1c) = 8;
  *(short *)((long)param_2 + 0x14) = (short)*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28);
  *(short *)((long)param_2 + 0x16) = (short)*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x2c);
  param_2[4] = *(long *)(param_1 + 0x10) + 0x1ea8;
  *(short *)((long)param_2 + 0x2c) = *(short *)(lVar6 + 0x50) - *(short *)(param_1 + 0x24);
  *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) | 4;
  return;
}


