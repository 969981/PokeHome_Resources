/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040b5d0; name: FUN_.text__0040b5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040b5d0(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 uStack_51;
  
  FUN__text__00411c2c(&uStack_51);
  lVar3 = _DAT_008a45b8;
  if (param_2 - 0x2000 < 0xffffe001) {
    uVar7 = 0x1f;
  }
  else {
    uVar7 = 0x1f;
    do {
      uVar2 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      lVar9 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
      piVar4 = (int *)(lVar3 + lVar9 * 0x18);
      puVar5 = *(undefined8 **)(piVar4 + 4);
      if (puVar5 != (undefined8 *)0x0) {
        if (puVar5[1] == param_1) {
          puVar6 = (undefined8 *)0x0;
          puVar8 = puVar5;
        }
        else {
          puVar8 = puVar5;
          do {
            puVar6 = puVar8;
            puVar8 = (undefined8 *)puVar6[3];
            if (puVar8 == (undefined8 *)0x0) goto LAB__text__0040b67c;
          } while (puVar8[1] != param_1);
        }
        piVar1 = piVar4 + 4;
        if (puVar5 != puVar8) {
          piVar1 = (int *)(puVar6 + 3);
        }
        *(undefined8 *)piVar1 = puVar8[3];
        if (*(undefined8 **)(piVar4 + 2) == puVar8) {
          *(undefined8 **)(piVar4 + 2) = puVar6;
        }
        *piVar4 = *piVar4 + -1;
        (**(code **)*puVar8)(puVar8);
        FUN__text__00400fc0(0x10,puVar8);
        uVar7 = 1;
      }
LAB__text__0040b67c:
      param_2 = param_2 & (1 << (ulong)((uint)lVar9 & 0x1f) ^ 0xffffffffU);
    } while (param_2 != 0);
  }
  FUN__text__00411c70(&uStack_51);
  return uVar7;
}


