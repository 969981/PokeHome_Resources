/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00191408; name: FUN_.text__00191408
 */


void FUN__text__00191408(byte *param_1,long *param_2,long param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long local_48;
  
  local_48 = *param_2;
  if (local_48 == 0) {
    FUN__text__001916b0(param_3,&local_48,param_4,0);
  }
  else {
    plVar9 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN__text__001916b0(param_3,&local_48,param_4,0);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  uVar5 = FUN__text__00306a10(*param_2);
  *param_1 = 1;
  uVar7 = FUN__text__00306588(*param_2);
  if ((uVar7 & 1) == 0) {
    *param_1 = *param_1 | 2;
    bVar1 = FUN__text__00306a08(*param_2,0);
    bVar2 = FUN__text__00306a08(*param_2,1);
    bVar3 = 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar1 & 1;
    }
    param_1[7] = bVar3;
    if (bVar3 == 0) {
      uVar4 = FUN__text__003065f8(*param_2);
      *(undefined2 *)(param_1 + 2) = uVar4;
      bVar3 = FUN__text__00306600(*param_2);
      param_1[4] = bVar3;
      bVar3 = FUN__text__0030680c(*param_2);
      param_1[5] = bVar3;
      bVar3 = FUN__text__003067fc(*param_2);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[6] = bVar3 & 1;
      if (*(short *)(param_1 + 2) == 0x365) {
        uVar6 = FUN__text__003069d8(*param_2);
        *(uint *)(param_1 + 8) = uVar6 & 0xff;
      }
      bVar3 = FUN__text__00306610(*param_2);
      param_1[0xc] = bVar3;
      uVar4 = FUN__text__00306640(*param_2);
      *(undefined2 *)(param_1 + 0xe) = uVar4;
      uVar4 = FUN__text__00306694(*param_2,0);
      *(undefined2 *)(param_1 + 0x10) = uVar4;
      uVar4 = FUN__text__00306694(*param_2,1);
      *(undefined2 *)(param_1 + 0x12) = uVar4;
      uVar4 = FUN__text__00306694(*param_2,2);
      *(undefined2 *)(param_1 + 0x14) = uVar4;
      uVar4 = FUN__text__00306694(*param_2,3);
      *(undefined2 *)(param_1 + 0x16) = uVar4;
      uVar4 = FUN__text__00306694(*param_2,4);
      *(undefined2 *)(param_1 + 0x18) = uVar4;
      uVar4 = FUN__text__00306694(*param_2,5);
      *(undefined2 *)(param_1 + 0x1a) = uVar4;
      uVar7 = FUN__text__00307ba4(*param_2);
      if ((uVar7 & 1) != 0) {
        *param_1 = *param_1 | 4;
      }
    }
    else {
      param_1[6] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      uVar4 = 0x402;
      if ((bVar1 & (bVar2 ^ 0xff) & 1) == 0) {
        uVar4 = 0x403;
      }
      param_1[4] = 0;
      param_1[5] = 2;
      param_1[0xc] = 0;
      *(undefined2 *)(param_1 + 2) = uVar4;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 2);
    if (0x402 < uVar6) {
      uVar6 = 0x403;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(long *)(param_3 + 8) + (ulong)uVar6 * 4);
    uVar8 = FUN__text__00307c98(*param_2);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
  }
  FUN__text__00306a18(*param_2,uVar5 & 1);
  if ((*param_1 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(uint *)(param_4 + 8) << 5;
    if (*param_4 != '\0') {
      uVar7 = 0;
    }
    uVar7 = uVar7 | (uint)(*(int *)(param_4 + 0xc) + *(int *)(param_4 + 0x10) * 6) |
            (ulong)*(uint *)(param_4 + 4) << 0xf | (ulong)*(ushort *)(param_1 + 2) << 0x35 |
            (ulong)param_1[4] << 0x2d | (ulong)param_1[5] << 0x2b |
            (ulong)*(uint *)(param_1 + 8) << 0x14 | (ulong)param_1[6] << 0x12;
  }
  *(ulong *)(param_1 + 0x28) = uVar7;
  return;
}


