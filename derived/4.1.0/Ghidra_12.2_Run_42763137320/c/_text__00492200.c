/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00492200; name: FUN_.text__00492200
 */


void FUN__text__00492200(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar3 = *param_1;
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 < *(uint *)(lVar3 + 0x28)) {
    do {
      lVar5 = *(long *)(lVar3 + 0x20) + (ulong)uVar4 * 0x88;
      bVar1 = *(byte *)(*(long *)(lVar3 + 0x30) + (ulong)uVar4);
      FUN__text__004934f0(param_1 + 2,*(undefined8 *)(lVar5 + 0x70),&uStack_32);
      if (*(char *)((long)param_1 + 0x4c) != '\0') {
        if (*(float *)(lVar5 + 0x30) < *(float *)((long)param_1 + 0xc)) {
          *(int *)(param_1 + 1) = (int)param_1[8];
          *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar5 + 0x30);
        }
        if (((bVar1 & 5) != 0) && (*(float *)(lVar5 + 0x50) < *(float *)((long)param_1 + 0x44))) {
          *(float *)((long)param_1 + 0x44) = *(float *)(lVar5 + 0x50);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar5 + 0x54);
        }
      }
      uVar4 = (int)param_1[8] + 1;
      lVar3 = *param_1;
      *(uint *)(param_1 + 8) = uVar4;
    } while (uVar4 < *(uint *)(lVar3 + 0x28));
  }
  *(undefined1 *)((long)param_1 + 0x4c) = 1;
  lVar5 = *(long *)(*(long *)(lVar3 + 8) + 8);
  uVar2 = FUN__text__0044a4e4();
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x4a) != '\0') {
    FUN__text__00492450(param_1,lVar5,param_1 + 2,uVar2);
    lVar3 = *param_1;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 < *(uint *)(lVar3 + 0x28)) {
    do {
      lVar6 = *(long *)(lVar3 + 0x20) + (ulong)uVar4 * 0x88;
      bVar1 = *(byte *)(*(long *)(lVar3 + 0x30) + (ulong)uVar4);
      FUN__text__004934f0(param_1 + 2,*(undefined8 *)(lVar6 + 0x70),&uStack_31);
      if (*(char *)((long)param_1 + 0x4c) != '\0') {
        if (*(float *)(lVar6 + 0x30) < *(float *)((long)param_1 + 0xc)) {
          *(int *)(param_1 + 1) = (int)param_1[8];
          *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(lVar6 + 0x30);
        }
        if (((bVar1 & 5) != 0) && (*(float *)(lVar6 + 0x50) < *(float *)((long)param_1 + 0x44))) {
          *(float *)((long)param_1 + 0x44) = *(float *)(lVar6 + 0x50);
        }
        if ((bVar1 >> 1 & 1) != 0) {
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar6 + 0x54);
        }
      }
      uVar4 = (int)param_1[8] + 1;
      lVar3 = *param_1;
      *(uint *)(param_1 + 8) = uVar4;
    } while (uVar4 < *(uint *)(lVar3 + 0x28));
  }
  *(undefined1 *)((long)param_1 + 0x4c) = 1;
  if (*(uint *)(param_1 + 1) != 0xffffffff) {
    lVar6 = *(long *)(lVar3 + 0x20) + (ulong)*(uint *)(param_1 + 1) * 0x88;
    lVar3 = FUN__text__0047d7d0(*(undefined8 *)(lVar6 + 0x70));
    if ((lVar3 != 0) && (*(short *)(*param_1 + 0x48) != 0)) {
      FUN__text__00492964(*(undefined4 *)((long)param_1 + 0x44),(int)param_1[9],*param_1,lVar6,lVar3
                         );
    }
  }
  *(byte *)(lVar5 + 0x7c) = *(byte *)(lVar5 + 0x7c) & 0xfe;
  if ((long *)param_1[6] != (long *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    if ((long *)param_1[6] != param_1 + 2) {
      FUN__text__00400fc0(4);
    }
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  return;
}


