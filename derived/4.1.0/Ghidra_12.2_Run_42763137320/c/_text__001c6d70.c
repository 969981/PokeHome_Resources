/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c6d70; name: FUN_.text__001c6d70
 */


undefined1  [16] FUN__text__001c6d70(long param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  
  lVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar5 = 0;
  bVar9 = true;
  do {
    lVar2 = param_1 + lVar6;
    uVar3 = FUN__text__00196360(lVar2 + 0x20);
    if ((uVar3 & 1) != 0) {
      if (bVar9) {
        uVar8 = *(undefined4 *)(lVar2 + 0x24);
        uVar7 = *(uint *)(lVar2 + 0x28);
        bVar9 = false;
        uVar5 = *(undefined8 *)(lVar2 + 0x2c);
      }
      else {
        uVar4 = *(uint *)(lVar2 + 0x28);
        puVar1 = (uint *)(lVar2 + 0x2c);
        if (uVar4 < uVar7) {
          bVar9 = false;
          uVar5 = *(undefined8 *)puVar1;
          uVar8 = *(undefined4 *)(lVar2 + 0x24);
          uVar7 = uVar4;
        }
        else if (uVar4 == uVar7) {
          uVar4 = (uint)((ulong)uVar5 >> 0x20);
          if (uVar4 <= *(uint *)(lVar2 + 0x30)) {
            bVar9 = false;
            if ((*(uint *)(lVar2 + 0x30) != uVar4) || ((uint)uVar5 <= *puVar1))
            goto LAB__text__001c6db0;
          }
          bVar9 = false;
          uVar5 = *(undefined8 *)puVar1;
          uVar8 = *(undefined4 *)(lVar2 + 0x24);
        }
        else {
          bVar9 = false;
        }
      }
    }
LAB__text__001c6db0:
    lVar6 = lVar6 + 0x14;
    if (lVar6 == 600) {
      auVar10._4_4_ = uVar7;
      auVar10._0_4_ = uVar8;
      auVar10._8_8_ = uVar5;
      return auVar10;
    }
  } while( true );
}


