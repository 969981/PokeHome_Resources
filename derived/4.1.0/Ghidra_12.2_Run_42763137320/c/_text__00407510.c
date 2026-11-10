/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407510; name: FUN_.text__00407510
 */


void FUN__text__00407510(undefined4 param_1,undefined4 param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  float *pfVar7;
  ulong uVar8;
  undefined1 *__s;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  
  if ((short)param_3[6] == *(short *)(param_4 + 0x10)) {
    uVar1 = *(uint *)(param_3 + 5);
    if ((uVar1 != *(uint *)(param_4 + 8)) || (((*(uint *)(param_4 + 8) ^ uVar1) & 0xff) != 0))
    goto LAB__text__004076c4;
  }
  else {
LAB__text__004076c4:
    FUN__text__0041edb0(param_3 + 4);
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)(param_4 + 0xc);
    *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_4 + 0x10);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    iVar2 = FUN__text__0041ec00(param_3 + 4);
    if (iVar2 != 1) goto LAB__text__00407738;
    uVar1 = *(uint *)(param_3 + 5);
  }
  if ((uVar1 & 0xf00) != 0x200) {
    (**(code **)(*param_3 + 0x10))(param_1,param_2,param_3,param_4);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    return;
  }
  local_6c = 0;
  local_64 = 0x3f800000ffffffff;
  local_5c = 0x1ffffffff;
  local_78 = *(ulong *)(param_4 + 8);
  local_80 = (void *)0x0;
  local_70 = *(undefined4 *)(param_4 + 0x10);
  iVar2 = FUN__text__0041ec00(&local_80);
  if (iVar2 == 1) {
    uVar8 = (ulong)(ushort)local_70;
    memset(local_80,0,(local_78 & 0xff) * uVar8 * 4);
    uVar3 = uVar1 & 0xff;
    __s = auStack_90 + -(ulong)((uVar3 * 4 + 0xc & 0x7f0) * uVar3);
    iVar2 = (uVar3 + 3 & 0x1fc) * uVar3;
    if (iVar2 != 0) {
      memset(__s,0,(ulong)(uint)(iVar2 * 4));
    }
    if (0xf < uVar3) {
      uVar3 = 0x10;
    }
    uVar4 = (ulong)uVar3;
    if (uVar3 != 0) {
      pbVar5 = &DAT_00724ab0;
      puVar6 = __s;
      pfVar7 = (float *)&DAT_0073b0c0;
      do {
        uVar4 = uVar4 - 1;
        *(float *)(puVar6 + (ulong)*pbVar5 * 4) = 0.70710677 / *pfVar7;
        puVar6 = puVar6 + ((ulong)((uVar1 & 0xff) * 4 + 0xc) & 0x7f0);
        pbVar5 = pbVar5 + 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar4 != 0);
    }
    local_88 = 0x3f8000003f800000;
    thunk_FUN__text__00420290(1.0 / (float)uVar8,param_4,&local_80,&local_88,__s,__s,uVar8);
    (**(code **)(*param_3 + 0x10))(param_1,param_2,param_3,&local_80);
    *(undefined2 *)((long)param_3 + 0x32) = *(undefined2 *)(param_4 + 0x12);
    FUN__text__0041edb0(&local_80);
    return;
  }
LAB__text__00407738:
  *(undefined2 *)((long)param_3 + 0x32) = 0;
  return;
}


