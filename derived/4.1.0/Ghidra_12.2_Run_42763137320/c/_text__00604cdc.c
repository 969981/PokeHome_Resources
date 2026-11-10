/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604cdc; name: FUN_.text__00604cdc
 */


void FUN__text__00604cdc(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_d0 [48];
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
  
  puVar8 = (undefined8 *)*param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  pbVar9 = param_1 + 0x20;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_a0 = *puVar8;
  uStack_98 = puVar8[1];
  local_80 = puVar8[4];
  uStack_78 = puVar8[5];
  local_90 = puVar8[2];
  uStack_88 = puVar8[3];
  local_60 = puVar8[8];
  uStack_58 = puVar8[9];
  local_70 = puVar8[6];
  uStack_68 = puVar8[7];
  FUN__text__0063e3f4(&local_a0);
  FUN__text__0063dcb4(auStack_d0,&local_a0);
  auVar10 = FUN__text__0063e1c8(auStack_d0);
  uVar3 = FUN__text__0063df80(auStack_d0);
  uVar4 = FUN__text__0063df64(auStack_d0);
  bVar1 = FUN__text__00607588(auVar10._0_8_,auVar10._8_8_ & 0xffff,param_1 + 6,uVar3,uVar4);
  *param_1 = bVar1 & 1;
  uVar3 = FUN__text__0063df80(auStack_d0);
  uVar4 = FUN__text__0063def8(auStack_d0);
  uVar5 = FUN__text__0063df8c(auStack_d0);
  uVar6 = FUN__text__0063df98(auStack_d0,0);
  uVar7 = FUN__text__0063e020(auStack_d0,0);
  uVar2 = FUN__text__006074ec(uVar3,uVar4,uVar5,uVar6,uVar7,*(undefined4 *)(param_2 + 1));
  *(undefined2 *)(param_1 + 1) = uVar2;
  uVar3 = FUN__text__0063df80(auStack_d0);
  uVar4 = FUN__text__0063def8(auStack_d0);
  uVar5 = FUN__text__0063e1a0(auStack_d0);
  uVar6 = FUN__text__0063e1b0(auStack_d0);
  FUN__text__00607670(param_1 + 3,param_1 + 4,uVar3,uVar4,uVar5,uVar6,*(undefined4 *)(param_2 + 1));
  uVar3 = FUN__text__0063df80(auStack_d0);
  uVar4 = FUN__text__0063def8(auStack_d0);
  uVar5 = FUN__text__0063df8c(auStack_d0);
  FUN__text__00607750(pbVar9,uVar3,uVar4,*(undefined4 *)(param_2 + 1),uVar5);
  return;
}


