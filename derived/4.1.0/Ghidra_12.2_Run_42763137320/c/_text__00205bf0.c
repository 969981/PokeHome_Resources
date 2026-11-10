/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205bf0; name: FUN_.text__00205bf0
 */


int FUN__text__00205bf0(uint param_1,ulong param_2,ulong param_3,int param_4)

{
  char *__format;
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong local_f0;
  byte *pbStack_e8;
  undefined8 local_e0;
  long local_d8;
  byte local_d0 [32];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  __format = (char *)0x71d999;
  if (999 < param_1) {
    __format = (char *)0x715c97;
  }
  pcVar1 = (char *)0x71cd81;
  if (999 < param_1) {
    pcVar1 = (char *)0x714563;
  }
  if (param_4 != 2) {
    __format = pcVar1;
  }
  uVar7 = 0xcbf29ce484222645;
  snprintf((char *)local_d0,0x20,__format,(ulong)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
  lVar2 = DAT_008e1520;
  if (local_d0[0] != 0) {
    pbVar6 = (byte *)((ulong)local_d0 | 1);
    do {
      uVar7 = (uVar7 ^ local_d0[0]) * 0x100000001b3;
      local_d0[0] = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (local_d0[0] != 0);
  }
  local_e0 = 0x1f;
  local_d8 = 0;
  local_f0 = uVar7;
  pbStack_e8 = local_d0;
  uVar5 = FUN__text__003eec14(DAT_008e1520);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  iVar4 = FUN__text__003ef560(lVar2,&local_f0,uVar5,0);
  if (iVar4 != 0) {
    FUN__text__0015e5bc(*(undefined8 *)(lVar2 + 0x210),&local_f0,iVar4,uVar5,0,&local_b0,0);
    pcVar3 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar3)(&local_90);
    }
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
  }
  return iVar4;
}


