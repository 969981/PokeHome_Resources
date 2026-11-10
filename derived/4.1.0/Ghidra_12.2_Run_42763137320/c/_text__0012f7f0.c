/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012f7f0; name: FUN_.text__0012f7f0
 */


void FUN__text__0012f7f0(long *param_1,undefined8 *param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar3 = param_2[10];
  uVar5 = param_2[1];
  if ((param_4 - uVar3) + param_2[9] <= uVar5 - uVar3) {
    uVar1 = param_2[9] + param_4;
    uVar2 = uVar3 << 3;
    if (4 < uVar3 >> 0x3d) {
      uVar2 = 0xffffffffffffffff;
    }
    if (uVar3 >> 0x3d == 0) {
      uVar2 = (uVar3 << 3) / 5;
    }
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar5) {
      lVar8 = param_2[8];
      lVar4 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x110,0x10);
      lVar7 = param_2[8];
      FUN__text__0012f980(param_2,lVar7,param_3,lVar7 + param_2[9] * 0x110,lVar4,param_4,param_5);
      if (lVar7 != 0) {
        lVar9 = param_2[9];
        if (lVar9 != 0) {
          lVar7 = lVar7 + 0xb0;
          do {
            pcVar6 = *(code **)(lVar7 + -0x18);
            if (pcVar6 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x10) = 0;
              *(undefined8 *)(lVar7 + -8) = 0;
              *(undefined8 *)(lVar7 + -0x20) = 0;
              *(undefined8 *)(lVar7 + -0x18) = 0;
              (*pcVar6)(lVar7);
            }
            pcVar6 = *(code **)(lVar7 + -0x98);
            if (pcVar6 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x90) = 0;
              *(undefined8 *)(lVar7 + -0x88) = 0;
              *(undefined8 *)(lVar7 + -0xa0) = 0;
              *(undefined8 *)(lVar7 + -0x98) = 0;
              (*pcVar6)(lVar7 + -0x80);
            }
            lVar9 = lVar9 + -1;
            lVar7 = lVar7 + 0x110;
          } while (lVar9 != 0);
        }
        (**(code **)(*(long *)*param_2 + 0x18))
                  ((long *)*param_2,param_2[8],param_2[10] * 0x110,0x10);
      }
      param_2[10] = uVar1;
      param_2[8] = lVar4;
      param_2[9] = param_2[9] + param_4;
      *param_1 = lVar4 + (param_3 - lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


