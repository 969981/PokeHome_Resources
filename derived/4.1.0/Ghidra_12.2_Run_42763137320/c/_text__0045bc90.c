/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045bc90; name: FUN_.text__0045bc90
 */


undefined8 * FUN__text__0045bc90(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  long local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  long *local_e0;
  long local_d8;
  char local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar7 = *(uint *)(param_1 + 0x148);
  uVar2 = *(uint *)(param_1 + 0x14c);
  if (uVar2 <= uVar7) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__0045c890(param_1 + 0x28,iVar1);
    if ((uVar4 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(param_1 + 0x14c) <= uVar7) {
      return (undefined8 *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 0x148);
  }
  lVar6 = *(long *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x148) = uVar7 + 1;
  if (lVar6 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)(lVar6 + (ulong)uVar7 * 0x118);
    FUN__text__0045b8c8(puVar5);
    FUN__text__0045b980(&local_178,*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x160),param_2,
                        param_3);
    lVar3 = local_d8;
    puVar5[2] = local_168;
    puVar5[3] = uStack_160;
    *puVar5 = local_178;
    puVar5[1] = uStack_170;
    puVar5[9] = local_130;
    puVar5[10] = uStack_128;
    puVar5[7] = local_140;
    puVar5[8] = uStack_138;
    puVar5[0xd] = local_110;
    puVar5[0xe] = uStack_108;
    puVar5[0xb] = local_120;
    puVar5[0xc] = uStack_118;
    *(undefined4 *)(puVar5 + 0x12) = local_e8;
    puVar5[0x10] = local_f8;
    puVar5[0x11] = CONCAT44(local_ec,local_f0);
    puVar5[0xf] = local_100;
    puVar5[5] = uStack_150;
    puVar5[6] = local_148;
    puVar5[4] = local_158;
    if ((puVar5[0x14] != 0) &&
       (pcVar8 = (char *)(lVar6 + (ulong)uVar7 * 0x118 + 0xa8), *pcVar8 != '\0')) {
      (**(code **)(*(long *)puVar5[0x13] + 0x18))();
      *pcVar8 = '\0';
    }
    puVar5[0x14] = lVar3;
    puVar5[0x13] = local_e0;
    lVar6 = lVar6 + (ulong)uVar7 * 0x118;
    *(undefined1 *)(lVar6 + 0xb0) = local_c8;
    *(undefined8 *)(lVar6 + 200) = local_b0;
    *(undefined8 *)(lVar6 + 0xd0) = uStack_a8;
    *(undefined8 *)(lVar6 + 0xb8) = local_c0;
    *(undefined8 *)(lVar6 + 0xc0) = uStack_b8;
    *(undefined8 *)(lVar6 + 0xe8) = local_90;
    *(undefined8 *)(lVar6 + 0xf0) = uStack_88;
    *(undefined8 *)(lVar6 + 0xd8) = local_a0;
    *(undefined8 *)(lVar6 + 0xe0) = uStack_98;
    *(undefined1 *)(lVar6 + 0x110) = local_68;
    *(undefined8 *)(lVar6 + 0x100) = uStack_78;
    *(undefined8 *)(lVar6 + 0x108) = local_70;
    *(undefined8 *)(lVar6 + 0xf8) = local_80;
    FUN__text__0045cc00(&local_90);
    FUN__text__00451d7c(&uStack_b8);
    FUN__text__00451cdc(&uStack_b8);
    if (local_f8 != 0) {
      local_f0 = 0;
      (**(code **)(*local_100 + 0x18))();
      local_f8 = 0;
      local_ec = 0;
    }
    if ((local_d8 != 0) && (local_d0 != '\0')) {
      (**(code **)(*local_e0 + 0x18))();
    }
  }
  return puVar5;
}


