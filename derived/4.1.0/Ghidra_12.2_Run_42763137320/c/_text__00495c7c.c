/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00495c7c; name: FUN_.text__00495c7c
 */


undefined8 FUN__text__00495c7c(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  
  pbVar6 = (byte *)*param_2;
  bVar1 = *pbVar6;
  *param_2 = (long)(pbVar6 + 1);
  bVar2 = pbVar6[1];
  *param_2 = (long)(pbVar6 + 2);
  *(uint *)((long)param_1 + 0xd2) =
       *(uint *)((long)param_1 + 0xd2) & 0xffff8000 |
       *(uint *)((long)param_1 + 0xd2) & 0x3fff | (bVar1 >> 2 & 1) << 0xe;
  uVar5 = *(ushort *)*param_2;
  *param_2 = (long)((ushort *)*param_2 + 1);
  *(uint *)((long)param_1 + 0xd2) = *(uint *)((long)param_1 + 0xd2) & 0xfffffc00 | uVar5 & 0x3ff;
  puVar7 = (undefined1 *)*param_2;
  uVar3 = *puVar7;
  *param_2 = (long)(puVar7 + 1);
  bVar4 = puVar7[1];
  *param_2 = (long)(puVar7 + 2);
  *(byte *)((long)param_1 + 0xe9) = *(byte *)((long)param_1 + 0xe9) & 0x8f | (bVar4 & 0xe) << 3;
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xc0 | (bVar2 & 7) << 3 | bVar2 & 7;
  FUN__text__00466ff0(param_1,bVar1 & 1);
  FUN__text__00467280(param_1,bVar1 >> 1 & 1);
  (**(code **)(*param_1 + 0x278))(param_1,uVar3);
  FUN__text__0046425c(param_1);
  *(uint *)((long)param_1 + 0xd2) =
       *(uint *)((long)param_1 + 0xd2) & 0xe0000000 |
       *(uint *)((long)param_1 + 0xd2) & 0xfffffff | (bVar1 >> 3 & 1) << 0x1c;
  FUN__text__0046730c(param_1,bVar1 >> 4 & 1);
  param_1[0x13] =
       param_1[0x13] & 0xffffffffffe00000U | param_1[0x13] & 0xfffffU | ((ulong)bVar4 & 1) << 0x14;
  (**(code **)(*param_1 + 0x188))(param_1,0,0);
  return 1;
}


