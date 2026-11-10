/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f0960; name: FUN_.text__002f0960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002f0960(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  }
  FUN__text__002c8fc4(&local_58,param_1,param_2,*param_4 + 5);
  if (local_58 != (uint *)0x0) {
    uStack_88 = *(undefined8 *)(local_58 + 2);
    local_80 = *(undefined8 *)(local_58 + 6);
    local_a8[0] = _DAT_008a25d0 + 0x10;
    uVar8 = *local_58;
    if (uVar8 == 0) {
      uStack_68 = 0;
    }
    else {
      uVar5 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar5 != 1) {
        uVar10 = (ulong)uVar5 & 0x3e;
        do {
          uVar8 = uVar8 ^ uVar8 << 2;
          uVar10 = uVar10 - 2;
          uVar8 = uVar8 ^ uVar8 >> 0xf;
          uVar8 = uVar8 ^ uVar8 << 0xd;
          uVar8 = uVar8 ^ uVar8 << 2;
          uVar8 = uVar8 ^ uVar8 >> 0xf;
          uVar8 = uVar8 ^ uVar8 << 0xd;
        } while (uVar10 != 0);
      }
      uVar2 = uVar8 ^ uVar8 << 2;
      uVar2 = uVar2 ^ uVar2 >> 0xf;
      if ((uVar5 & 1) != 0) {
        uVar8 = uVar2 ^ uVar2 << 0xd;
      }
      uStack_68 = CONCAT44(uVar8,uVar8);
    }
    local_70 = 0;
    local_78 = 0;
    local_60 = 0;
    local_a8[3] = _DAT_008a25c0 + 0x10;
    local_a8[1] = 0x87ad98;
    local_a8[2] = 0;
    uVar10 = FUN__text__002c8dd0(local_a8,*param_3,*param_4);
    if ((uVar10 & 1) != 0) {
      puVar3 = *(uint **)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      puVar7 = (uint *)(lVar4 + -0x20);
      local_50 = *(undefined8 *)puVar7;
      uStack_48 = *(undefined8 *)(lVar4 + -0x18);
      local_40 = *(undefined8 *)(lVar4 + -0x10);
      uStack_38 = *(undefined8 *)(lVar4 + -8);
      *(uint **)(param_1 + 0x10) = puVar7;
      lVar4 = (long)puVar7 - (long)puVar3;
      if (lVar4 != 0) {
        uVar10 = lVar4 >> 5;
        puVar7 = puVar3;
        do {
          uVar9 = uVar10 >> 1;
          uVar1 = uVar10 + ~uVar9;
          uVar10 = uVar9;
          if (puVar7[uVar9 * 8] <= (uint)local_50) {
            uVar10 = uVar1;
            puVar7 = puVar7 + uVar9 * 8 + 8;
          }
        } while (uVar10 != 0);
      }
      FUN__text__002c92b0((long *)(param_1 + 8),puVar7,&local_50);
      return 1;
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(local_58 + 2),
               *(undefined8 *)(local_58 + 4));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  return 0;
}


