/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063d920; name: FUN_.text__0063d920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0063d920(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar7 = *param_1;
  lVar4 = param_1[1];
  lVar9 = param_2[1];
  if (lVar4 != lVar7) {
    uVar12 = tpidr_el0;
    uVar12 = uVar12 & 0xffffffffffffe000;
    lVar11 = 0;
    lVar5 = *(long *)(uVar12 + 0x98);
    lVar1 = _DAT_0089f718 + 0x10;
    do {
      if (lVar5 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      lVar2 = lVar9 + lVar11;
      lVar3 = lVar4 + lVar11;
      *(long *)((uVar12 | 0x18) + lVar5 * 8) = param_1[3];
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
      *(long *)(lVar2 + -0x110) = lVar1;
      uVar8 = *(undefined8 *)(lVar3 + -0x108);
      *(undefined8 *)(lVar3 + -0x108) = 0;
      *(undefined8 *)(lVar2 + -0x100) = 0;
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      *(undefined8 *)(lVar2 + -0xf0) = 0;
      *(undefined8 *)(lVar2 + -0xe8) = 0;
      *(undefined8 *)(lVar2 + -0x108) = uVar8;
      if (*(code **)(lVar3 + -0xe8) != (code *)0x0) {
        (**(code **)(lVar3 + -0xe8))(lVar3 + -0xe0,lVar2 + -0xe0);
        uVar8 = *(undefined8 *)(lVar3 + -0xf8);
        *(undefined8 *)(lVar2 + -0xe8) = *(undefined8 *)(lVar3 + -0xe8);
        uVar10 = *(undefined8 *)(lVar3 + -0xf0);
        *(undefined8 *)(lVar2 + -0x100) = *(undefined8 *)(lVar3 + -0x100);
        *(undefined8 *)(lVar2 + -0xf8) = uVar8;
        *(undefined8 *)(lVar2 + -0xf0) = uVar10;
        pcVar6 = *(code **)(lVar3 + -0xf8);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0xf0) = 0;
          *(undefined8 *)(lVar3 + -0xe8) = 0;
          *(undefined8 *)(lVar3 + -0x100) = 0;
          *(undefined8 *)(lVar3 + -0xf8) = 0;
          (*pcVar6)(lVar3 + -0xe0);
        }
      }
      *(undefined8 *)(lVar2 + -0x80) = 0;
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      *(undefined8 *)(lVar2 + -0x78) = 0;
      if (*(code **)(lVar3 + -0x68) != (code *)0x0) {
        (**(code **)(lVar3 + -0x68))(lVar3 + -0x60,lVar2 + -0x60);
        uVar8 = *(undefined8 *)(lVar3 + -0x78);
        *(undefined8 *)(lVar2 + -0x68) = *(undefined8 *)(lVar3 + -0x68);
        uVar10 = *(undefined8 *)(lVar3 + -0x70);
        *(undefined8 *)(lVar2 + -0x80) = *(undefined8 *)(lVar3 + -0x80);
        *(undefined8 *)(lVar2 + -0x78) = uVar8;
        *(undefined8 *)(lVar2 + -0x70) = uVar10;
        pcVar6 = *(code **)(lVar3 + -0x78);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar6)(lVar3 + -0x60);
        }
      }
      lVar11 = lVar11 + -0x110;
      *(long *)(lVar2 + -0x110) = 0x867938;
      lVar5 = *(long *)(uVar12 + 0x98) + -1;
      *(long *)(uVar12 + 0x98) = lVar5;
    } while (lVar4 + lVar11 != lVar7);
    lVar9 = lVar9 + lVar11;
  }
  param_2[1] = lVar9;
  lVar7 = *param_1;
  *param_1 = lVar9;
  param_2[1] = lVar7;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


