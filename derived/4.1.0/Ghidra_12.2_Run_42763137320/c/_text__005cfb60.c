/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cfb60; name: FUN_.text__005cfb60
 */


/* WARNING: Removing unreachable block (ram,0x005cfd34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cfb60(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  
  uVar4 = FUN__text__006ebc20(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar3 = _DAT_008a0448;
  FUN__text__006f2f70(lVar5,_DAT_008a0448,0,0,0);
  uVar6 = (ulong)*(int *)(lVar5 + 0x1c);
  plVar8 = (long *)(param_1 + 0x78);
  uVar7 = *(long *)(param_1 + 0x80) - *plVar8 >> 5;
  lVar2 = uVar6 - uVar7;
  if (uVar6 < uVar7 || lVar2 == 0) {
    if (uVar6 < uVar7) {
      lVar12 = *plVar8 + uVar6 * 0x20;
      lVar11 = *(long *)(param_1 + 0x80);
      while (lVar10 = lVar11, lVar10 != lVar12) {
        lVar11 = lVar10 + -0x20;
        FUN__text__005b509c(lVar11,lVar2);
        lVar2 = extraout_x1;
        if (*(long *)(lVar10 + -0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar10 + -0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar10 + -0x18) = 0;
          lVar2 = extraout_x1_00;
        }
      }
      *(long *)(param_1 + 0x80) = lVar12;
    }
  }
  else {
    FUN__text__005d00b0(plVar8);
  }
  lVar2 = _DAT_008a5970;
  if (0 < *(int *)(lVar5 + 0x1c)) {
    lVar10 = 0;
    lVar11 = 0;
    lVar12 = 0;
    do {
      lVar9 = *(long *)(*(long *)(lVar5 + 0x20) +
                        *(long *)(lVar2 + (ulong)*(byte *)(lVar5 + 0x14) * 8) + lVar10);
      FUN__text__006f32b0(*(undefined8 *)(lVar9 + 0x68),puVar3,lVar9);
      lVar9 = FUN__text__006f2e18(lVar9,puVar3);
      if (lVar9 != 0) {
        (*(code *)*_DAT_008a5698)(*puVar3,0x19,&local_64);
        FUN__text__005a5684(&local_88,param_2,1,lVar9,(long)local_64);
        puVar1 = (undefined8 *)(*plVar8 + lVar11);
        *puVar1 = local_88;
        if (puVar1[1] != 0) {
          (**(code **)(*(long *)(puVar1[1] + 0x48) + 0x18))();
          puVar1[1] = 0;
        }
        puVar1[1] = local_80;
        puVar1[2] = local_78;
        puVar1[3] = local_70;
        local_80 = 0;
        local_88 = 0;
        local_78 = 0xffffffffffffffff;
        local_70 = 0;
        FUN__text__005b509c(&local_88);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x20;
      lVar10 = lVar10 + 0x40;
    } while (lVar12 < *(int *)(lVar5 + 0x1c));
  }
  return;
}


