/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f3810; name: FUN_.text__002f3810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002f3810(long *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  undefined1 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
  if ((uVar5 & 1) != 0) {
    lVar1 = _DAT_008a25c0 + 0x10;
    do {
      plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,4,plVar3[1]);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_c8,4,0);
        uVar5 = uVar5 & 0xffffffff;
      }
      lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 4;
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar7 = (uint)local_c8;
      local_c8 = 0x87c3e8;
      if (uVar7 == 0) {
        uStack_70 = 0;
      }
      else {
        uVar2 = uVar7 - (uVar7 >> 1 & 0x55555555);
        uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
        uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (3 < uVar2) {
          uVar5 = (ulong)uVar2 & 0x3c;
          do {
            uVar7 = uVar7 ^ uVar7 << 2;
            uVar5 = uVar5 - 4;
            uVar7 = uVar7 ^ uVar7 >> 0xf;
            uVar7 = uVar7 ^ uVar7 << 0xd;
            uVar7 = uVar7 ^ uVar7 << 2;
            uVar7 = uVar7 ^ uVar7 >> 0xf;
            uVar7 = uVar7 ^ uVar7 << 0xd;
            uVar7 = uVar7 ^ uVar7 << 2;
            uVar7 = uVar7 ^ uVar7 >> 0xf;
            uVar7 = uVar7 ^ uVar7 << 0xd;
            uVar7 = uVar7 ^ uVar7 << 2;
            uVar7 = uVar7 ^ uVar7 >> 0xf;
            uVar7 = uVar7 ^ uVar7 << 0xd;
          } while (uVar5 != 0);
        }
        uVar5 = (ulong)uVar2 & 3;
        if ((uVar2 & 3) != 0) {
          do {
            uVar7 = uVar7 ^ uVar7 << 2;
            uVar5 = uVar5 - 1;
            uVar7 = uVar7 ^ uVar7 >> 0xf;
            uVar7 = uVar7 ^ uVar7 << 0xd;
          } while (uVar5 != 0);
        }
        uStack_70 = CONCAT44(uVar7,uVar7);
      }
      local_a8 = param_1[4];
      lStack_a0 = param_1[5];
      local_78 = 0;
      local_c0 = 0x87c418;
      local_98 = (undefined1)param_1[6];
      local_90 = param_1[7];
      lStack_88 = param_1[8];
      local_80 = param_1[9];
      local_b8 = param_1[2];
      lStack_b0 = lVar1;
      local_68 = local_b8;
      auVar8 = FUN__text__002f5130(&local_c8);
      if ((auVar8._0_8_ & 0xff) == 0) {
        return 0;
      }
      plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,auVar8._8_8_,plVar3[1]);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + auVar8._8_8_;
      plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
    } while ((uVar5 & 1) != 0);
  }
  return 1;
}


