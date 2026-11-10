/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00317c34; name: FUN_.text__00317c34
 */


void FUN__text__00317c34(long param_1,char *param_2)

{
  undefined *__s;
  char *__s_00;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  int iVar13;
  size_t sVar14;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  undefined1 local_80;
  undefined4 local_7c;
  uint uStack_78;
  uint local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  ulong local_68;
  
  __s_00 = (char *)(param_1 + 0x13560a0);
  __s = &DAT_009cca20 + param_1;
  memset(__s,0,20000000);
  local_6c = 0;
  local_80 = 0;
  *__s_00 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  cVar7 = param_2[8];
  bVar8 = param_2[5];
  *(undefined2 *)(param_1 + 0x13560a1) = *(undefined2 *)(param_2 + 6);
  *(char *)(param_1 + 0x13560a3) = cVar7;
  uVar3 = *(uint *)(param_2 + 9);
  *(char *)(param_1 + 0x13560a4) = param_2[0xd];
  uVar11 = *(uint3 *)(param_2 + 0xe);
  uVar12 = *(uint3 *)(param_2 + 0x11);
  *(undefined2 *)(param_1 + 0x13560a5) = *(undefined2 *)(param_2 + 0x14);
  uVar4 = *(uint *)(param_2 + 0x16);
  cVar7 = param_2[0x1c];
  *(undefined2 *)(param_1 + 0x13560a7) = *(undefined2 *)(param_2 + 0x1a);
  *(char *)(param_1 + 0x13560a9) = cVar7;
  bVar9 = param_2[0x1d];
  uVar5 = *(undefined4 *)(param_2 + 0x1e);
  uVar10 = *(undefined2 *)(param_2 + 0x22);
  *(char *)(param_1 + 0x13560ac) = param_2[0x24];
  *(undefined2 *)(param_1 + 0x13560aa) = uVar10;
  cVar7 = param_2[0x2b];
  uVar6 = *(undefined4 *)(param_2 + 0x25);
  *(undefined2 *)(param_1 + 0x13560ad) = *(undefined2 *)(param_2 + 0x29);
  *(char *)(param_1 + 0x13560af) = cVar7;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  strncpy((char *)(param_1 + 0x13560b0),param_2 + 0x30,0x989660);
  local_90 = uVar1;
  uStack_8c = uVar5;
  local_88 = uVar4 << 0x18 | (uint)uVar12;
  uStack_84 = uVar3 << 8 | (uint)bVar8;
  local_7c = uVar2;
  uStack_78 = uVar3 >> 0x18 | (uint)(((ulong)uVar11 << 0x28) >> 0x20);
  local_74 = uVar4 >> 8 | (uint)(((ulong)bVar9 << 0x38) >> 0x20);
  uStack_70 = uVar6;
  sVar14 = strlen(__s_00);
  iVar13 = FUN__text__003d5a80(&local_68,__s,&DAT_00989680,__s_00,sVar14,0);
  memset(__s_00,0,10000000);
  if (iVar13 == 0) {
    nn::crypto::DecryptAes128Cbc(__s_00,10000000,&local_7c,0x10,&local_90,0x10,__s,local_68);
  }
  return;
}


