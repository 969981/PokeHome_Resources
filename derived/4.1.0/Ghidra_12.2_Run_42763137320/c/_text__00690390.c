/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00690390; name: FUN_.text__00690390
 */


undefined8 FUN__text__00690390(long param_1,uint *param_2,ulong param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  pbVar1 = (byte *)(param_1 + (param_3 & 0xffffffff) + 0x1888);
  bVar3 = *pbVar1;
  uVar9 = (ulong)bVar3;
  if (bVar3 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x18a8);
    do {
      uVar7 = (ulong)*(byte *)(lVar12 + uVar11);
      uVar8 = *(uint *)(*(long *)(param_1 + 0x1c30) + uVar7 * 4);
      if (uVar8 == 0) {
LAB__text__00690474:
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(param_1 + 0x1bd8))();
          uVar7 = (ulong)*(byte *)(lVar12 + uVar11);
        }
        FUN__text__00691574(param_1,uVar7,iVar5);
        uVar9 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                          ((int)*(undefined8 *)(param_1 + 0x10) + iVar5 * 0xb8);
        if ((uVar9 & 1) != 0) {
          uVar8 = (uint)*(byte *)(lVar12 + uVar11);
          uVar6 = 1;
          goto LAB__text__006904d8;
        }
        uVar9 = (ulong)*pbVar1;
      }
      else if (0 < (int)uVar8) {
        uVar10 = 0;
        bVar4 = true;
        do {
          uVar2 = *(uint *)(*(long *)(param_1 + 0x1c38) + uVar7 * 0x40 + uVar10 * 4);
          if (((uVar2 & 0x7fffffff) <= param_4) &&
             (param_4 <= *(uint *)(*(long *)(param_1 + 0x1c40) + uVar7 * 0x40 + uVar10 * 4))) {
            if (!(bool)((int)uVar2 < 0 | bVar4 ^ 1U)) goto LAB__text__00690474;
            break;
          }
          uVar10 = uVar10 + 1;
          bVar4 = uVar10 < uVar8;
        } while (uVar8 != uVar10);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
    uVar6 = 0;
    uVar8 = 0;
  }
LAB__text__006904d8:
  *param_2 = uVar8;
  return uVar6;
}


