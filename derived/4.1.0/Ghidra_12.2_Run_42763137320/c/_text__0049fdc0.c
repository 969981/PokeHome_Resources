/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049fdc0; name: FUN_.text__0049fdc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN__text__0049fdc0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  float *pfVar6;
  uint uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = *(float *)(param_1 + 300);
  fVar11 = *(float *)(param_1 + 0x130) - fVar10;
  fVar9 = *(float *)(param_1 + 0x128);
  if (fVar11 == 0.0) {
    lVar3 = *(long *)(param_1 + 0x58);
    fVar9 = fVar10 + fVar9 + 0.0;
  }
  else {
    lVar4 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
    *_DAT_008a45e8 = lVar4;
    lVar3 = *(long *)(param_1 + 0x58);
    fVar9 = fVar10 + fVar9 + fVar11 * 4.656613e-10 * (float)(uint)((ulong)lVar4 >> 0x21);
  }
  if (((lVar3 == 0) || (-1 < *(char *)(lVar3 + 1))) &&
     (uVar2 = (**(code **)(*(long *)(param_1 + 0x28) + 0x20))((long *)(param_1 + 0x28),0xf),
     (uVar2 & 1) == 0)) {
    return fVar9;
  }
  plVar8 = (long *)(param_1 + 0x28);
  uVar2 = (**(code **)(*plVar8 + 0x20))(plVar8,0xf);
  fVar10 = 0.0;
  if ((((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x30) != '\0')) &&
     ((uVar2 = (**(code **)(*plVar8 + 0x28))(plVar8,0xf), (uVar2 & 1) != 0 &&
      (plVar8 = (long *)(**(code **)(*plVar8 + 0x80))(plVar8), plVar8 != (long *)0x0)))) {
    for (lVar3 = *plVar8; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
      puVar5 = *(ushort **)(lVar3 + 0x20);
      if (puVar5 != (ushort *)0x0) {
        uVar1 = *puVar5;
        uVar7 = (uint)uVar1;
        if (uVar1 < 2) {
          uVar7 = 1;
        }
        uVar2 = (ulong)uVar7;
        pfVar6 = (float *)((long)puVar5 + ((ulong)((uint)uVar1 * 2 + 9) & 0x3fff8));
        do {
          puVar5 = puVar5 + 1;
          if (*puVar5 == 0xf) {
            fVar10 = *pfVar6 + fVar10;
            break;
          }
          pfVar6 = pfVar6 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 1) < '\0')) {
    fVar11 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_1 + 0x48,0xf,param_2);
    fVar10 = fVar11 + fVar10;
  }
  return fVar9 + fVar10 * 1000.0;
}


