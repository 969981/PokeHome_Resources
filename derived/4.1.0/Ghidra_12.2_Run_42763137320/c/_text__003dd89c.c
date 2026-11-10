/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dd89c; name: FUN_.text__003dd89c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003dd89c(long *param_1,undefined1 (*param_2) [16])

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  void *pvVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  
  if (*param_1 != 0) {
    return 0x72;
  }
  uVar10 = *(ulong *)param_2[1];
  if (uVar10 < 0x201) {
    uVar10 = 0x200;
  }
  pvVar7 = operator_new__(uVar10,_DAT_008a37f8);
  if (pvVar7 != (void *)0x0) {
    puVar8 = operator_new(0xb0,_DAT_008a37f8);
    if (puVar8 != (undefined4 *)0x0) {
      puVar8[0x27] = 0;
      uVar15 = uRam0000000000724788;
      uVar13 = _DAT_00724780;
      *(undefined2 *)(puVar8 + 0x26) = 0x101;
      *(undefined8 *)(puVar8 + 0x12) = 0;
      *(undefined8 *)(puVar8 + 0x14) = 0;
      *(undefined8 *)(puVar8 + 0x1a) = 0;
      *(undefined8 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)(puVar8 + 0x1e) = 0;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0xc) = uVar15;
      *(undefined8 *)(puVar8 + 10) = uVar13;
      uVar13 = _DAT_00724ca0;
      uVar12 = *(ulong *)(param_2[1] + 8);
      if (uVar12 < 5) {
        uVar12 = 4;
      }
      *(undefined8 *)(puVar8 + 0x10) = uRam0000000000724ca8;
      *(undefined8 *)(puVar8 + 0xe) = uVar13;
      uVar4 = *(ulong *)*param_2;
      uVar5 = *(ulong *)(*param_2 + 8);
      auVar6 = *param_2;
      *(undefined8 *)(puVar8 + 0x22) = 0;
      *(undefined8 *)(puVar8 + 0x24) = 0;
      *(undefined8 *)(puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0x884fb0;
      uVar11 = uVar12 << 3;
      if (uVar12 >> 0x3d != 0) {
        uVar11 = 0xffffffffffffffff;
      }
      *(undefined8 *)(puVar8 + 0x28) = 0;
      *(undefined8 *)(puVar8 + 0x2a) = 0;
      puVar9 = operator_new__(uVar11,_DAT_008a37f8);
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined1 *)(param_1 + 5) = 0;
        auVar14._8_8_ = 0x10;
        auVar14._0_8_ = 0x10;
        param_1[3] = (long)pvVar7;
        param_1[4] = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        *(ulong *)(puVar8 + 0xe) = uVar10;
        *(ulong *)(puVar8 + 0x10) = uVar12;
        pcVar1 = _DAT_008a37f0;
        lVar3 = -(ulong)(0x10 < uVar5);
        auVar2._8_4_ = (int)lVar3;
        auVar2._0_8_ = -(ulong)(0x10 < uVar4);
        auVar2._12_4_ = (int)((ulong)lVar3 >> 0x20);
        auVar14 = auVar14 ^ (auVar14 ^ auVar6) & auVar2;
        uVar10 = *(ulong *)(param_2[2] + 8);
        uVar15 = *(undefined8 *)param_2[2];
        uVar13 = *(undefined8 *)param_2[3];
        *puVar9 = 0;
        *puVar8 = 0;
        *(undefined8 *)(puVar8 + 2) = 0;
        *(undefined8 **)(puVar8 + 4) = puVar9;
        *param_1 = (long)puVar8;
        *(long *)(puVar8 + 0xc) = auVar14._8_8_;
        *(long *)(puVar8 + 10) = auVar14._0_8_;
        *(undefined8 *)(puVar8 + 0x16) = uVar13;
        *(ulong *)(puVar8 + 0x14) = uVar10;
        *(undefined8 *)(puVar8 + 0x12) = uVar15;
        if ((uVar10 & 0x200000000) != 0) {
          pcVar1 = FUN__text__003dda60;
        }
        *(undefined8 *)(puVar8 + 6) = 0;
        *(code **)(puVar8 + 8) = pcVar1;
        return 0;
      }
      operator_delete(puVar8);
    }
    operator_delete__(pvVar7);
  }
  return 0xc;
}


